
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int vs_aux; } ;
struct TYPE_15__ {scalar_t__ vdev_state; int vdev_not_present; scalar_t__ vdev_prevstate; scalar_t__ vdev_parent; TYPE_2__* vdev_ops; void* vdev_removed; scalar_t__ vdev_checkremove; scalar_t__ vdev_forcefault; TYPE_1__ vdev_stat; int vdev_delayed_close; TYPE_4__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef scalar_t__ vdev_state_t ;
typedef int vdev_aux_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_16__ {TYPE_3__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
typedef int boolean_t ;
struct TYPE_14__ {scalar_t__ vdev_op_leaf; int (* vdev_op_close ) (TYPE_3__*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;



 int VAR_11 ;



 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,TYPE_4__*,TYPE_3__*,int *,scalar_t__,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

void
FUNC_6(vdev_t *VAR_14, boolean_t VAR_15, vdev_state_t VAR_16, vdev_aux_t VAR_17)
{
 uint64_t VAR_18;
 spa_t *VAR_19 = VAR_14->vdev_spa;

 if (VAR_16 == VAR_14->vdev_state) {
  VAR_14->vdev_stat.vs_aux = VAR_17;
  return;
 }

 VAR_18 = VAR_14->vdev_state;

 VAR_14->vdev_state = VAR_16;
 VAR_14->vdev_stat.vs_aux = VAR_17;
 if (!VAR_14->vdev_delayed_close && FUNC_2(VAR_14) &&
     VAR_14->vdev_ops->vdev_op_leaf)
  VAR_14->vdev_ops->vdev_op_close(VAR_14);

 if (VAR_14->vdev_removed &&
     VAR_16 == VAR_12 &&
     (VAR_17 == 129 || VAR_14->vdev_checkremove)) {
  VAR_14->vdev_state = VAR_13;
  VAR_14->vdev_stat.vs_aux = VAR_11;
 } else if (VAR_16 == VAR_13) {
  VAR_14->vdev_removed = VAR_1;
 } else if (VAR_16 == VAR_12) {






  if ((FUNC_0(VAR_19) == VAR_9 ||
      FUNC_0(VAR_19) == VAR_10) &&
      VAR_14->vdev_ops->vdev_op_leaf)
   VAR_14->vdev_not_present = 1;
  if ((VAR_14->vdev_prevstate != VAR_16 || VAR_14->vdev_forcefault) &&
      !VAR_14->vdev_not_present && !VAR_14->vdev_checkremove &&
      VAR_14 != VAR_19->spa_root_vdev) {
   const char *VAR_20;

   switch (VAR_17) {
   case 129:
    VAR_20 = VAR_6;
    break;
   case 131:
    VAR_20 = VAR_4;
    break;
   case 130:
    VAR_20 = VAR_5;
    break;
   case 133:
    VAR_20 = VAR_2;
    break;
   case 128:
    VAR_20 = VAR_7;
    break;
   case 132:
    VAR_20 = VAR_3;
    break;
   default:
    VAR_20 = VAR_8;
   }

   FUNC_4(VAR_20, VAR_19, VAR_14, ((void*)0), VAR_18, 0);
  }


  VAR_14->vdev_removed = VAR_0;
 } else {
  VAR_14->vdev_removed = VAR_0;
 }
 if (VAR_14->vdev_ops->vdev_op_leaf)
  FUNC_5(VAR_19, VAR_14);

 if (!VAR_15 && VAR_14->vdev_parent)
  FUNC_3(VAR_14->vdev_parent);
}
