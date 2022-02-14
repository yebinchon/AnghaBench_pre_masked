
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_children; struct TYPE_4__** vdev_child; int vdev_min_asize; } ;
typedef TYPE_1__ vdev_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(vdev_t *VAR_0)
{
 VAR_0->vdev_min_asize = FUNC_0(VAR_0);

 for (int VAR_1 = 0; VAR_1 < VAR_0->vdev_children; VAR_1++)
  FUNC_1(VAR_0->vdev_child[VAR_1]);
}
