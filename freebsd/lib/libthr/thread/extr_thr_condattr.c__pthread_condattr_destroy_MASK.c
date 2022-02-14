
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_condattr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int
FUNC_1(pthread_condattr_t *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0)) {
  VAR_2 = VAR_0;
 } else {
  FUNC_0(*VAR_1);
  *VAR_1 = ((void*)0);
  VAR_2 = 0;
 }
 return(VAR_2);
}
