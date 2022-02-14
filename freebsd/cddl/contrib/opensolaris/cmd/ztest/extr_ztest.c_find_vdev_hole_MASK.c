
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; scalar_t__ vdev_ishole; struct TYPE_5__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ) ;

int
FUNC_2(spa_t *VAR_2)
{
 vdev_t *VAR_3 = VAR_2->spa_root_vdev;
 int VAR_4;

 FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_0) == VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3->vdev_children; VAR_4++) {
  vdev_t *VAR_5 = VAR_3->vdev_child[VAR_4];

  if (VAR_5->vdev_ishole)
   break;
 }
 return (VAR_4);
}
