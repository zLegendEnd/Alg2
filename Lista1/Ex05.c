#include <stdio.h>

int fibo(int n)
	{
	if((n == 0) || (n == 1))
		{
		return(n);
		}
	else
		{
		return(fibo(n-1) + fibo(n-2));
		}
	}

int
main()
	{
	int n;

	//puts("Entre com o enezimo numero:");
	scanf("%d", &n);
 
	//printf("Fibonati: );
  printf("%d\n", fibo(n));

	return 0;
	}
