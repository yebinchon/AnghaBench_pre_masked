
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t vdev_children; TYPE_2__** vdev_child; TYPE_1__* vdev_ops; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ vdev_state; } ;
struct TYPE_5__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

boolean_t
FUNC_1(vdev_t *VAR_3)
{
 FUNC_0(!VAR_3->vdev_ops->vdev_op_leaf);

 for (uint64_t VAR_4 = 0; VAR_4 < VAR_3->vdev_children; VAR_4++) {
  if (VAR_3->vdev_child[VAR_4]->vdev_state != VAR_2)
   return (VAR_0);
 }

 return (VAR_1);
}
