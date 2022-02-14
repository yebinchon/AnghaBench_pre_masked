
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef uintptr_t vm_paddr_t ;
typedef uintptr_t vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_gen; int pv_list; } ;
typedef TYPE_3__* pv_entry_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int pd_entry_t ;
struct TYPE_14__ {uintptr_t pv_va; } ;
struct TYPE_12__ {int pv_gen; int pv_list; } ;
struct TYPE_13__ {int oflags; int flags; TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 uintptr_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 uintptr_t VAR_7 ;
 int VAR_8 ;
 struct rwlock* FUNC_1 (uintptr_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct spglist*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__*,int ) ;
 int * FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *,TYPE_3__*,int ) ;
 uintptr_t FUNC_11 (TYPE_2__*) ;
 int VAR_10 ;
 struct md_page* FUNC_12 (uintptr_t) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 (scalar_t__,uintptr_t) ;
 int* FUNC_15 (int*,uintptr_t) ;
 int* FUNC_16 (int*,uintptr_t) ;
 int FUNC_17 (int*) ;
 int* FUNC_18 (scalar_t__,uintptr_t,int*) ;
 scalar_t__ FUNC_19 (int) ;
 struct md_page VAR_11 ;
 int VAR_12 ;
 int FUNC_20 (struct rwlock*) ;
 int FUNC_21 (struct rwlock*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (struct spglist*,int) ;

int
FUNC_24(vm_page_t VAR_13)
{
 struct md_page *VAR_14;
 pv_entry_t VAR_15, VAR_16;
 pmap_t VAR_17;
 struct rwlock *VAR_18;
 pd_entry_t *VAR_19, VAR_20;
 pt_entry_t *VAR_21, VAR_22;
 vm_offset_t VAR_23;
 vm_paddr_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 struct spglist VAR_30;

 FUNC_0((VAR_13->oflags & VAR_10) == 0,
     ("pmap_ts_referenced: page %p is not managed", VAR_13));
 FUNC_6(&VAR_30);
 VAR_25 = 0;
 VAR_24 = FUNC_11(VAR_13);
 VAR_18 = FUNC_1(VAR_24);
 VAR_14 = (VAR_13->flags & VAR_8) != 0 ? &VAR_11 : FUNC_12(VAR_24);
 FUNC_20(VAR_18);
retry:
 VAR_28 = 0;
 if ((VAR_16 = FUNC_7(&VAR_14->pv_list)) == ((void*)0))
  goto small_mappings;
 VAR_15 = VAR_16;
 do {
  if (VAR_16 == ((void*)0))
   VAR_16 = VAR_15;
  VAR_17 = FUNC_5(VAR_15);
  if (!FUNC_3(VAR_17)) {
   VAR_29 = VAR_14->pv_gen;
   FUNC_21(VAR_18);
   FUNC_2(VAR_17);
   FUNC_20(VAR_18);
   if (VAR_29 != VAR_14->pv_gen) {
    FUNC_4(VAR_17);
    goto retry;
   }
  }
  VAR_23 = VAR_15->pv_va;
  VAR_19 = FUNC_18(VAR_17, VAR_15->pv_va, &VAR_26);
  FUNC_0(VAR_19 != ((void*)0), ("pmap_ts_referenced: no l1 table found"));
  FUNC_0(VAR_26 == 1,
      ("pmap_ts_referenced: invalid pde level %d", VAR_26));
  VAR_20 = FUNC_17(VAR_19);
  FUNC_0((VAR_20 & VAR_1) == VAR_3,
      ("pmap_ts_referenced: found an invalid l1 table"));
  VAR_21 = FUNC_15(VAR_19, VAR_15->pv_va);
  VAR_22 = FUNC_17(VAR_21);
  if (FUNC_19(VAR_22)) {





   FUNC_22(VAR_13);
  }

  if ((VAR_22 & VAR_0) != 0) {
   if ((((VAR_24 >> VAR_7) ^ (VAR_15->pv_va >> VAR_4) ^
       (uintptr_t)VAR_17) & (VAR_6 - 1)) == 0 &&
       (VAR_22 & VAR_2) == 0) {
    FUNC_13(VAR_21, VAR_0);
    FUNC_14(VAR_17, VAR_15->pv_va);
    VAR_25++;
   } else
    VAR_28++;
  }
  FUNC_4(VAR_17);

  if (VAR_15 != ((void*)0) && FUNC_9(VAR_15, VAR_12) != ((void*)0)) {
   FUNC_10(&VAR_14->pv_list, VAR_15, VAR_12);
   FUNC_8(&VAR_14->pv_list, VAR_15, VAR_12);
   VAR_14->pv_gen++;
  }
  if (VAR_25 + VAR_28 >= VAR_9)
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
   VAR_29 = VAR_14->pv_gen;
   VAR_27 = VAR_13->md.pv_gen;
   FUNC_21(VAR_18);
   FUNC_2(VAR_17);
   FUNC_20(VAR_18);
   if (VAR_29 != VAR_14->pv_gen || VAR_27 != VAR_13->md.pv_gen) {
    FUNC_4(VAR_17);
    goto retry;
   }
  }
  VAR_19 = FUNC_18(VAR_17, VAR_15->pv_va, &VAR_26);
  FUNC_0(VAR_19 != ((void*)0), ("pmap_ts_referenced: no l2 table found"));
  FUNC_0(VAR_26 == 2,
      ("pmap_ts_referenced: invalid pde level %d", VAR_26));
  VAR_20 = FUNC_17(VAR_19);
  FUNC_0((VAR_20 & VAR_1) == VAR_5,
      ("pmap_ts_referenced: found an invalid l2 table"));
  VAR_21 = FUNC_16(VAR_19, VAR_15->pv_va);
  VAR_22 = FUNC_17(VAR_21);
  if (FUNC_19(VAR_22))
   FUNC_22(VAR_13);
  if ((VAR_22 & VAR_0) != 0) {
   if ((VAR_22 & VAR_2) == 0) {
    FUNC_13(VAR_21, VAR_0);
    FUNC_14(VAR_17, VAR_15->pv_va);
    VAR_25++;
   } else
    VAR_28++;
  }
  FUNC_4(VAR_17);

  if (VAR_15 != ((void*)0) && FUNC_9(VAR_15, VAR_12) != ((void*)0)) {
   FUNC_10(&VAR_13->md.pv_list, VAR_15, VAR_12);
   FUNC_8(&VAR_13->md.pv_list, VAR_15, VAR_12);
   VAR_13->md.pv_gen++;
  }
 } while ((VAR_15 = FUNC_7(&VAR_13->md.pv_list)) != VAR_16 && VAR_25 +
     VAR_28 < VAR_9);
out:
 FUNC_21(VAR_18);
 FUNC_23(&VAR_30, 1);
 return (VAR_25 + VAR_28);
}
