
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(vm_offset_t VAR_4, vm_offset_t VAR_5)
{

 FUNC_3(VAR_4, VAR_5);

 if ((VAR_2 & VAR_0) == 0) {
  FUNC_2(VAR_4, VAR_5);
  return;
 }


 if (FUNC_4(VAR_4) == VAR_3)
  return;

 FUNC_0();
 for (; VAR_4 < VAR_5; VAR_4 += VAR_1)
  FUNC_1(VAR_4);
 FUNC_0();
}
