
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_17__ {TYPE_3__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_18__ {scalar_t__ ub_txg; } ;
typedef TYPE_2__ uberblock_t ;
struct TYPE_19__ {scalar_t__ spa_final_txg; int spa_vdev_txg_list; int spa_config_dirty_list; int spa_root_vdev; TYPE_2__ spa_uberblock; } ;
typedef TYPE_3__ spa_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 TYPE_1__* FUNC_7 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int,scalar_t__,int) ;
 int FUNC_10 (TYPE_1__**,int,TYPE_2__*,int) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int * FUNC_13 (TYPE_3__*,int *,int *,int) ;
 int FUNC_14 (int *) ;

int
FUNC_15(vdev_t **VAR_4, int VAR_5, uint64_t VAR_6)
{
 spa_t *VAR_7 = VAR_4[0]->vdev_spa;
 uberblock_t *VAR_8 = &VAR_7->spa_uberblock;
 int VAR_9 = 0;
 int VAR_10 = VAR_2 | VAR_1;

 FUNC_0(VAR_5 != 0);
retry:







 if (VAR_9 != 0) {
  if ((VAR_10 & VAR_3) != 0)
   return (VAR_9);
  VAR_10 |= VAR_3;
 }

 FUNC_0(VAR_8->ub_txg <= VAR_6);







 if (VAR_8->ub_txg < VAR_6 &&
     FUNC_8(VAR_8, VAR_7->spa_root_vdev, VAR_6) == VAR_0 &&
     FUNC_2(&VAR_7->spa_config_dirty_list))
  return (0);

 if (VAR_6 > FUNC_3(VAR_7))
  return (0);

 FUNC_0(VAR_6 <= VAR_7->spa_final_txg);







 zio_t *VAR_11 = FUNC_13(VAR_7, ((void*)0), ((void*)0), VAR_10);

 for (vdev_t *VAR_12 =
     FUNC_6(&VAR_7->spa_vdev_txg_list, FUNC_1(VAR_6)); VAR_12 != ((void*)0);
     VAR_12 = FUNC_7(&VAR_7->spa_vdev_txg_list, VAR_12, FUNC_1(VAR_6)))
  FUNC_12(VAR_11, VAR_12);

 (void) FUNC_14(VAR_11);
 if ((VAR_9 = FUNC_9(VAR_7, 0, VAR_6, VAR_10)) != 0) {
  if ((VAR_10 & VAR_3) != 0) {
   FUNC_11("vdev_label_sync_list() returned error %d "
       "for pool '%s' when syncing out the even labels "
       "of dirty vdevs", VAR_9, FUNC_4(VAR_7));
  }
  goto retry;
 }
 if ((VAR_9 = FUNC_10(VAR_4, VAR_5, VAR_8, VAR_10)) != 0) {
  if ((VAR_10 & VAR_3) != 0) {
   FUNC_11("vdev_uberblock_sync_list() returned error "
       "%d for pool '%s'", VAR_9, FUNC_4(VAR_7));
  }
  goto retry;
 }
 if ((VAR_9 = FUNC_9(VAR_7, 1, VAR_6, VAR_10)) != 0) {
  if ((VAR_10 & VAR_3) != 0) {
   FUNC_11("vdev_label_sync_list() returned error %d "
       "for pool '%s' when syncing out the odd labels of "
       "dirty vdevs", VAR_9, FUNC_4(VAR_7));
  }
  goto retry;;
 }

 FUNC_5(VAR_7);

 return (0);
}
