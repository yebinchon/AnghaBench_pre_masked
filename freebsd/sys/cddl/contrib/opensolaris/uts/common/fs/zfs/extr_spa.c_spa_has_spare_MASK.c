
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int sav_count; int sav_npending; int * sav_pending; TYPE_1__** sav_vdevs; } ;
struct TYPE_6__ {TYPE_3__ spa_spares; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_aux_vdev_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ vdev_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;

boolean_t
FUNC_1(spa_t *VAR_3, uint64_t VAR_4)
{
 int VAR_5;
 uint64_t VAR_6;
 spa_aux_vdev_t *VAR_7 = &VAR_3->spa_spares;

 for (VAR_5 = 0; VAR_5 < VAR_7->sav_count; VAR_5++)
  if (VAR_7->sav_vdevs[VAR_5]->vdev_guid == VAR_4)
   return (VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_7->sav_npending; VAR_5++) {
  if (FUNC_0(VAR_7->sav_pending[VAR_5], VAR_2,
      &VAR_6) == 0 && VAR_6 == VAR_4)
   return (VAR_1);
 }

 return (VAR_0);
}
