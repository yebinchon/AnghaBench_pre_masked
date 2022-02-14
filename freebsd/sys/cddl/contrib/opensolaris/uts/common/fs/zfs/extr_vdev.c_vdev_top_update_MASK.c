
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_children; struct TYPE_4__** vdev_child; struct TYPE_4__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;



__attribute__((used)) static void
FUNC_0(vdev_t *VAR_0, vdev_t *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 VAR_1->vdev_top = VAR_0;

 for (int VAR_2 = 0; VAR_2 < VAR_1->vdev_children; VAR_2++)
  FUNC_0(VAR_0, VAR_1->vdev_child[VAR_2]);
}
