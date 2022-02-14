
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kvm_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(kvm_t *VAR_1)
{

 if (VAR_1 == ((void*)0)) {
  FUNC_0();
  return (0);
 }

 if (VAR_0 == 0)
  if (FUNC_1(VAR_1) < 0)
   return (-1);
 return (VAR_0);
}
