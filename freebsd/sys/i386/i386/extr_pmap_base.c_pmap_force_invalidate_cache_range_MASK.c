
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;

void
FUNC_6(vm_offset_t VAR_7, vm_offset_t VAR_8)
{

 VAR_7 &= ~(vm_offset_t)(VAR_3 - 1);
 if (VAR_8 - VAR_7 >= VAR_2) {




  FUNC_3();
  return;
 }
 if ((VAR_4 & VAR_0) != 0) {







  FUNC_5();
  for (; VAR_7 < VAR_8; VAR_7 += VAR_3)
   FUNC_1(VAR_7);
  FUNC_5();
 } else {



  if (VAR_5 != VAR_1)
   FUNC_2();
  for (; VAR_7 < VAR_8; VAR_7 += VAR_3)
   FUNC_0(VAR_7);
  if (VAR_5 != VAR_1)
   FUNC_2();
 }
}
