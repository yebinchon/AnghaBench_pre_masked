
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int sav_count; int * sav_config; TYPE_4__** sav_vdevs; } ;
struct TYPE_20__ {int sav_count; int * sav_config; TYPE_4__** sav_vdevs; } ;
struct TYPE_22__ {int * spa_comment; void* spa_indirect_vdevs_loaded; scalar_t__ spa_async_suspended; TYPE_2__ spa_l2cache; TYPE_1__ spa_spares; int * spa_meta_objset; int * spa_dsl_pool; TYPE_4__* spa_root_vdev; int spa_deferred_bpobj; int * spa_checkpoint_discard_zthr; int * spa_condense_zthr; int * spa_vdev_removal; TYPE_4__** spa_async_zio_root; void* spa_sync_on; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_23__ {int vdev_children; int * vdev_child; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__**,int) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 int VAR_5 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void
FUNC_23(spa_t *VAR_6)
{
 int VAR_7;

 FUNC_0(FUNC_1(&VAR_5));

 FUNC_12(VAR_6, "UNLOADING");




 FUNC_15(VAR_6);




 FUNC_7(VAR_6);

 if (VAR_6->spa_root_vdev) {
  FUNC_19(VAR_6->spa_root_vdev,
      VAR_3);
 }




 if (VAR_6->spa_sync_on) {
  FUNC_16(VAR_6->spa_dsl_pool);
  VAR_6->spa_sync_on = VAR_0;
 }







 if (VAR_6->spa_root_vdev != ((void*)0)) {
  FUNC_9(VAR_6, VAR_2, VAR_6, VAR_1);
  for (int VAR_8 = 0; VAR_8 < VAR_6->spa_root_vdev->vdev_children; VAR_8++)
   FUNC_20(VAR_6->spa_root_vdev->vdev_child[VAR_8]);
  FUNC_10(VAR_6, VAR_2, VAR_6);
 }




 if (VAR_6->spa_async_zio_root != ((void*)0)) {
  for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   (void) FUNC_21(VAR_6->spa_async_zio_root[VAR_9]);
  FUNC_5(VAR_6->spa_async_zio_root, VAR_4 * sizeof (void *));
  VAR_6->spa_async_zio_root = ((void*)0);
 }

 if (VAR_6->spa_vdev_removal != ((void*)0)) {
  FUNC_14(VAR_6->spa_vdev_removal);
  VAR_6->spa_vdev_removal = ((void*)0);
 }

 if (VAR_6->spa_condense_zthr != ((void*)0)) {
  FUNC_22(VAR_6->spa_condense_zthr);
  VAR_6->spa_condense_zthr = ((void*)0);
 }

 if (VAR_6->spa_checkpoint_discard_zthr != ((void*)0)) {
  FUNC_22(VAR_6->spa_checkpoint_discard_zthr);
  VAR_6->spa_checkpoint_discard_zthr = ((void*)0);
 }

 FUNC_8(VAR_6);

 FUNC_2(&VAR_6->spa_deferred_bpobj);

 FUNC_9(VAR_6, VAR_2, VAR_6, VAR_1);




 if (VAR_6->spa_root_vdev)
  FUNC_18(VAR_6->spa_root_vdev);
 FUNC_0(VAR_6->spa_root_vdev == ((void*)0));




 if (VAR_6->spa_dsl_pool) {
  FUNC_4(VAR_6->spa_dsl_pool);
  VAR_6->spa_dsl_pool = ((void*)0);
  VAR_6->spa_meta_objset = ((void*)0);
 }

 FUNC_3(VAR_6);




 FUNC_11(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6->spa_spares.sav_count; VAR_7++)
  FUNC_18(VAR_6->spa_spares.sav_vdevs[VAR_7]);
 if (VAR_6->spa_spares.sav_vdevs) {
  FUNC_5(VAR_6->spa_spares.sav_vdevs,
      VAR_6->spa_spares.sav_count * sizeof (void *));
  VAR_6->spa_spares.sav_vdevs = ((void*)0);
 }
 if (VAR_6->spa_spares.sav_config) {
  FUNC_6(VAR_6->spa_spares.sav_config);
  VAR_6->spa_spares.sav_config = ((void*)0);
 }
 VAR_6->spa_spares.sav_count = 0;

 for (VAR_7 = 0; VAR_7 < VAR_6->spa_l2cache.sav_count; VAR_7++) {
  FUNC_17(VAR_6->spa_l2cache.sav_vdevs[VAR_7]);
  FUNC_18(VAR_6->spa_l2cache.sav_vdevs[VAR_7]);
 }
 if (VAR_6->spa_l2cache.sav_vdevs) {
  FUNC_5(VAR_6->spa_l2cache.sav_vdevs,
      VAR_6->spa_l2cache.sav_count * sizeof (void *));
  VAR_6->spa_l2cache.sav_vdevs = ((void*)0);
 }
 if (VAR_6->spa_l2cache.sav_config) {
  FUNC_6(VAR_6->spa_l2cache.sav_config);
  VAR_6->spa_l2cache.sav_config = ((void*)0);
 }
 VAR_6->spa_l2cache.sav_count = 0;

 VAR_6->spa_async_suspended = 0;

 VAR_6->spa_indirect_vdevs_loaded = VAR_0;

 if (VAR_6->spa_comment != ((void*)0)) {
  FUNC_13(VAR_6->spa_comment);
  VAR_6->spa_comment = ((void*)0);
 }

 FUNC_10(VAR_6, VAR_2, VAR_6);
}
