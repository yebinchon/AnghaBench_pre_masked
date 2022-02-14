
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef uintptr_t vm_paddr_t ;
typedef uintptr_t vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_gen; int pv_list; } ;
typedef TYPE_3__* pv_entry_t ;
typedef uintptr_t pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef uintptr_t pd_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {uintptr_t pv_va; } ;
struct TYPE_13__ {int pv_gen; int pv_list; } ;
struct TYPE_14__ {int oflags; int flags; TYPE_1__ md; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 uintptr_t VAR_5 ;
 uintptr_t VAR_6 ;
 uintptr_t VAR_7 ;
 struct rwlock* FUNC_1 (uintptr_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct spglist*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__*,int ) ;
 int * FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *,TYPE_3__*,int ) ;
 scalar_t__ VAR_9 ;
 uintptr_t FUNC_11 (TYPE_2__*) ;
 struct rwlock* FUNC_12 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_13 (uintptr_t*,uintptr_t) ;
 struct md_page* FUNC_14 (uintptr_t) ;
 uintptr_t FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,uintptr_t*,uintptr_t,struct rwlock**) ;
 int FUNC_17 (scalar_t__,uintptr_t) ;
 uintptr_t FUNC_18 (scalar_t__) ;
 uintptr_t* FUNC_19 (scalar_t__,uintptr_t) ;
 uintptr_t* FUNC_20 (uintptr_t*,uintptr_t) ;
 int FUNC_21 (scalar_t__,uintptr_t*,uintptr_t,uintptr_t,struct spglist*,struct rwlock**) ;
 uintptr_t FUNC_22 (scalar_t__) ;
 struct md_page VAR_11 ;
 int VAR_12 ;
 int FUNC_23 (struct rwlock*) ;
 int FUNC_24 (struct rwlock*) ;
 scalar_t__ FUNC_25 (scalar_t__,uintptr_t) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (struct spglist*,int) ;

int
FUNC_28(vm_page_t VAR_13)
{
 struct md_page *VAR_14;
 pv_entry_t VAR_15, VAR_16;
 pmap_t VAR_17;
 struct rwlock *VAR_18;
 pd_entry_t VAR_19, *VAR_20;
 pt_entry_t *VAR_21, VAR_22, VAR_23, VAR_24;
 vm_offset_t VAR_25;
 vm_paddr_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 struct spglist VAR_31;
 boolean_t VAR_32;

 FUNC_0((VAR_13->oflags & VAR_10) == 0,
     ("pmap_ts_referenced: page %p is not managed", VAR_13));
 FUNC_6(&VAR_31);
 VAR_27 = 0;
 VAR_26 = FUNC_11(VAR_13);
 VAR_18 = FUNC_1(VAR_26);
 VAR_14 = (VAR_13->flags & VAR_4) != 0 ? &VAR_11 : FUNC_14(VAR_26);
 FUNC_23(VAR_18);
retry:
 VAR_29 = 0;
 if ((VAR_16 = FUNC_7(&VAR_14->pv_list)) == ((void*)0))
  goto small_mappings;
 VAR_15 = VAR_16;
 do {
  if (VAR_16 == ((void*)0))
   VAR_16 = VAR_15;
  VAR_17 = FUNC_5(VAR_15);
  if (!FUNC_3(VAR_17)) {
   VAR_30 = VAR_14->pv_gen;
   FUNC_24(VAR_18);
   FUNC_2(VAR_17);
   FUNC_23(VAR_18);
   if (VAR_30 != VAR_14->pv_gen) {
    FUNC_4(VAR_17);
    goto retry;
   }
  }
  VAR_22 = FUNC_15(VAR_17);
  VAR_23 = FUNC_18(VAR_17);
  VAR_24 = FUNC_22(VAR_17);
  VAR_25 = VAR_15->pv_va;
  VAR_20 = FUNC_19(VAR_17, VAR_15->pv_va);
  VAR_19 = *VAR_20;
  if ((VAR_19 & (VAR_23 | VAR_24)) == (VAR_23 | VAR_24)) {





   FUNC_26(VAR_13);
  }
  if ((VAR_19 & VAR_22) != 0) {
   if ((((VAR_26 >> VAR_2) ^ (VAR_15->pv_va >> VAR_3) ^
       (uintptr_t)VAR_17) & (VAR_1 - 1)) == 0 &&
       (VAR_19 & VAR_7) == 0) {
    if (FUNC_25(VAR_17, VAR_19)) {
     FUNC_13(VAR_20, VAR_22);
     FUNC_17(VAR_17, VAR_15->pv_va);
     VAR_32 = VAR_0;
    } else if (FUNC_16(VAR_17, VAR_20,
        VAR_15->pv_va, &VAR_18)) {
     VAR_32 = VAR_9;
     VAR_25 += FUNC_11(VAR_13) - (VAR_19 &
         VAR_6);
     VAR_21 = FUNC_20(VAR_20, VAR_25);
     FUNC_21(VAR_17, VAR_21, VAR_25, *VAR_20,
         ((void*)0), &VAR_18);
     FUNC_17(VAR_17, VAR_25);
    } else
     VAR_32 = VAR_9;

    if (VAR_32) {





     if (VAR_16 == VAR_15)
      VAR_16 = ((void*)0);
     VAR_15 = ((void*)0);
    }
    VAR_27++;
    FUNC_0(VAR_18 == FUNC_12(VAR_13),
        ("inconsistent pv lock %p %p for page %p",
        VAR_18, FUNC_12(VAR_13), VAR_13));
   } else
    VAR_29++;
  }
  FUNC_4(VAR_17);

  if (VAR_15 != ((void*)0) && FUNC_9(VAR_15, VAR_12) != ((void*)0)) {
   FUNC_10(&VAR_14->pv_list, VAR_15, VAR_12);
   FUNC_8(&VAR_14->pv_list, VAR_15, VAR_12);
   VAR_14->pv_gen++;
  }
  if (VAR_27 + VAR_29 >= VAR_8)
   goto out;
 } while ((VAR_15 = FUNC_7(&VAR_14->pv_list)) != VAR_16);
small_mappings:
 if ((VAR_16 = FUNC_7(&VAR_13->md.pv_list)) == ((void*)0))
  goto out;
 VAR_15 = VAR_16;
 do {
  if (VAR_16 == ((void*)0))
   VAR_16 = VAR_15;
  VAR_17 = FUNC_5(VAR_15);
  if (!FUNC_3(VAR_17)) {
   VAR_30 = VAR_14->pv_gen;
   VAR_28 = VAR_13->md.pv_gen;
   FUNC_24(VAR_18);
   FUNC_2(VAR_17);
   FUNC_23(VAR_18);
   if (VAR_30 != VAR_14->pv_gen || VAR_28 != VAR_13->md.pv_gen) {
    FUNC_4(VAR_17);
    goto retry;
   }
  }
  VAR_22 = FUNC_15(VAR_17);
  VAR_23 = FUNC_18(VAR_17);
  VAR_24 = FUNC_22(VAR_17);
  VAR_20 = FUNC_19(VAR_17, VAR_15->pv_va);
  FUNC_0((*VAR_20 & VAR_5) == 0,
      ("pmap_ts_referenced: found a 2mpage in page %p's pv list",
      VAR_13));
  VAR_21 = FUNC_20(VAR_20, VAR_15->pv_va);
  if ((*VAR_21 & (VAR_23 | VAR_24)) == (VAR_23 | VAR_24))
   FUNC_26(VAR_13);
  if ((*VAR_21 & VAR_22) != 0) {
   if (FUNC_25(VAR_17, *VAR_21)) {
    FUNC_13(VAR_21, VAR_22);
    FUNC_17(VAR_17, VAR_15->pv_va);
    VAR_27++;
   } else if ((*VAR_21 & VAR_7) == 0) {






    FUNC_21(VAR_17, VAR_21, VAR_15->pv_va,
        *VAR_20, &VAR_31, &VAR_18);
    FUNC_17(VAR_17, VAR_15->pv_va);
    VAR_27++;
    if (VAR_16 == VAR_15)
     VAR_16 = ((void*)0);
    VAR_15 = ((void*)0);
    FUNC_0(VAR_18 == FUNC_12(VAR_13),
        ("inconsistent pv lock %p %p for page %p",
        VAR_18, FUNC_12(VAR_13), VAR_13));
   } else
    VAR_29++;
  }
  FUNC_4(VAR_17);

  if (VAR_15 != ((void*)0) && FUNC_9(VAR_15, VAR_12) != ((void*)0)) {
   FUNC_10(&VAR_13->md.pv_list, VAR_15, VAR_12);
   FUNC_8(&VAR_13->md.pv_list, VAR_15, VAR_12);
   VAR_13->md.pv_gen++;
  }
 } while ((VAR_15 = FUNC_7(&VAR_13->md.pv_list)) != VAR_16 && VAR_27 +
     VAR_29 < VAR_8);
out:
 FUNC_24(VAR_18);
 FUNC_27(&VAR_31, 1);
 return (VAR_27 + VAR_29);
}
