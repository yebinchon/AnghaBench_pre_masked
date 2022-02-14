
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;

void
FUNC_4(vm_page_t VAR_3[], vm_offset_t VAR_4[], int VAR_5,
    boolean_t VAR_6)
{
 vm_paddr_t VAR_7;
 int VAR_8;

 if (!VAR_6)
  FUNC_2();
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_0(VAR_3[VAR_8]);
  if (VAR_7 >= VAR_1) {
   if (VAR_6)
    FUNC_1(VAR_4[VAR_8], 1);
   FUNC_3(VAR_2, VAR_4[VAR_8], VAR_0);
  }
 }
}
