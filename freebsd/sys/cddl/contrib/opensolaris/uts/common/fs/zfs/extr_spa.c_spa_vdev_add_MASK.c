
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_19__ ;


struct TYPE_28__ {scalar_t__ vdev_children; scalar_t__ vdev_ashift; size_t vdev_id; struct TYPE_28__** vdev_child; scalar_t__ vdev_ishole; TYPE_6__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint_t ;
typedef size_t uint64_t ;
struct TYPE_26__ {void* sav_sync; } ;
struct TYPE_27__ {int sr_prev_indirect_vdev; } ;
struct TYPE_29__ {scalar_t__ spa_max_ashift; TYPE_19__ spa_l2cache; TYPE_19__ spa_spares; int * spa_vdev_removal; TYPE_1__ spa_removing_phys; TYPE_2__* spa_pending_vdev; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
struct TYPE_30__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ***,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__**,int *,int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int *,int *,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_19__*,int **,scalar_t__,int ) ;
 int FUNC_10 (TYPE_3__*,int *,size_t,int ) ;
 size_t FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_2__*,size_t,int) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,size_t,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_6__ VAR_9 ;
 TYPE_6__ VAR_10 ;
 int FUNC_18 (TYPE_2__*,TYPE_2__*) ;

int
FUNC_19(spa_t *VAR_11, nvlist_t *VAR_12)
{
 uint64_t VAR_13, VAR_14;
 int VAR_15;
 vdev_t *VAR_16 = VAR_11->spa_root_vdev;
 vdev_t *VAR_17, *VAR_18;
 nvlist_t **VAR_19, **VAR_20;
 uint_t VAR_21, VAR_22;

 FUNC_0(FUNC_13(VAR_11));

 VAR_13 = FUNC_11(VAR_11);

 if ((VAR_15 = FUNC_4(VAR_11, &VAR_17, VAR_12, ((void*)0), 0,
     VAR_5)) != 0)
  return (FUNC_12(VAR_11, ((void*)0), VAR_13, VAR_15));

 VAR_11->spa_pending_vdev = VAR_17;

 if (FUNC_3(VAR_12, VAR_7, &VAR_19,
     &VAR_21) != 0)
  VAR_21 = 0;

 if (FUNC_3(VAR_12, VAR_6, &VAR_20,
     &VAR_22) != 0)
  VAR_22 = 0;

 if (VAR_17->vdev_children == 0 && VAR_21 == 0 && VAR_22 == 0)
  return (FUNC_12(VAR_11, VAR_17, VAR_13, VAR_2));

 if (VAR_17->vdev_children != 0 &&
     (VAR_15 = FUNC_16(VAR_17, VAR_13, VAR_0)) != 0)
  return (FUNC_12(VAR_11, VAR_17, VAR_13, VAR_15));





 if ((VAR_15 = FUNC_10(VAR_11, VAR_12, VAR_13, VAR_5)) != 0)
  return (FUNC_12(VAR_11, VAR_17, VAR_13, VAR_15));







 if (VAR_11->spa_vdev_removal != ((void*)0) ||
     VAR_11->spa_removing_phys.sr_prev_indirect_vdev != -1) {
  for (int VAR_23 = 0; VAR_23 < VAR_17->vdev_children; VAR_23++) {
   VAR_18 = VAR_17->vdev_child[VAR_23];
   if (VAR_11->spa_vdev_removal != ((void*)0) &&
       VAR_18->vdev_ashift != VAR_11->spa_max_ashift) {
    return (FUNC_12(VAR_11, VAR_17, VAR_13, VAR_2));
   }

   if (VAR_18->vdev_ops == &VAR_10) {
    return (FUNC_12(VAR_11, VAR_17, VAR_13, VAR_2));
   }




   if (VAR_18->vdev_ops == &VAR_9) {
    for (uint64_t VAR_24 = 0;
        VAR_24 < VAR_18->vdev_children; VAR_24++) {
     vdev_t *VAR_25 = VAR_18->vdev_child[VAR_24];
     if (!VAR_25->vdev_ops->vdev_op_leaf) {
      return (FUNC_12(VAR_11, VAR_17,
          VAR_13, VAR_2));
     }
    }
   }
  }
 }

 for (int VAR_26 = 0; VAR_26 < VAR_17->vdev_children; VAR_26++) {




  for (VAR_14 = 0; VAR_14 < VAR_16->vdev_children; VAR_14++) {
   if (VAR_16->vdev_child[VAR_14]->vdev_ishole) {
    FUNC_17(VAR_16->vdev_child[VAR_14]);
    break;
   }
  }
  VAR_18 = VAR_17->vdev_child[VAR_26];
  FUNC_18(VAR_17, VAR_18);
  VAR_18->vdev_id = VAR_14;
  FUNC_14(VAR_16, VAR_18);
  FUNC_15(VAR_18);
 }

 if (VAR_21 != 0) {
  FUNC_9(&VAR_11->spa_spares, VAR_19, VAR_21,
      VAR_7);
  FUNC_8(VAR_11);
  VAR_11->spa_spares.sav_sync = VAR_1;
 }

 if (VAR_22 != 0) {
  FUNC_9(&VAR_11->spa_l2cache, VAR_20, VAR_22,
      VAR_6);
  FUNC_7(VAR_11);
  VAR_11->spa_l2cache.sav_sync = VAR_1;
 }
 (void) FUNC_12(VAR_11, VAR_17, VAR_13, 0);

 FUNC_1(&VAR_8);
 FUNC_5(VAR_11, VAR_4);
 FUNC_6(VAR_11, ((void*)0), ((void*)0), VAR_3);
 FUNC_2(&VAR_8);

 return (0);
}
