
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int vdev_state_dirty_node; scalar_t__ vdev_leaf_zap; scalar_t__ vdev_removing; TYPE_3__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_13__ {int svr_lock; int svr_cv; int * svr_thread; int svr_zaplist; } ;
typedef TYPE_2__ spa_vdev_removal_t ;
struct TYPE_14__ {int spa_dsl_pool; TYPE_2__* spa_vdev_removal; } ;
typedef TYPE_3__ spa_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_2__*,int ,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_13(vdev_t *VAR_3, uint64_t VAR_4)
{
 vdev_t *VAR_5;
 dmu_tx_t *VAR_6;
 spa_t *VAR_7 = VAR_3->vdev_spa;
 spa_vdev_removal_t *VAR_8 = VAR_7->spa_vdev_removal;






 VAR_8->svr_zaplist = FUNC_5();
 FUNC_12(VAR_3, VAR_8->svr_zaplist);

 VAR_5 = FUNC_9(VAR_3, &VAR_1);
 VAR_5->vdev_removing = 0;

 VAR_3->vdev_leaf_zap = 0;

 FUNC_11(VAR_5, VAR_3);
 FUNC_10(VAR_5);

 FUNC_0(!FUNC_6(&VAR_3->vdev_state_dirty_node));

 VAR_6 = FUNC_3(VAR_7->spa_dsl_pool, VAR_4);
 FUNC_4(VAR_7->spa_dsl_pool, VAR_2, VAR_8,
     0, VAR_0, VAR_6);
 FUNC_2(VAR_6);





 FUNC_7(&VAR_8->svr_lock);
 VAR_8->svr_thread = ((void*)0);
 FUNC_1(&VAR_8->svr_cv);
 FUNC_8(&VAR_8->svr_lock);
}
