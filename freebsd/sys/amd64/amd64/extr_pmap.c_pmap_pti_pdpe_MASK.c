
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_pindex_t ;
typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pml4_entry_t ;
typedef int pdp_entry_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static pdp_entry_t *
FUNC_8(vm_offset_t VAR_6)
{
 pml4_entry_t *VAR_7;
 pdp_entry_t *VAR_8;
 vm_page_t VAR_9;
 vm_pindex_t VAR_10;
 vm_paddr_t VAR_11;

 FUNC_1(VAR_4);

 VAR_10 = FUNC_5(VAR_6);
 VAR_7 = &VAR_5[VAR_10];
 VAR_9 = ((void*)0);
 if (*VAR_7 == 0) {
  if (VAR_3)
   FUNC_3("pml4 alloc after finalization\n");
  VAR_9 = FUNC_6();
  if (*VAR_7 != 0) {
   FUNC_7(VAR_9);
   VAR_11 = *VAR_7 & ~VAR_0;
  } else {
   VAR_11 = FUNC_2(VAR_9);
   *VAR_7 = VAR_11 | VAR_1 | VAR_2;
  }
 } else {
  VAR_11 = *VAR_7 & ~VAR_0;
 }
 VAR_8 = (pdp_entry_t *)FUNC_0(VAR_11) + FUNC_4(VAR_6);
 return (VAR_8);
}
