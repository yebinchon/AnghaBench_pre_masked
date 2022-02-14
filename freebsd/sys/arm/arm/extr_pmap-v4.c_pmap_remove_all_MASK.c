
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
struct l2_bucket {scalar_t__* l2b_kva; } ;
typedef TYPE_4__* pv_entry_t ;
typedef scalar_t__ pt_entry_t ;
typedef TYPE_5__* pmap_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_28__ {int resident_count; } ;
struct TYPE_31__ {TYPE_2__ pm_stats; } ;
struct TYPE_30__ {int pv_flags; TYPE_5__* pv_pmap; int pv_va; } ;
struct TYPE_26__ {int pv_kva; int pv_list; } ;
struct TYPE_29__ {int oflags; TYPE_1__ md; } ;
struct TYPE_27__ {int p_vmspace; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_21__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_5__*,struct l2_bucket*,int) ;
 int FUNC_12 (TYPE_4__*) ;
 struct l2_bucket* FUNC_13 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int VAR_9 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_22 (int ) ;

void
FUNC_23(vm_page_t VAR_10)
{
 pv_entry_t VAR_11;
 pt_entry_t *VAR_12;
 struct l2_bucket *VAR_13;
 boolean_t VAR_14 = VAR_0;
 pmap_t VAR_15;
 int VAR_16 = 0;

 FUNC_0((VAR_10->oflags & VAR_6) == 0,
     ("pmap_remove_all: page %p is not managed", VAR_10));
 if (FUNC_5(&VAR_10->md.pv_list))
  return;
 FUNC_19(&VAR_9);







 FUNC_10(VAR_10, VAR_4);
 VAR_15 = FUNC_22(VAR_7->p_vmspace);
 while ((VAR_11 = FUNC_6(&VAR_10->md.pv_list)) != ((void*)0)) {
  if (VAR_14 == VAR_0 && (VAR_11->pv_pmap == VAR_15 ||
      VAR_11->pv_pmap == VAR_8))
   VAR_14 = VAR_5;

  FUNC_1(VAR_11->pv_pmap);






  if (FUNC_15(VAR_11->pv_pmap)) {
   FUNC_7(VAR_11->pv_va, VAR_1);
   if (FUNC_14(VAR_11->pv_pmap, VAR_11->pv_va))
    FUNC_8(VAR_11->pv_va, VAR_1);
  }

  if (VAR_11->pv_flags & VAR_3) {



   VAR_10->md.pv_kva = VAR_11->pv_va;
  } else {

   VAR_13 = FUNC_13(VAR_11->pv_pmap, VAR_11->pv_va);
   FUNC_0(VAR_13 != ((void*)0), ("No l2 bucket"));
   VAR_12 = &VAR_13->l2b_kva[FUNC_9(VAR_11->pv_va)];
   *VAR_12 = 0;
   FUNC_3(VAR_11->pv_pmap, VAR_12);
   FUNC_11(VAR_11->pv_pmap, VAR_13, 1);
   VAR_11->pv_pmap->pm_stats.resident_count--;
   VAR_16 |= VAR_11->pv_flags;
  }
  FUNC_16(VAR_10, VAR_11->pv_pmap, VAR_11);
  FUNC_2(VAR_11->pv_pmap);
  FUNC_12(VAR_11);
 }

 if (VAR_14) {
  if (FUNC_4(VAR_16))
   FUNC_18(VAR_15);
  else
   FUNC_17(VAR_15);
 }
 FUNC_21(VAR_10, VAR_2);
 FUNC_20(&VAR_9);
}
