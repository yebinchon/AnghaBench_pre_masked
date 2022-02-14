
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(vm_offset_t VAR_1, int VAR_2)
{
 vm_paddr_t VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3) {
   FUNC_1(FUNC_0(VAR_3));
   FUNC_2(VAR_1);
  }
  VAR_1 += VAR_0;
 }
}
