
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex_attr {int dummy; } ;
typedef int * pthread_mutexattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

int
FUNC_2(pthread_mutexattr_t *VAR_2)
{
 int VAR_3;
 pthread_mutexattr_t VAR_4;

 if ((VAR_4 = (pthread_mutexattr_t)
     FUNC_0(sizeof(struct pthread_mutex_attr))) == ((void*)0)) {
  VAR_3 = VAR_0;
 } else {
  FUNC_1(VAR_4, &VAR_1,
      sizeof(struct pthread_mutex_attr));
  *VAR_2 = VAR_4;
  VAR_3 = 0;
 }
 return (VAR_3);
}
