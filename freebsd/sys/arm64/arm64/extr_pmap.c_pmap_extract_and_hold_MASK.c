
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int *) ;

vm_page_t
FUNC_9(pmap_t VAR_10, vm_offset_t VAR_11, vm_prot_t VAR_12)
{
 pt_entry_t *VAR_13, VAR_14;
 vm_offset_t VAR_15;
 vm_page_t VAR_16;
 int VAR_17;

 VAR_16 = ((void*)0);
 FUNC_4(VAR_10);
 VAR_13 = FUNC_7(VAR_10, VAR_11, &VAR_17);
 if (VAR_13 != ((void*)0)) {
  VAR_14 = FUNC_6(VAR_13);

  FUNC_2(VAR_17 > 0 && VAR_17 <= 3,
      ("pmap_extract_and_hold: Invalid level %d", VAR_17));
  FUNC_1(VAR_4 == VAR_6);
  FUNC_2((VAR_17 == 3 && (VAR_14 & VAR_2) == VAR_8) ||
      (VAR_17 < 3 && (VAR_14 & VAR_2) == VAR_4),
      ("pmap_extract_and_hold: Invalid pte at L%d: %lx", VAR_17,
       VAR_14 & VAR_2));
  if (((VAR_14 & VAR_1) == FUNC_0(VAR_0)) ||
      ((VAR_12 & VAR_9) == 0)) {
   switch(VAR_17) {
   case 1:
    VAR_15 = VAR_11 & VAR_5;
    break;
   case 2:
    VAR_15 = VAR_11 & VAR_7;
    break;
   case 3:
   default:
    VAR_15 = 0;
   }
   VAR_16 = FUNC_3((VAR_14 & ~VAR_3) | VAR_15);
   if (!FUNC_8(VAR_16))
    VAR_16 = ((void*)0);
  }
 }
 FUNC_5(VAR_10);
 return (VAR_16);
}
