
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef scalar_t__ vm_offset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void
FUNC_4(vm_page_t VAR_1, unsigned int VAR_2)
{
 if (VAR_0) {
  unsigned long VAR_3 = 1UL << VAR_2;
  unsigned long VAR_4;

  for (VAR_4 = 0; VAR_4 != VAR_3; VAR_4++) {
   vm_page_t VAR_5 = VAR_1 + VAR_4;

   if (FUNC_3(VAR_5))
    FUNC_2(VAR_5);
  }
 } else {
  vm_offset_t VAR_6;

  VAR_6 = (vm_offset_t)FUNC_1(VAR_1);

  FUNC_0(VAR_6, VAR_2);
 }
}
