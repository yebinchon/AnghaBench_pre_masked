
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int ,int*,int,struct rwlock**) ;
 int FUNC_9 (int ,int,int) ;
 int* FUNC_10 (int ,int) ;
 int* FUNC_11 (int*,int) ;
 int* FUNC_12 (int*,int) ;
 int* FUNC_13 (int*,int) ;
 int FUNC_14 (int*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int ,int*,int,int,int *,struct rwlock**) ;
 int FUNC_17 (struct rwlock*) ;
 int FUNC_18 (int ) ;

void
FUNC_19(pmap_t VAR_19, vm_offset_t VAR_20, vm_offset_t VAR_21, int VAR_22)
{
 struct rwlock *VAR_23;
 vm_offset_t VAR_24, VAR_25;
 vm_page_t VAR_26;
 pd_entry_t *VAR_27, *VAR_28, *VAR_29, VAR_30;
 pt_entry_t *VAR_31, VAR_32;

 if (VAR_22 != VAR_16 && VAR_22 != VAR_17)
  return;

 FUNC_3(VAR_19);
 for (; VAR_20 < VAR_21; VAR_20 = VAR_25) {
  VAR_27 = FUNC_10(VAR_19, VAR_20);
  if (FUNC_14(VAR_27) == 0) {
   VAR_25 = (VAR_20 + VAR_7) & ~VAR_6;
   if (VAR_25 < VAR_20)
    VAR_25 = VAR_21;
   continue;
  }
  VAR_28 = FUNC_11(VAR_27, VAR_20);
  if (FUNC_14(VAR_28) == 0) {
   VAR_25 = (VAR_20 + VAR_9) & ~VAR_8;
   if (VAR_25 < VAR_20)
    VAR_25 = VAR_21;
   continue;
  }
  VAR_25 = (VAR_20 + VAR_12) & ~VAR_11;
  if (VAR_25 < VAR_20)
   VAR_25 = VAR_21;
  VAR_29 = FUNC_12(VAR_28, VAR_20);
  VAR_30 = FUNC_14(VAR_29);
  if (VAR_30 == 0)
   continue;
  if ((VAR_30 & VAR_2) == VAR_10) {
   if ((VAR_30 & VAR_4) == 0)
    continue;
   VAR_23 = ((void*)0);
   if (!FUNC_8(VAR_19, VAR_29, VAR_20, &VAR_23)) {
    if (VAR_23 != ((void*)0))
     FUNC_17(VAR_23);




    continue;
   }
   if ((VAR_30 & VAR_5) == 0) {
    VAR_24 = VAR_21;
    if (VAR_24 > VAR_25)
     VAR_24 = VAR_25;
    VAR_24 -= VAR_18;
    FUNC_1(VAR_24 >= VAR_20,
        ("pmap_advise: no address gap"));
    VAR_31 = FUNC_13(VAR_29, VAR_24);
    FUNC_1(FUNC_14(VAR_31) != 0,
        ("pmap_advise: invalid PTE"));
    FUNC_16(VAR_19, VAR_31, VAR_24, FUNC_14(VAR_29),
        ((void*)0), &VAR_23);
   }
   if (VAR_23 != ((void*)0))
    FUNC_17(VAR_23);
  }
  FUNC_1((FUNC_14(VAR_29) & VAR_2) == VAR_13,
      ("pmap_advise: invalid L2 entry after demotion"));
  if (VAR_25 > VAR_21)
   VAR_25 = VAR_21;
  VAR_24 = VAR_25;
  for (VAR_31 = FUNC_13(VAR_29, VAR_20); VAR_20 != VAR_25; VAR_31++,
      VAR_20 += VAR_15) {
   VAR_32 = FUNC_14(VAR_31);
   if ((VAR_32 & (VAR_4 | VAR_2)) !=
       (VAR_4 | VAR_14))
    goto maybe_invlrng;
   else if (FUNC_15(VAR_32)) {
    if (VAR_22 == VAR_16) {





     VAR_26 = FUNC_2(VAR_32 & ~VAR_3);
     FUNC_18(VAR_26);
    }
    while (!FUNC_5(VAR_31, &VAR_32,
        (VAR_32 & ~VAR_0) | FUNC_0(VAR_1)))
     FUNC_6();
   } else if ((VAR_32 & VAR_0) != 0)
    FUNC_7(VAR_31, VAR_0);
   else
    goto maybe_invlrng;
   if (VAR_24 == VAR_25)
    VAR_24 = VAR_20;
   continue;
maybe_invlrng:
   if (VAR_24 != VAR_25) {
    FUNC_9(VAR_19, VAR_24, VAR_20);
    VAR_24 = VAR_25;
   }
  }
  if (VAR_24 != VAR_25)
   FUNC_9(VAR_19, VAR_24, VAR_20);
 }
 FUNC_4(VAR_19);
}
