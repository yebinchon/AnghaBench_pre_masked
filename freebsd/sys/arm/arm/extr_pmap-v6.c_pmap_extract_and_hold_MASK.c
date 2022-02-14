
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;
typedef int pmap_t ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int* FUNC_4 (int ,int) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;

vm_page_t
FUNC_14(pmap_t VAR_4, vm_offset_t VAR_5, vm_prot_t VAR_6)
{
 vm_paddr_t VAR_7;
 pt1_entry_t VAR_8;
 pt2_entry_t VAR_9, *VAR_10;
 vm_page_t VAR_11;

 VAR_11 = ((void*)0);
 FUNC_1(VAR_4);
 VAR_8 = FUNC_8(FUNC_3(VAR_4, VAR_5));
 if (FUNC_7(VAR_8)) {
  if (!(VAR_8 & VAR_1) || !(VAR_6 & VAR_3)) {
   VAR_7 = FUNC_9(VAR_8) | (VAR_5 & VAR_0);
   VAR_11 = FUNC_0(VAR_7);
   if (!FUNC_13(VAR_11))
    VAR_11 = ((void*)0);
  }
 } else if (FUNC_6(VAR_8)) {
  VAR_10 = FUNC_4(VAR_4, VAR_5);
  VAR_9 = FUNC_11(VAR_10);
  FUNC_5(VAR_10);
  if (FUNC_10(VAR_9) &&
      (!(VAR_9 & VAR_2) || !(VAR_6 & VAR_3))) {
   VAR_7 = FUNC_12(VAR_9);
   VAR_11 = FUNC_0(VAR_7);
   if (!FUNC_13(VAR_11))
    VAR_11 = ((void*)0);
  }
 }
 FUNC_2(VAR_4);
 return (VAR_11);
}
