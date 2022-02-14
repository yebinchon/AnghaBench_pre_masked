
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_pindex_t ;
typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef scalar_t__ pt_entry_t ;
typedef int pml4_entry_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int* VAR_3 ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static pt_entry_t *
FUNC_8(vm_offset_t VAR_4)
{
 pml4_entry_t *VAR_5;
 pdp_entry_t *VAR_6;
 pd_entry_t *VAR_7;
 pt_entry_t *VAR_8;
 vm_page_t VAR_9;
 vm_pindex_t VAR_10, VAR_11, VAR_12;
 vm_paddr_t VAR_13;

 VAR_10 = FUNC_6(VAR_4);
 VAR_5 = &VAR_3[VAR_10];
 if (*VAR_5 == 0) {
  VAR_9 = FUNC_3();
  VAR_13 = FUNC_2(VAR_9);
  *VAR_5 = VAR_13 | VAR_1 | VAR_2;
 } else {
  VAR_13 = *VAR_5 & ~VAR_0;
 }

 VAR_6 = (pdp_entry_t *)FUNC_1(VAR_13);
 VAR_11 = FUNC_5(VAR_4);
 VAR_6 += VAR_11;
 if (*VAR_6 == 0) {
  VAR_9 = FUNC_3();
  VAR_13 = FUNC_2(VAR_9);
  *VAR_6 = VAR_13 | VAR_1 | VAR_2;
 } else {
  VAR_13 = *VAR_6 & ~VAR_0;
 }

 VAR_7 = (pd_entry_t *)FUNC_1(VAR_13);
 VAR_12 = FUNC_4(VAR_4);
 VAR_7 += VAR_12;
 if (*VAR_7 == 0) {
  VAR_9 = FUNC_3();
  VAR_13 = FUNC_2(VAR_9);
  *VAR_7 = VAR_13 | VAR_1 | VAR_2;
 } else {
  VAR_13 = *VAR_7 & ~VAR_0;
 }

 VAR_8 = (pt_entry_t *)FUNC_1(VAR_13);
 VAR_8 += FUNC_7(VAR_4);
 FUNC_0(*VAR_8 == 0, ("va %#jx *pt %#jx", VAR_4, *VAR_8));

 return (VAR_8);
}
