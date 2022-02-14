
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; TYPE_1__* vdev_ops; struct TYPE_6__** vdev_child; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int spa_t ;
struct TYPE_5__ {int (* vdev_op_rele ) (TYPE_2__*) ;scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(vdev_t *VAR_0)
{
 spa_t *VAR_1 = VAR_0->vdev_spa;

 FUNC_0(FUNC_1(VAR_1));
 for (int VAR_2 = 0; VAR_2 < VAR_0->vdev_children; VAR_2++)
  FUNC_3(VAR_0->vdev_child[VAR_2]);

 if (VAR_0->vdev_ops->vdev_op_leaf)
  VAR_0->vdev_ops->vdev_op_rele(VAR_0);
}
