
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int vdev_initialize_lock; TYPE_1__* vdev_ops; int * vdev_dtl_sm; int vdev_detached; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_19__ {int spa_dsl_pool; int spa_config_generation; int spa_config_dirty_list; int spa_root_vdev; int * spa_pending_vdev; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_17__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int,int) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,int ,int ,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_3__*,char*,int ) ;
 scalar_t__ VAR_6 ;

void
FUNC_17(spa_t *VAR_7, vdev_t *VAR_8, uint64_t VAR_9, int VAR_10, char *VAR_11)
{
 FUNC_0(FUNC_1(&VAR_5));

 int VAR_12 = VAR_0;

 FUNC_0(VAR_9 > FUNC_8(VAR_7));

 VAR_7->spa_pending_vdev = ((void*)0);




 FUNC_13(VAR_7->spa_root_vdev, 0, 0, VAR_0);

 if (VAR_10 == 0 && !FUNC_2(&VAR_7->spa_config_dirty_list)) {
  VAR_12 = VAR_1;
  VAR_7->spa_config_generation++;
 }




 FUNC_0(FUNC_3(FUNC_10(VAR_7)) == 0);
 FUNC_0(FUNC_3(FUNC_9(VAR_7)) == 0);

 FUNC_7(VAR_7, VAR_3, VAR_7);






 if (VAR_6)
  FUNC_16(VAR_7, VAR_11, 0);






 if (VAR_10 == 0)
  FUNC_12(VAR_7->spa_dsl_pool, VAR_9);

 if (VAR_8 != ((void*)0)) {
  FUNC_0(!VAR_8->vdev_detached || VAR_8->vdev_dtl_sm == ((void*)0));
  if (VAR_8->vdev_ops->vdev_op_leaf) {
   FUNC_4(&VAR_8->vdev_initialize_lock);
   FUNC_15(VAR_8, VAR_4);
   FUNC_5(&VAR_8->vdev_initialize_lock);
  }

  FUNC_6(VAR_7, VAR_3, VAR_7, VAR_2);
  FUNC_14(VAR_8);
  FUNC_7(VAR_7, VAR_3, VAR_7);
 }




 if (VAR_12)
  FUNC_11(VAR_7, VAR_0, VAR_1);
}
