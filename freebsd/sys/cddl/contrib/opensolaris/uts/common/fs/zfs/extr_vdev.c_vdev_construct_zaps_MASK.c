
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vdev_leaf_zap; scalar_t__ vdev_top_zap; size_t vdev_children; struct TYPE_7__** vdev_child; struct TYPE_7__* vdev_top; TYPE_2__* vdev_ops; int vdev_removing; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 void* FUNC_0 (TYPE_1__*,int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void
FUNC_1(vdev_t *VAR_3, dmu_tx_t *VAR_4)
{
 if (VAR_3->vdev_ops != &VAR_0 &&
     VAR_3->vdev_ops != &VAR_1 &&
     VAR_3->vdev_ops != &VAR_2 &&
     !VAR_3->vdev_top->vdev_removing) {
  if (VAR_3->vdev_ops->vdev_op_leaf && VAR_3->vdev_leaf_zap == 0) {
   VAR_3->vdev_leaf_zap = FUNC_0(VAR_3, VAR_4);
  }
  if (VAR_3 == VAR_3->vdev_top && VAR_3->vdev_top_zap == 0) {
   VAR_3->vdev_top_zap = FUNC_0(VAR_3, VAR_4);
  }
 }
 for (uint64_t VAR_5 = 0; VAR_5 < VAR_3->vdev_children; VAR_5++) {
  FUNC_1(VAR_3->vdev_child[VAR_5], VAR_4);
 }
}
