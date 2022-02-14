
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; struct TYPE_5__** vdev_child; int vdev_removed; int vdev_faulted; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ vdev_op_leaf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

boolean_t
FUNC_0(vdev_t *VAR_2)
{
 if (VAR_2->vdev_ops->vdev_op_leaf && !VAR_2->vdev_faulted &&
     !VAR_2->vdev_removed)
  return (VAR_1);

 for (int VAR_3 = 0; VAR_3 < VAR_2->vdev_children; VAR_3++)
  if (FUNC_0(VAR_2->vdev_child[VAR_3]))
   return (VAR_1);

 return (VAR_0);
}
