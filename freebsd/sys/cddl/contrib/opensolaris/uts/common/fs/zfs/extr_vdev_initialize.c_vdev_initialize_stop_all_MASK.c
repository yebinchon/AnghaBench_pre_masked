
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_initializing_state_t ;
struct TYPE_6__ {scalar_t__ spa_sync_on; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(vdev_t *VAR_0, vdev_initializing_state_t VAR_1)
{
 FUNC_2(VAR_0, VAR_1);

 if (VAR_0->vdev_spa->spa_sync_on) {

  FUNC_1(FUNC_0(VAR_0->vdev_spa), 0);
 }
}
