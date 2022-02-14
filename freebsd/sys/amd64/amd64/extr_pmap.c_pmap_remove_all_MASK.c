
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_gen; int pv_list; } ;
typedef TYPE_4__* pv_entry_t ;
typedef int pt_entry_t ;
typedef TYPE_5__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_30__ {int wired_count; } ;
struct TYPE_34__ {TYPE_1__ pm_stats; } ;
struct TYPE_33__ {int pv_va; } ;
struct TYPE_31__ {int pv_gen; int pv_list; } ;
struct TYPE_32__ {int oflags; int flags; TYPE_2__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct spglist*) ;
 TYPE_4__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 struct rwlock* FUNC_9 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*) ;
 struct md_page* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_5__*,int*,int ,struct rwlock**) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (TYPE_5__*) ;
 int* FUNC_17 (TYPE_5__*,int ) ;
 int* FUNC_18 (int*,int ) ;
 int FUNC_19 (TYPE_5__*,int) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*,int ,int,struct spglist*) ;
 int FUNC_22 (int*) ;
 struct md_page VAR_6 ;
 int VAR_7 ;
 int FUNC_23 (struct rwlock*) ;
 int FUNC_24 (struct rwlock*) ;
 int FUNC_25 (TYPE_3__*,int ) ;
 int FUNC_26 (TYPE_3__*,int ) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (struct spglist*,int) ;

void
FUNC_29(vm_page_t VAR_8)
{
 struct md_page *VAR_9;
 pv_entry_t VAR_10;
 pmap_t VAR_11;
 struct rwlock *VAR_12;
 pt_entry_t *VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 pd_entry_t *VAR_18;
 vm_offset_t VAR_19;
 struct spglist VAR_20;
 int VAR_21, VAR_22;

 FUNC_0((VAR_8->oflags & VAR_5) == 0,
     ("pmap_remove_all: page %p is not managed", VAR_8));
 FUNC_5(&VAR_20);
 VAR_12 = FUNC_9(VAR_8);
 VAR_9 = (VAR_8->flags & VAR_2) != 0 ? &VAR_6 :
     FUNC_11(FUNC_8(VAR_8));
retry:
 FUNC_23(VAR_12);
 while ((VAR_10 = FUNC_6(&VAR_9->pv_list)) != ((void*)0)) {
  VAR_11 = FUNC_4(VAR_10);
  if (!FUNC_2(VAR_11)) {
   VAR_21 = VAR_9->pv_gen;
   FUNC_24(VAR_12);
   FUNC_1(VAR_11);
   FUNC_23(VAR_12);
   if (VAR_21 != VAR_9->pv_gen) {
    FUNC_24(VAR_12);
    FUNC_3(VAR_11);
    goto retry;
   }
  }
  VAR_19 = VAR_10->pv_va;
  VAR_18 = FUNC_17(VAR_11, VAR_19);
  (void)FUNC_14(VAR_11, VAR_18, VAR_19, &VAR_12);
  FUNC_3(VAR_11);
 }
 while ((VAR_10 = FUNC_6(&VAR_8->md.pv_list)) != ((void*)0)) {
  VAR_11 = FUNC_4(VAR_10);
  if (!FUNC_2(VAR_11)) {
   VAR_21 = VAR_9->pv_gen;
   VAR_22 = VAR_8->md.pv_gen;
   FUNC_24(VAR_12);
   FUNC_1(VAR_11);
   FUNC_23(VAR_12);
   if (VAR_21 != VAR_9->pv_gen || VAR_22 != VAR_8->md.pv_gen) {
    FUNC_24(VAR_12);
    FUNC_3(VAR_11);
    goto retry;
   }
  }
  VAR_15 = FUNC_12(VAR_11);
  VAR_16 = FUNC_16(VAR_11);
  VAR_17 = FUNC_20(VAR_11);
  FUNC_19(VAR_11, 1);
  VAR_18 = FUNC_17(VAR_11, VAR_10->pv_va);
  FUNC_0((*VAR_18 & VAR_3) == 0, ("pmap_remove_all: found"
      " a 2mpage in page %p's pv list", VAR_8));
  VAR_13 = FUNC_18(VAR_18, VAR_10->pv_va);
  VAR_14 = FUNC_22(VAR_13);
  if (VAR_14 & VAR_4)
   VAR_11->pm_stats.wired_count--;
  if (VAR_14 & VAR_15)
   FUNC_26(VAR_8, VAR_0);




  if ((VAR_14 & (VAR_16 | VAR_17)) == (VAR_16 | VAR_17))
   FUNC_27(VAR_8);
  FUNC_21(VAR_11, VAR_10->pv_va, *VAR_18, &VAR_20);
  FUNC_15(VAR_11, VAR_10->pv_va);
  FUNC_7(&VAR_8->md.pv_list, VAR_10, VAR_7);
  VAR_8->md.pv_gen++;
  FUNC_10(VAR_11, VAR_10);
  FUNC_3(VAR_11);
 }
 FUNC_25(VAR_8, VAR_1);
 FUNC_24(VAR_12);
 FUNC_13(VAR_8);
 FUNC_28(&VAR_20, 1);
}
