
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t vdev_children; TYPE_2__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_11__ {TYPE_3__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
typedef int boolean_t ;
struct TYPE_8__ {int vs_checkpoint_space; } ;
struct TYPE_9__ {TYPE_1__ vdev_stat; int * vdev_checkpoint_sm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static boolean_t
FUNC_4(spa_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_3->spa_root_vdev;

 FUNC_0(!FUNC_3(VAR_3));
 FUNC_0(FUNC_2(VAR_3, VAR_2));

 for (uint64_t VAR_5 = 0; VAR_5 < VAR_4->vdev_children; VAR_5++) {
  if (VAR_4->vdev_child[VAR_5]->vdev_checkpoint_sm != ((void*)0))
   return (VAR_0);
  FUNC_1(VAR_4->vdev_child[VAR_5]->vdev_stat.vs_checkpoint_space);
 }

 return (VAR_1);
}
