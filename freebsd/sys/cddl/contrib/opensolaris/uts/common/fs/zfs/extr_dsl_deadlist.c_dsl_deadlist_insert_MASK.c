
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int dl_lock; int dl_tree; TYPE_1__* dl_phys; int dl_os; int dl_dbuf; int dl_bpobj; scalar_t__ dl_oldfmt; } ;
typedef TYPE_2__ dsl_deadlist_t ;
struct TYPE_22__ {int dle_mintxg; } ;
typedef TYPE_3__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;
struct TYPE_23__ {int blk_birth; } ;
typedef TYPE_4__ blkptr_t ;
typedef int avl_index_t ;
struct TYPE_20__ {int dl_uncomp; int dl_comp; int dl_used; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__ const*) ;
 int FUNC_6 (int *,TYPE_4__ const*,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,TYPE_4__ const*,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void
FUNC_13(dsl_deadlist_t *VAR_1, const blkptr_t *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_deadlist_entry_t VAR_4;
 dsl_deadlist_entry_t *VAR_5;
 avl_index_t VAR_6;

 if (VAR_1->dl_oldfmt) {
  FUNC_6(&VAR_1->dl_bpobj, VAR_2, VAR_3);
  return;
 }

 FUNC_11(&VAR_1->dl_lock);
 FUNC_10(VAR_1);

 FUNC_8(VAR_1->dl_dbuf, VAR_3);
 VAR_1->dl_phys->dl_used +=
     FUNC_5(FUNC_9(VAR_1->dl_os), VAR_2);
 VAR_1->dl_phys->dl_comp += FUNC_1(VAR_2);
 VAR_1->dl_phys->dl_uncomp += FUNC_2(VAR_2);

 VAR_4.dle_mintxg = VAR_2->blk_birth;
 VAR_5 = FUNC_3(&VAR_1->dl_tree, &VAR_4, &VAR_6);
 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_4(&VAR_1->dl_tree, VAR_6, VAR_0);
 else
  VAR_5 = FUNC_0(&VAR_1->dl_tree, VAR_5);
 FUNC_7(VAR_1, VAR_5, VAR_2, VAR_3);
 FUNC_12(&VAR_1->dl_lock);
}
