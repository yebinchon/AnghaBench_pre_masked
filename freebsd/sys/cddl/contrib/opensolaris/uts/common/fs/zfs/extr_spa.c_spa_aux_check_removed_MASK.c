
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sav_count; int * sav_vdevs; } ;
typedef TYPE_1__ spa_aux_vdev_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(spa_aux_vdev_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->sav_count; VAR_1++)
  FUNC_0(VAR_0->sav_vdevs[VAR_1]);
}
