
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ vdev_state; int vdev_checkremove; int vdev_forcefault; int vdev_expanding; scalar_t__ vdev_initialize_state; int vdev_initialize_lock; int * vdev_initialize_thread; scalar_t__ vdev_aux; int vdev_unspare; struct TYPE_17__** vdev_child; struct TYPE_17__* vdev_parent; TYPE_4__* vdev_ops; void* vdev_tmpoffline; void* vdev_offline; struct TYPE_17__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ vdev_state_t ;
typedef int uint64_t ;
struct TYPE_18__ {scalar_t__ spa_autoexpand; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int boolean_t ;
struct TYPE_19__ {int vdev_op_leaf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_4__ VAR_13 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

int
FUNC_11(spa_t *VAR_14, uint64_t VAR_15, uint64_t VAR_16, vdev_state_t *VAR_17)
{
 vdev_t *VAR_18, *VAR_19, *VAR_20, *VAR_21 = VAR_14->spa_root_vdev;
 boolean_t VAR_22;
 vdev_state_t VAR_23;

 FUNC_5(VAR_14, VAR_5);

 if ((VAR_18 = FUNC_4(VAR_14, VAR_15, VAR_1)) == ((void*)0))
  return (FUNC_6(VAR_14, ((void*)0), VAR_2));

 if (!VAR_18->vdev_ops->vdev_op_leaf)
  return (FUNC_6(VAR_14, ((void*)0), VAR_3));

 VAR_22 = (VAR_18->vdev_offline || VAR_18->vdev_tmpoffline);
 VAR_23 = VAR_18->vdev_state;

 VAR_19 = VAR_18->vdev_top;
 VAR_18->vdev_offline = VAR_0;
 VAR_18->vdev_tmpoffline = VAR_0;
 VAR_18->vdev_checkremove = !!(VAR_16 & VAR_9);
 VAR_18->vdev_forcefault = !!(VAR_16 & VAR_11);


 if (!VAR_18->vdev_aux) {
  for (VAR_20 = VAR_18; VAR_20 != VAR_21; VAR_20 = VAR_20->vdev_parent)
   VAR_20->vdev_expanding = !!(VAR_16 & VAR_10);
 }

 FUNC_9(VAR_19);
 VAR_18->vdev_checkremove = VAR_18->vdev_forcefault = VAR_0;

 if (!VAR_18->vdev_aux) {
  for (VAR_20 = VAR_18; VAR_20 != VAR_21; VAR_20 = VAR_20->vdev_parent)
   VAR_20->vdev_expanding = VAR_0;
 }

 if (VAR_17)
  *VAR_17 = VAR_18->vdev_state;
 if ((VAR_16 & VAR_12) &&
     !FUNC_8(VAR_18) && VAR_18->vdev_parent &&
     VAR_18->vdev_parent->vdev_ops == &VAR_13 &&
     VAR_18->vdev_parent->vdev_child[0] == VAR_18)
  VAR_18->vdev_unspare = VAR_1;

 if ((VAR_16 & VAR_10) || VAR_14->spa_autoexpand) {


  if (VAR_18->vdev_aux)
   return (FUNC_6(VAR_14, VAR_18, VAR_3));
  FUNC_2(VAR_14, VAR_6);
 }


 FUNC_0(&VAR_18->vdev_initialize_lock);
 if (FUNC_10(VAR_18) &&
     VAR_18->vdev_initialize_thread == ((void*)0) &&
     VAR_18->vdev_initialize_state == VAR_7) {
  (void) FUNC_7(VAR_18);
 }
 FUNC_1(&VAR_18->vdev_initialize_lock);

 if (VAR_22 ||
     (VAR_23 < VAR_8 &&
     VAR_18->vdev_state >= VAR_8))
  FUNC_3(VAR_14, VAR_18, ((void*)0), VAR_4);

 return (FUNC_6(VAR_14, VAR_18, 0));
}
