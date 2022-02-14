
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef int pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int*,int,struct rwlock**) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ) ;
 int* FUNC_14 (int*,int) ;
 int* FUNC_15 (int*,int) ;
 int* FUNC_16 (int ,int) ;
 int* FUNC_17 (int*,int) ;
 int FUNC_18 (int ,int*,int,int,int *,struct rwlock**) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct rwlock*) ;
 int FUNC_22 (int ) ;

void
FUNC_23(pmap_t VAR_13, vm_offset_t VAR_14, vm_offset_t VAR_15, int VAR_16)
{
 struct rwlock *VAR_17;
 pml4_entry_t *VAR_18;
 pdp_entry_t *VAR_19;
 pd_entry_t VAR_20, *VAR_21;
 pt_entry_t *VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 vm_offset_t VAR_28, VAR_29;
 vm_page_t VAR_30;
 bool VAR_31;

 if (VAR_16 != VAR_0 && VAR_16 != VAR_1)
  return;







 if (FUNC_9(VAR_13))
  return;

 VAR_23 = FUNC_5(VAR_13);
 VAR_24 = FUNC_10(VAR_13);
 VAR_25 = FUNC_13(VAR_13);
 VAR_27 = FUNC_20(VAR_13);
 VAR_26 = FUNC_19(VAR_13);
 VAR_31 = 0;
 FUNC_7();
 FUNC_2(VAR_13);
 for (; VAR_14 < VAR_15; VAR_14 = VAR_29) {
  VAR_18 = FUNC_16(VAR_13, VAR_14);
  if ((*VAR_18 & VAR_27) == 0) {
   VAR_29 = (VAR_14 + VAR_4) & ~VAR_12;
   if (VAR_29 < VAR_14)
    VAR_29 = VAR_15;
   continue;
  }
  VAR_19 = FUNC_17(VAR_18, VAR_14);
  if ((*VAR_19 & VAR_27) == 0) {
   VAR_29 = (VAR_14 + VAR_2) & ~VAR_6;
   if (VAR_29 < VAR_14)
    VAR_29 = VAR_15;
   continue;
  }
  VAR_29 = (VAR_14 + VAR_3) & ~VAR_7;
  if (VAR_29 < VAR_14)
   VAR_29 = VAR_15;
  VAR_21 = FUNC_15(VAR_19, VAR_14);
  VAR_20 = *VAR_21;
  if ((VAR_20 & VAR_27) == 0)
   continue;
  else if ((VAR_20 & VAR_10) != 0) {
   if ((VAR_20 & VAR_9) == 0)
    continue;
   VAR_17 = ((void*)0);
   if (!FUNC_8(VAR_13, VAR_21, VAR_14, &VAR_17)) {
    if (VAR_17 != ((void*)0))
     FUNC_21(VAR_17);




    continue;
   }
   if ((VAR_20 & VAR_11) == 0) {
    VAR_28 = VAR_15;
    if (VAR_28 > VAR_29)
     VAR_28 = VAR_29;
    VAR_28 -= VAR_5;
    FUNC_0(VAR_28 >= VAR_14,
        ("pmap_advise: no address gap"));
    VAR_22 = FUNC_14(VAR_21, VAR_28);
    FUNC_0((*VAR_22 & VAR_27) != 0,
        ("pmap_advise: invalid PTE"));
    FUNC_18(VAR_13, VAR_22, VAR_28, *VAR_21, ((void*)0),
        &VAR_17);
    VAR_31 = 1;
   }
   if (VAR_17 != ((void*)0))
    FUNC_21(VAR_17);
  }
  if (VAR_29 > VAR_15)
   VAR_29 = VAR_15;
  VAR_28 = VAR_29;
  for (VAR_22 = FUNC_14(VAR_21, VAR_14); VAR_14 != VAR_29; VAR_22++,
      VAR_14 += VAR_5) {
   if ((*VAR_22 & (VAR_9 | VAR_27)) != (VAR_9 | VAR_27))
    goto maybe_invlrng;
   else if ((*VAR_22 & (VAR_25 | VAR_26)) == (VAR_25 | VAR_26)) {
    if (VAR_16 == VAR_0) {





     VAR_30 = FUNC_1(*VAR_22 & VAR_8);
     FUNC_22(VAR_30);
    }
    FUNC_4(VAR_22, VAR_25 | VAR_23);
   } else if ((*VAR_22 & VAR_23) != 0)
    FUNC_4(VAR_22, VAR_23);
   else
    goto maybe_invlrng;

   if ((*VAR_22 & VAR_24) != 0) {
    if (VAR_28 == VAR_29)
     VAR_28 = VAR_14;
   } else
    VAR_31 = 1;
   continue;
maybe_invlrng:
   if (VAR_28 != VAR_29) {
    FUNC_12(VAR_13, VAR_28, VAR_14);
    VAR_28 = VAR_29;
   }
  }
  if (VAR_28 != VAR_29)
   FUNC_12(VAR_13, VAR_28, VAR_14);
 }
 if (VAR_31)
  FUNC_11(VAR_13);
 FUNC_3(VAR_13);
 FUNC_6();
}
