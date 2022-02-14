
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_cond_attr {int dummy; } ;
typedef int * pthread_condattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

int
FUNC_2(pthread_condattr_t *VAR_2)
{
 pthread_condattr_t VAR_3;
 int VAR_4;

 if ((VAR_3 = (pthread_condattr_t)
     FUNC_0(sizeof(struct pthread_cond_attr))) == ((void*)0)) {
  VAR_4 = VAR_0;
 } else {
  FUNC_1(VAR_3, &VAR_1,
      sizeof(struct pthread_cond_attr));
  *VAR_2 = VAR_3;
  VAR_4 = 0;
 }
 return (VAR_4);
}
