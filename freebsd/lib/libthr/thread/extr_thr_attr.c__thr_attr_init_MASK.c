
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_attr {int dummy; } ;
typedef int * pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;

int
FUNC_3(pthread_attr_t *VAR_2)
{
 int VAR_3;
 pthread_attr_t VAR_4;

 FUNC_0();


 if ((VAR_4 = (pthread_attr_t) FUNC_1(sizeof(struct pthread_attr))) == ((void*)0))

  VAR_3 = VAR_0;
 else {

  FUNC_2(VAR_4, &VAR_1, sizeof(struct pthread_attr));


  *VAR_2 = VAR_4;
  VAR_3 = 0;
 }
 return(VAR_3);
}
