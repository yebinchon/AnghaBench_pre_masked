
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(vm_offset_t VAR_6, vm_offset_t VAR_7)
{

 VAR_6 &= ~(vm_offset_t)(VAR_2 - 1);







 if (FUNC_4(VAR_6) == VAR_5)
  return;

 if ((VAR_3 & VAR_0) != 0) {







  FUNC_0();
  for (; VAR_6 < VAR_7; VAR_6 += VAR_2)
   FUNC_2(VAR_6);
  FUNC_0();
 } else {



  if (VAR_4 != VAR_1)
   FUNC_3();
  for (; VAR_6 < VAR_7; VAR_6 += VAR_2)
   FUNC_1(VAR_6);
  if (VAR_4 != VAR_1)
   FUNC_3();
 }
}
