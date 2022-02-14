
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; int vdev_top; TYPE_1__* vdev_ops; struct TYPE_6__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int ,int,TYPE_2__*,int ) ;

void
FUNC_1(vdev_t *VAR_0, int VAR_1, uint64_t VAR_2)
{
 for (int VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++)
  FUNC_1(VAR_0->vdev_child[VAR_3], VAR_1, VAR_2);

 if (VAR_0->vdev_ops->vdev_op_leaf)
  FUNC_0(VAR_0->vdev_top, VAR_1, VAR_0, VAR_2);
}
