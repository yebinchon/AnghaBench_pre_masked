
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int vdev_children; int vdev_config_dirty_node; struct TYPE_12__* vdev_top; struct TYPE_12__** vdev_child; TYPE_3__* vdev_aux; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint_t ;
struct TYPE_13__ {int spa_config_dirty_list; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_14__ {int sav_count; scalar_t__ sav_sync; int sav_config; TYPE_1__** sav_vdevs; } ;
typedef TYPE_3__ spa_aux_vdev_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ***,int*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int * FUNC_10 (TYPE_2__*,TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

void
FUNC_12(vdev_t *VAR_6)
{
 spa_t *VAR_7 = VAR_6->vdev_spa;
 vdev_t *VAR_8 = VAR_7->spa_root_vdev;
 int VAR_9;

 FUNC_0(FUNC_9(VAR_7));





 if (VAR_6->vdev_aux != ((void*)0)) {
  spa_aux_vdev_t *VAR_10 = VAR_6->vdev_aux;
  nvlist_t **VAR_11;
  uint_t VAR_12;

  for (VAR_9 = 0; VAR_9 < VAR_10->sav_count; VAR_9++) {
   if (VAR_10->sav_vdevs[VAR_9] == VAR_6)
    break;
  }

  if (VAR_9 == VAR_10->sav_count) {



   FUNC_0(VAR_10->sav_sync == VAR_0);
   return;
  }

  VAR_10->sav_sync = VAR_0;

  if (FUNC_6(VAR_10->sav_config,
      VAR_4, &VAR_11, &VAR_12) != 0) {
   FUNC_1(FUNC_6(VAR_10->sav_config,
       VAR_5, &VAR_11, &VAR_12) == 0);
  }

  FUNC_0(VAR_9 < VAR_12);





  FUNC_5(VAR_11[VAR_9]);
  VAR_11[VAR_9] = FUNC_10(VAR_7, VAR_6, VAR_0, 0);

  return;
 }







 FUNC_0(FUNC_7(VAR_7, VAR_3, VAR_2) ||
     (FUNC_2(FUNC_8(VAR_7)) &&
     FUNC_7(VAR_7, VAR_3, VAR_1)));

 if (VAR_6 == VAR_8) {
  for (VAR_9 = 0; VAR_9 < VAR_8->vdev_children; VAR_9++)
   FUNC_12(VAR_8->vdev_child[VAR_9]);
 } else {
  FUNC_0(VAR_6 == VAR_6->vdev_top);

  if (!FUNC_4(&VAR_6->vdev_config_dirty_node) &&
      FUNC_11(VAR_6)) {
   FUNC_3(&VAR_7->spa_config_dirty_list, VAR_6);
  }
 }
}
