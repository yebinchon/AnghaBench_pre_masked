
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t vdev_children; struct TYPE_10__** vdev_child; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint_t ;
struct TYPE_9__ {scalar_t__ vdev_op_leaf; } ;



vdev_t *
FUNC_0(vdev_t *VAR_0, vdev_t *(*VAR_1)(vdev_t *, void *), void *VAR_2)
{
 if (VAR_0->vdev_ops->vdev_op_leaf) {
  if (VAR_1 == ((void*)0))
   return (VAR_0);
  else
   return (VAR_1(VAR_0, VAR_2));
 }

 for (uint_t VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_0->vdev_child[VAR_3];
  if ((VAR_4 = FUNC_0(VAR_4, VAR_1, VAR_2)) != ((void*)0))
   return (VAR_4);
 }
 return (((void*)0));
}
