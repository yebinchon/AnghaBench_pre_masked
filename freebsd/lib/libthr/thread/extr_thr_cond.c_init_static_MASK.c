
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef int * pthread_cond_t ;


 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int
FUNC_3(struct pthread *VAR_1, pthread_cond_t *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, &VAR_0);

 if (*VAR_2 == ((void*)0))
  VAR_3 = FUNC_2(VAR_2, ((void*)0));
 else
  VAR_3 = 0;

 FUNC_1(VAR_1, &VAR_0);

 return (VAR_3);
}
