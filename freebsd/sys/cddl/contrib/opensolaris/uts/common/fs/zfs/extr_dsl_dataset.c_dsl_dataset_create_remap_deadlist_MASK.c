
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_10__ {int ds_remap_deadlist; int ds_deadlist; int ds_remap_deadlist_lock; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {int ds_prev_snap_obj; } ;
struct TYPE_9__ {TYPE_1__* dd_pool; } ;
struct TYPE_8__ {int * dp_spa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

void
FUNC_10(dsl_dataset_t *VAR_3, dmu_tx_t *VAR_4)
{
 uint64_t VAR_5;
 spa_t *VAR_6 = VAR_3->ds_dir->dd_pool->dp_spa;

 FUNC_0(FUNC_2(VAR_4));
 FUNC_0(FUNC_1(&VAR_3->ds_remap_deadlist_lock));




 FUNC_0(FUNC_8(VAR_6, VAR_0));

 VAR_5 = FUNC_5(
     &VAR_3->ds_deadlist, VAR_2,
     FUNC_3(VAR_3)->ds_prev_snap_obj, VAR_4);
 FUNC_4(VAR_3,
     VAR_5, VAR_4);
 FUNC_6(&VAR_3->ds_remap_deadlist, FUNC_9(VAR_6),
     VAR_5);
 FUNC_7(VAR_6, VAR_1, VAR_4);
}
