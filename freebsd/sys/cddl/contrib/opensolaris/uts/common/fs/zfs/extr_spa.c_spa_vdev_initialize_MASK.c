
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ vdev_initialize_state; int vdev_initialize_lock; TYPE_2__* vdev_top; int * vdev_initialize_thread; TYPE_1__* vdev_ops; scalar_t__ vdev_detached; } ;
typedef TYPE_3__ vdev_t ;
typedef int uint64_t ;
struct TYPE_17__ {int spa_dsl_pool; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_15__ {scalar_t__ vdev_removing; } ;
struct TYPE_14__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned long long) ;
 int FUNC_4 (TYPE_4__*,int,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int,int ) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int,int ) ;
 int VAR_13 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

int
FUNC_12(spa_t *VAR_14, uint64_t VAR_15, uint64_t VAR_16)
{







 FUNC_1(&VAR_13);
 FUNC_4(VAR_14, VAR_8 | VAR_9, VAR_6, VAR_7);


 vdev_t *VAR_17 = FUNC_6(VAR_14, VAR_15, VAR_0);
 if (VAR_17 == ((void*)0) || VAR_17->vdev_detached) {
  FUNC_5(VAR_14, VAR_8 | VAR_9, VAR_6);
  FUNC_2(&VAR_13);
  return (FUNC_0(VAR_3));
 } else if (!VAR_17->vdev_ops->vdev_op_leaf || !FUNC_10(VAR_17)) {
  FUNC_5(VAR_14, VAR_8 | VAR_9, VAR_6);
  FUNC_2(&VAR_13);
  return (FUNC_0(VAR_2));
 } else if (!FUNC_11(VAR_17)) {
  FUNC_5(VAR_14, VAR_8 | VAR_9, VAR_6);
  FUNC_2(&VAR_13);
  return (FUNC_0(VAR_4));
 }
 FUNC_1(&VAR_17->vdev_initialize_lock);
 FUNC_5(VAR_14, VAR_8 | VAR_9, VAR_6);
 if (VAR_16 == 129 &&
     (VAR_17->vdev_initialize_thread != ((void*)0) ||
     VAR_17->vdev_top->vdev_removing)) {
  FUNC_2(&VAR_17->vdev_initialize_lock);
  FUNC_2(&VAR_13);
  return (FUNC_0(VAR_1));
 } else if (VAR_16 == 130 &&
     (VAR_17->vdev_initialize_state != VAR_10 &&
     VAR_17->vdev_initialize_state != VAR_12)) {
  FUNC_2(&VAR_17->vdev_initialize_lock);
  FUNC_2(&VAR_13);
  return (FUNC_0(VAR_5));
 } else if (VAR_16 == 128 &&
     VAR_17->vdev_initialize_state != VAR_10) {
  FUNC_2(&VAR_17->vdev_initialize_lock);
  FUNC_2(&VAR_13);
  return (FUNC_0(VAR_5));
 }

 switch (VAR_16) {
 case 129:
  FUNC_8(VAR_17);
  break;
 case 130:
  FUNC_9(VAR_17, VAR_11);
  break;
 case 128:
  FUNC_9(VAR_17, VAR_12);
  break;
 default:
  FUNC_3("invalid cmd_type %llu", (unsigned long long)VAR_16);
 }
 FUNC_2(&VAR_17->vdev_initialize_lock);


 FUNC_7(VAR_14->spa_dsl_pool, 0);
 FUNC_2(&VAR_13);

 return (0);
}
