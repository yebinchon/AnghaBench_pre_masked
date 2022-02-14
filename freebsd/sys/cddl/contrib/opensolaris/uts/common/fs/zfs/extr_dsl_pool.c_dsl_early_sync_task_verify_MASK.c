
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t vdev_children; int vdev_ms_list; struct TYPE_9__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int txg_list_t ;
struct TYPE_10__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {int ms_checkpointing; int ms_freeing; } ;
typedef TYPE_3__ metaslab_t ;
struct TYPE_12__ {TYPE_2__* dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 TYPE_3__* FUNC_4 (int *,TYPE_3__*,int ) ;

__attribute__((used)) static boolean_t
FUNC_5(dsl_pool_t *VAR_1, uint64_t VAR_2)
{
 spa_t *VAR_3 = VAR_1->dp_spa;
 vdev_t *VAR_4 = VAR_3->spa_root_vdev;

 for (uint64_t VAR_5 = 0; VAR_5 < VAR_4->vdev_children; VAR_5++) {
  vdev_t *VAR_6 = VAR_4->vdev_child[VAR_5];
  txg_list_t *VAR_7 = &VAR_6->vdev_ms_list;
  metaslab_t *VAR_8;

  for (VAR_8 = FUNC_3(VAR_7, FUNC_0(VAR_2)); VAR_8;
      VAR_8 = FUNC_4(VAR_7, VAR_8, FUNC_0(VAR_2))) {
   FUNC_1(FUNC_2(VAR_8->ms_freeing));
   FUNC_1(FUNC_2(VAR_8->ms_checkpointing));
  }
 }

 return (VAR_0);
}
