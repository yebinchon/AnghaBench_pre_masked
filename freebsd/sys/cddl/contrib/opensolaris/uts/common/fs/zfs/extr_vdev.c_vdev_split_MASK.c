
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vdev_children; int vdev_splitting; struct TYPE_8__** vdev_child; struct TYPE_8__* vdev_parent; } ;
typedef TYPE_1__ vdev_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(vdev_t *VAR_1)
{
 vdev_t *VAR_2, *VAR_3 = VAR_1->vdev_parent;

 FUNC_2(VAR_3, VAR_1);
 FUNC_0(VAR_3);

 VAR_2 = VAR_3->vdev_child[0];
 if (VAR_3->vdev_children == 1) {
  FUNC_3(VAR_2);
  VAR_2->vdev_splitting = VAR_0;
 }
 FUNC_1(VAR_2);
}
