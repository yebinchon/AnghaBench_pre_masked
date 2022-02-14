
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef int pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int*,int,int) ;
 int VAR_16 ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int* FUNC_10 (int*,int) ;
 int* FUNC_11 (int*,int) ;
 int* FUNC_12 (int ,int) ;
 int* FUNC_13 (int*,int) ;
 scalar_t__ FUNC_14 (int ,int*,int,int) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

void
FUNC_19(pmap_t VAR_17, vm_offset_t VAR_18, vm_offset_t VAR_19, vm_prot_t VAR_20)
{
 vm_offset_t VAR_21;
 pml4_entry_t *VAR_22;
 pdp_entry_t *VAR_23;
 pd_entry_t VAR_24, *VAR_25;
 pt_entry_t *VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 boolean_t VAR_31;

 FUNC_0((VAR_20 & ~VAR_12) == 0, ("invalid prot %x", VAR_20));
 if (VAR_20 == VAR_14) {
  FUNC_15(VAR_17, VAR_18, VAR_19);
  return;
 }

 if ((VAR_20 & (VAR_15|VAR_13)) ==
     (VAR_15|VAR_13))
  return;

 VAR_27 = FUNC_6(VAR_17);
 VAR_28 = FUNC_9(VAR_17);
 VAR_30 = FUNC_17(VAR_17);
 VAR_29 = FUNC_16(VAR_17);
 VAR_31 = VAR_0;
 FUNC_2(VAR_17);
 for (; VAR_18 < VAR_19; VAR_18 = VAR_21) {

  VAR_22 = FUNC_12(VAR_17, VAR_18);
  if ((*VAR_22 & VAR_30) == 0) {
   VAR_21 = (VAR_18 + VAR_3) & ~VAR_10;
   if (VAR_21 < VAR_18)
    VAR_21 = VAR_19;
   continue;
  }

  VAR_23 = FUNC_13(VAR_22, VAR_18);
  if ((*VAR_23 & VAR_30) == 0) {
   VAR_21 = (VAR_18 + VAR_1) & ~VAR_5;
   if (VAR_21 < VAR_18)
    VAR_21 = VAR_19;
   continue;
  }

  VAR_21 = (VAR_18 + VAR_2) & ~VAR_6;
  if (VAR_21 < VAR_18)
   VAR_21 = VAR_19;

  VAR_25 = FUNC_11(VAR_23, VAR_18);
  VAR_24 = *VAR_25;




  if (VAR_24 == 0)
   continue;




  if ((VAR_24 & VAR_9) != 0) {




   if (VAR_18 + VAR_2 == VAR_21 && VAR_19 >= VAR_21) {




    if (FUNC_14(VAR_17, VAR_25, VAR_18, VAR_20))
     VAR_31 = VAR_11;
    continue;
   } else if (!FUNC_5(VAR_17, VAR_25, VAR_18)) {



    continue;
   }
  }

  if (VAR_21 > VAR_19)
   VAR_21 = VAR_19;

  for (VAR_26 = FUNC_10(VAR_25, VAR_18); VAR_18 != VAR_21; VAR_26++,
      VAR_18 += VAR_4) {
   pt_entry_t VAR_32, VAR_33;
   vm_page_t VAR_34;

retry:
   VAR_32 = VAR_33 = *VAR_26;
   if ((VAR_33 & VAR_30) == 0)
    continue;

   if ((VAR_20 & VAR_15) == 0) {
    if ((VAR_33 & (VAR_8 | VAR_28 | VAR_29)) ==
        (VAR_8 | VAR_28 | VAR_29)) {
     VAR_34 = FUNC_1(VAR_33 & VAR_7);
     FUNC_18(VAR_34);
    }
    VAR_33 &= ~(VAR_29 | VAR_28);
   }
   if ((VAR_20 & VAR_13) == 0)
    VAR_33 |= VAR_16;

   if (VAR_33 != VAR_32) {
    if (!FUNC_4(VAR_26, VAR_32, VAR_33))
     goto retry;
    if (VAR_32 & VAR_27)
     FUNC_8(VAR_17, VAR_18);
    else
     VAR_31 = VAR_11;
   }
  }
 }
 if (VAR_31)
  FUNC_7(VAR_17);
 FUNC_3(VAR_17);
}
