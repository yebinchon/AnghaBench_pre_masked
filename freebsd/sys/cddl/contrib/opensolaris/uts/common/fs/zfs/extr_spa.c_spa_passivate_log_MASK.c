
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; scalar_t__ vdev_islog; int * vdev_mg; struct TYPE_6__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_7__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int metaslab_group_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_4(spa_t *VAR_4)
{
 vdev_t *VAR_5 = VAR_4->spa_root_vdev;
 boolean_t VAR_6 = VAR_0;

 FUNC_0(FUNC_2(VAR_4, VAR_3, VAR_2));

 if (!FUNC_3(VAR_4))
  return (VAR_0);

 for (int VAR_7 = 0; VAR_7 < VAR_5->vdev_children; VAR_7++) {
  vdev_t *VAR_8 = VAR_5->vdev_child[VAR_7];
  metaslab_group_t *VAR_9 = VAR_8->vdev_mg;

  if (VAR_8->vdev_islog) {
   FUNC_1(VAR_9);
   VAR_6 = VAR_1;
  }
 }

 return (VAR_6);
}
