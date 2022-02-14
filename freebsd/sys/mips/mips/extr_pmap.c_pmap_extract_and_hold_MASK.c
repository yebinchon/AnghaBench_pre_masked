
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int * FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

vm_page_t
FUNC_7(pmap_t VAR_3, vm_offset_t VAR_4, vm_prot_t VAR_5)
{
 pt_entry_t VAR_6, *VAR_7;
 vm_paddr_t VAR_8;
 vm_page_t VAR_9;

 VAR_9 = ((void*)0);
 FUNC_1(VAR_3);
 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (VAR_7 != ((void*)0)) {
  VAR_6 = *VAR_7;
  if (FUNC_5(&VAR_6, VAR_1) && (!FUNC_5(&VAR_6, VAR_0) ||
      (VAR_5 & VAR_2) == 0)) {
   VAR_8 = FUNC_3(VAR_6);
   VAR_9 = FUNC_0(VAR_8);
   if (!FUNC_6(VAR_9))
    VAR_9 = ((void*)0);
  }
 }
 FUNC_2(VAR_3);
 return (VAR_9);
}
