
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; scalar_t__ vdev_islog; int * vdev_mg; struct TYPE_5__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int metaslab_group_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_2)
{
 vdev_t *VAR_3 = VAR_2->spa_root_vdev;

 FUNC_0(FUNC_2(VAR_2, VAR_1, VAR_0));

 for (int VAR_4 = 0; VAR_4 < VAR_3->vdev_children; VAR_4++) {
  vdev_t *VAR_5 = VAR_3->vdev_child[VAR_4];
  metaslab_group_t *VAR_6 = VAR_5->vdev_mg;

  if (VAR_5->vdev_islog)
   FUNC_1(VAR_6);
 }
}
