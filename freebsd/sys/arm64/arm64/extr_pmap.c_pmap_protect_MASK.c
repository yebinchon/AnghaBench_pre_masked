
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int*,int*,int) ;
 int * FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int ,int,int) ;
 int* FUNC_8 (int ,int) ;
 int* FUNC_9 (int*,int) ;
 int* FUNC_10 (int*,int) ;
 int* FUNC_11 (int*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int ,int*,int,int,int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ) ;

void
FUNC_18(pmap_t VAR_20, vm_offset_t VAR_21, vm_offset_t VAR_22, vm_prot_t VAR_23)
{
 vm_offset_t VAR_24, VAR_25;
 pd_entry_t *VAR_26, *VAR_27, *VAR_28;
 pt_entry_t *VAR_29, VAR_30, VAR_31, VAR_32;

 FUNC_1((VAR_23 & ~VAR_16) == 0, ("invalid prot %x", VAR_23));
 if (VAR_23 == VAR_18) {
  FUNC_16(VAR_20, VAR_21, VAR_22);
  return;
 }

 VAR_31 = VAR_32 = 0;
 if ((VAR_23 & VAR_19) == 0) {
  VAR_31 |= VAR_1 | VAR_4;
  VAR_32 |= FUNC_0(VAR_0);
 }
 if ((VAR_23 & VAR_17) == 0) {
  VAR_31 |= VAR_6;
  VAR_32 |= VAR_6;
 }
 if (VAR_31 == 0)
  return;

 FUNC_3(VAR_20);
 for (; VAR_21 < VAR_22; VAR_21 = VAR_25) {

  VAR_26 = FUNC_8(VAR_20, VAR_21);
  if (FUNC_13(VAR_26) == 0) {
   VAR_25 = (VAR_21 + VAR_8) & ~VAR_7;
   if (VAR_25 < VAR_21)
    VAR_25 = VAR_22;
   continue;
  }

  VAR_27 = FUNC_9(VAR_26, VAR_21);
  if (FUNC_13(VAR_27) == 0) {
   VAR_25 = (VAR_21 + VAR_10) & ~VAR_9;
   if (VAR_25 < VAR_21)
    VAR_25 = VAR_22;
   continue;
  }

  VAR_25 = (VAR_21 + VAR_13) & ~VAR_12;
  if (VAR_25 < VAR_21)
   VAR_25 = VAR_22;

  VAR_28 = FUNC_10(VAR_27, VAR_21);
  if (FUNC_13(VAR_28) == 0)
   continue;

  if ((FUNC_13(VAR_28) & VAR_2) == VAR_11) {
   if (VAR_21 + VAR_13 == VAR_25 && VAR_22 >= VAR_25) {
    FUNC_14(VAR_20, VAR_28, VAR_21, VAR_31, VAR_32);
    continue;
   } else if (FUNC_6(VAR_20, VAR_28, VAR_21) == ((void*)0))
    continue;
  }
  FUNC_1((FUNC_13(VAR_28) & VAR_2) == VAR_14,
      ("pmap_protect: Invalid L2 entry after demotion"));

  if (VAR_25 > VAR_22)
   VAR_25 = VAR_22;

  VAR_24 = VAR_25;
  for (VAR_29 = FUNC_11(VAR_28, VAR_21); VAR_21 != VAR_25; VAR_29++,
      VAR_21 += VAR_15) {
   VAR_30 = FUNC_13(VAR_29);
retry:
   if (!FUNC_12(VAR_30) || (VAR_30 & VAR_31) == VAR_32) {
    if (VAR_24 != VAR_25) {
     FUNC_7(VAR_20, VAR_24, VAR_21);
     VAR_24 = VAR_25;
    }
    continue;
   }





   if ((VAR_30 & VAR_5) != 0 &&
       (VAR_32 & FUNC_0(VAR_0)) != 0 &&
       FUNC_15(VAR_30))
    FUNC_17(FUNC_2(VAR_30 & ~VAR_3));

   if (!FUNC_5(VAR_29, &VAR_30, (VAR_30 & ~VAR_31) | VAR_32))
    goto retry;
   if (VAR_24 == VAR_25)
    VAR_24 = VAR_21;
  }
  if (VAR_24 != VAR_25)
   FUNC_7(VAR_20, VAR_24, VAR_21);
 }
 FUNC_4(VAR_20);
}
