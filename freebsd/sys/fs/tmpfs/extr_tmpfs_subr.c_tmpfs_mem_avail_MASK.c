
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_ooffset_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;

size_t
FUNC_2(void)
{
 vm_ooffset_t VAR_2;

 VAR_2 = VAR_0 + FUNC_1() - VAR_1;
 if (FUNC_0(VAR_2 < 0))
  VAR_2 = 0;
 return (VAR_2);
}
