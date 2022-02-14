
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int*,int) ;
 int* FUNC_3 (int ,int) ;
 int* FUNC_4 (int*,int) ;
 int FUNC_5 (int ) ;

vm_paddr_t
FUNC_6(pmap_t VAR_6, vm_offset_t VAR_7)
{
 pdp_entry_t *VAR_8;
 pd_entry_t *VAR_9;
 pt_entry_t *VAR_10, VAR_11;
 vm_paddr_t VAR_12;

 VAR_12 = 0;
 VAR_11 = FUNC_5(VAR_6);
 FUNC_0(VAR_6);
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 != ((void*)0) && (*VAR_8 & VAR_11) != 0) {
  if ((*VAR_8 & VAR_4) != 0)
   VAR_12 = (*VAR_8 & VAR_5) | (VAR_7 & VAR_1);
  else {
   VAR_9 = FUNC_4(VAR_8, VAR_7);
   if ((*VAR_9 & VAR_11) != 0) {
    if ((*VAR_9 & VAR_4) != 0) {
     VAR_12 = (*VAR_9 & VAR_5) |
         (VAR_7 & VAR_2);
    } else {
     VAR_10 = FUNC_2(VAR_9, VAR_7);
     VAR_12 = (*VAR_10 & VAR_3) |
         (VAR_7 & VAR_0);
    }
   }
  }
 }
 FUNC_1(VAR_6);
 return (VAR_12);
}
