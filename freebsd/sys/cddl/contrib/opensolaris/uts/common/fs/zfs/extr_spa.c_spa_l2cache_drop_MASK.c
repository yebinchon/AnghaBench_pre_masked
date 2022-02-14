
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
typedef unsigned long long uint64_t ;
struct TYPE_9__ {int sav_count; TYPE_1__** sav_vdevs; } ;
struct TYPE_8__ {TYPE_3__ spa_l2cache; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_aux_vdev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,unsigned long long*) ;

void
FUNC_4(spa_t *VAR_0)
{
 vdev_t *VAR_1;
 int VAR_2;
 spa_aux_vdev_t *VAR_3 = &VAR_0->spa_l2cache;

 for (VAR_2 = 0; VAR_2 < VAR_3->sav_count; VAR_2++) {
  uint64_t VAR_4;

  VAR_1 = VAR_3->sav_vdevs[VAR_2];
  FUNC_0(VAR_1 != ((void*)0));

  if (FUNC_3(VAR_1->vdev_guid, &VAR_4) &&
      VAR_4 != 0ULL && FUNC_2(VAR_1))
   FUNC_1(VAR_1);
 }
}
