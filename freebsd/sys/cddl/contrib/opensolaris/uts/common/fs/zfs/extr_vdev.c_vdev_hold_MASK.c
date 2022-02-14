
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int vdev_children; TYPE_1__* vdev_ops; struct TYPE_8__** vdev_child; TYPE_3__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_9__ {scalar_t__ spa_state; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_7__ {int (* vdev_op_hold ) (TYPE_2__*) ;scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(vdev_t *VAR_1)
{
 spa_t *VAR_2 = VAR_1->vdev_spa;

 FUNC_0(FUNC_1(VAR_2));
 if (VAR_2->spa_state == VAR_0)
  return;

 for (int VAR_3 = 0; VAR_3 < VAR_1->vdev_children; VAR_3++)
  FUNC_3(VAR_1->vdev_child[VAR_3]);

 if (VAR_1->vdev_ops->vdev_op_leaf)
  VAR_1->vdev_ops->vdev_op_hold(VAR_1);
}
