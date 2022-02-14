
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vdev_devid_vp; TYPE_3__* vdev_spa; int * vdev_name_vp; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_5__ {int spa_dsl_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_2)
{
 FUNC_0(FUNC_3(VAR_2->vdev_spa, VAR_1, VAR_0));

 if (VAR_2->vdev_name_vp) {
  FUNC_1(VAR_2->vdev_name_vp,
      FUNC_2(VAR_2->vdev_spa->spa_dsl_pool));
  VAR_2->vdev_name_vp = ((void*)0);
 }
 if (VAR_2->vdev_devid_vp) {
  FUNC_1(VAR_2->vdev_devid_vp,
      FUNC_2(VAR_2->vdev_spa->spa_dsl_pool));
  VAR_2->vdev_devid_vp = ((void*)0);
 }
}
