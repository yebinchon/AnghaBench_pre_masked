
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; struct TYPE_6__** vdev_child; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int spa_t ;
struct TYPE_5__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(spa_t *VAR_0, vdev_t *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->vdev_ops->vdev_op_leaf) {
  FUNC_0(VAR_0, VAR_1);
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_1->vdev_children; VAR_2++)
   FUNC_1(VAR_0, VAR_1->vdev_child[VAR_2]);
 }
}
