
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_gen; int pv_list; } ;
typedef TYPE_4__* pv_entry_t ;
typedef int pt_entry_t ;
typedef TYPE_5__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_27__ {int wired_count; } ;
struct TYPE_31__ {TYPE_1__ pm_stats; } ;
struct TYPE_30__ {int pv_va; } ;
struct TYPE_28__ {int pv_gen; int pv_list; } ;
struct TYPE_29__ {int oflags; int flags; TYPE_2__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
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
 int FUNC_12 (TYPE_5__*,int*,int ,struct rwlock**) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int*) ;
 int * FUNC_17 (TYPE_5__*,int ,int*) ;
 int* FUNC_18 (TYPE_5__*,int ,int*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (TYPE_5__*,int) ;
 int FUNC_21 (TYPE_5__*,int ,int ,struct spglist*) ;
 struct md_page VAR_6 ;
 int VAR_7 ;
 int FUNC_22 (struct rwlock*) ;
 int FUNC_23 (struct rwlock*) ;
 int FUNC_24 (TYPE_3__*,int ) ;
 int FUNC_25 (TYPE_3__*,int ) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (struct spglist*,int) ;

void
FUNC_28(vm_page_t VAR_8)
{
 struct md_page *VAR_9;
 pv_entry_t VAR_10;
 pmap_t VAR_11;
 struct rwlock *VAR_12;
 pd_entry_t *VAR_13, VAR_14;
 pt_entry_t *VAR_15, VAR_16;
 vm_offset_t VAR_17;
 struct spglist VAR_18;
 int VAR_19, VAR_20, VAR_21;

 FUNC_0((VAR_8->oflags & VAR_5) == 0,
     ("pmap_remove_all: page %p is not managed", VAR_8));
 FUNC_5(&VAR_18);
 VAR_12 = FUNC_9(VAR_8);
 VAR_9 = (VAR_8->flags & VAR_4) != 0 ? &VAR_6 :
     FUNC_11(FUNC_8(VAR_8));
retry:
 FUNC_22(VAR_12);
 while ((VAR_10 = FUNC_6(&VAR_9->pv_list)) != ((void*)0)) {
  VAR_11 = FUNC_4(VAR_10);
  if (!FUNC_2(VAR_11)) {
   VAR_20 = VAR_9->pv_gen;
   FUNC_23(VAR_12);
   FUNC_1(VAR_11);
   FUNC_22(VAR_12);
   if (VAR_20 != VAR_9->pv_gen) {
    FUNC_23(VAR_12);
    FUNC_3(VAR_11);
    goto retry;
   }
  }
  VAR_17 = VAR_10->pv_va;
  VAR_15 = FUNC_18(VAR_11, VAR_17, &VAR_19);
  FUNC_0(VAR_15 != ((void*)0),
      ("pmap_remove_all: no page table entry found"));
  FUNC_0(VAR_19 == 2,
      ("pmap_remove_all: invalid pte level %d", VAR_19));

  FUNC_12(VAR_11, VAR_15, VAR_17, &VAR_12);
  FUNC_3(VAR_11);
 }
 while ((VAR_10 = FUNC_6(&VAR_8->md.pv_list)) != ((void*)0)) {
  VAR_11 = FUNC_4(VAR_10);
  if (!FUNC_2(VAR_11)) {
   VAR_20 = VAR_9->pv_gen;
   VAR_21 = VAR_8->md.pv_gen;
   FUNC_23(VAR_12);
   FUNC_1(VAR_11);
   FUNC_22(VAR_12);
   if (VAR_20 != VAR_9->pv_gen || VAR_21 != VAR_8->md.pv_gen) {
    FUNC_23(VAR_12);
    FUNC_3(VAR_11);
    goto retry;
   }
  }
  FUNC_20(VAR_11, 1);

  VAR_13 = FUNC_17(VAR_11, VAR_10->pv_va, &VAR_19);
  FUNC_0(VAR_13 != ((void*)0),
      ("pmap_remove_all: no page directory entry found"));
  FUNC_0(VAR_19 == 2,
      ("pmap_remove_all: invalid pde level %d", VAR_19));
  VAR_14 = FUNC_15(VAR_13);

  VAR_15 = FUNC_14(VAR_13, VAR_10->pv_va);
  VAR_16 = FUNC_16(VAR_15);
  if (VAR_16 & VAR_1)
   VAR_11->pm_stats.wired_count--;
  if ((VAR_16 & VAR_0) != 0) {
   FUNC_13(VAR_11, VAR_10->pv_va);
   FUNC_25(VAR_8, VAR_2);
  }




  if (FUNC_19(VAR_16))
   FUNC_26(VAR_8);
  FUNC_21(VAR_11, VAR_10->pv_va, VAR_14, &VAR_18);
  FUNC_7(&VAR_8->md.pv_list, VAR_10, VAR_7);
  VAR_8->md.pv_gen++;
  FUNC_10(VAR_11, VAR_10);
  FUNC_3(VAR_11);
 }
 FUNC_24(VAR_8, VAR_3);
 FUNC_23(VAR_12);
 FUNC_27(&VAR_18, 1);
}
