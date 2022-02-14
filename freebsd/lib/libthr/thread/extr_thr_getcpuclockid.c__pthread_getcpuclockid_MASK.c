
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_t ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;

int
FUNC_2(pthread_t VAR_3, clockid_t *VAR_4)
{

 if (VAR_3 == ((void*)0))
  return (VAR_1);

 if (FUNC_1(FUNC_0(VAR_3), VAR_0, VAR_4))
  return (VAR_2);
 return (0);
}
