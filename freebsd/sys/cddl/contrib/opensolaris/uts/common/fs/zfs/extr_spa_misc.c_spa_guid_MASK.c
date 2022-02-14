
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ spa_config_guid; scalar_t__ spa_last_synced_guid; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int dsl_pool_t ;
struct TYPE_5__ {scalar_t__ vdev_guid; } ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*) ;

uint64_t
FUNC_2(spa_t *VAR_0)
{
 dsl_pool_t *VAR_1 = FUNC_1(VAR_0);
 uint64_t VAR_2;







 if (VAR_0->spa_root_vdev == ((void*)0))
  return (VAR_0->spa_config_guid);

 VAR_2 = VAR_0->spa_last_synced_guid != 0 ?
     VAR_0->spa_last_synced_guid : VAR_0->spa_root_vdev->vdev_guid;





 if (VAR_1 && FUNC_0(VAR_1))
  return (VAR_0->spa_root_vdev->vdev_guid);
 else
  return (VAR_2);
}
