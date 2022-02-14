
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_8__ {int sav_count; TYPE_1__** sav_vdevs; } ;
struct TYPE_7__ {TYPE_3__ spa_spares; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_aux_vdev_t ;
typedef int boolean_t ;
struct TYPE_6__ {int vdev_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,unsigned long long*,int*) ;

__attribute__((used)) static boolean_t
FUNC_2(spa_t *VAR_2)
{
 int VAR_3, VAR_4;
 uint64_t VAR_5;
 spa_aux_vdev_t *VAR_6 = &VAR_2->spa_spares;

 for (VAR_3 = 0; VAR_3 < VAR_6->sav_count; VAR_3++) {
  if (FUNC_1(VAR_6->sav_vdevs[VAR_3]->vdev_guid, &VAR_5,
      &VAR_4) && VAR_5 != 0ULL && VAR_5 == FUNC_0(VAR_2) &&
      VAR_4 > 2)
   return (VAR_1);
 }

 return (VAR_0);
}
