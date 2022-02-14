
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vdev_leaf_zap; size_t vdev_initialize_state; size_t vdev_children; struct TYPE_7__** vdev_child; int vdev_initialize_lock; scalar_t__ vdev_offline; scalar_t__ vdev_initialize_action_time; TYPE_6__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int timestamp ;
typedef scalar_t__ time_t ;
typedef int initialize_state ;
struct TYPE_8__ {int spa_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,scalar_t__,int ,int,int,size_t*) ;

void
FUNC_9(vdev_t *VAR_9)
{
 FUNC_0(FUNC_1(&VAR_8));
 FUNC_0(!FUNC_4(VAR_9->vdev_spa, VAR_2, VAR_1));

 if (VAR_9->vdev_leaf_zap != 0) {
  FUNC_2(&VAR_9->vdev_initialize_lock);
  uint64_t VAR_10 = VAR_4;
  int VAR_11 = FUNC_8(VAR_9->vdev_spa->spa_meta_objset,
      VAR_9->vdev_leaf_zap, VAR_7,
      sizeof (VAR_10), 1, &VAR_10);
  FUNC_0(VAR_11 == 0 || VAR_11 == VAR_0);
  VAR_9->vdev_initialize_state = VAR_10;

  uint64_t VAR_12 = 0;
  VAR_11 = FUNC_8(VAR_9->vdev_spa->spa_meta_objset,
      VAR_9->vdev_leaf_zap, VAR_6,
      sizeof (VAR_12), 1, &VAR_12);
  FUNC_0(VAR_11 == 0 || VAR_11 == VAR_0);
  VAR_9->vdev_initialize_action_time = (time_t)VAR_12;

  if (VAR_9->vdev_initialize_state == VAR_5 ||
      VAR_9->vdev_offline) {

   FUNC_6(VAR_9);
  } else if (VAR_9->vdev_initialize_state ==
      VAR_3 && FUNC_7(VAR_9)) {
   FUNC_5(VAR_9);
  }

  FUNC_3(&VAR_9->vdev_initialize_lock);
 }

 for (uint64_t VAR_13 = 0; VAR_13 < VAR_9->vdev_children; VAR_13++) {
  FUNC_9(VAR_9->vdev_child[VAR_13]);
 }
}
