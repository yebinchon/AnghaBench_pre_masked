
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int* FUNC_3 (int ,int) ;
 int* FUNC_4 (int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

vm_page_t
FUNC_8(pmap_t VAR_5, vm_offset_t VAR_6, vm_prot_t VAR_7)
{
 pd_entry_t VAR_8, *VAR_9;
 pt_entry_t VAR_10, VAR_11, VAR_12;
 vm_page_t VAR_13;

 VAR_13 = ((void*)0);
 VAR_11 = FUNC_5(VAR_5);
 VAR_12 = FUNC_6(VAR_5);

 FUNC_1(VAR_5);
 VAR_9 = FUNC_3(VAR_5, VAR_6);
 if (VAR_9 != ((void*)0) && (VAR_8 = *VAR_9)) {
  if (VAR_8 & VAR_2) {
   if ((VAR_8 & VAR_11) != 0 || (VAR_7 & VAR_4) == 0)
    VAR_13 = FUNC_0((VAR_8 & VAR_3) |
        (VAR_6 & VAR_0));
  } else {
   VAR_10 = *FUNC_4(VAR_9, VAR_6);
   if ((VAR_10 & VAR_12) != 0 &&
       ((VAR_10 & VAR_11) != 0 || (VAR_7 & VAR_4) == 0))
    VAR_13 = FUNC_0(VAR_10 & VAR_1);
  }
  if (VAR_13 != ((void*)0) && !FUNC_7(VAR_13))
   VAR_13 = ((void*)0);
 }
 FUNC_2(VAR_5);
 return (VAR_13);
}
