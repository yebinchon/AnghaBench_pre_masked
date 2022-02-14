
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_rwlockattr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int
FUNC_1(pthread_rwlockattr_t *VAR_1)
{
 pthread_rwlockattr_t VAR_2;

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 VAR_2 = *VAR_1;
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_2);
 return (0);
}
