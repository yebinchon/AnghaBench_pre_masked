
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vdev_guid; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_stat_t ;
typedef scalar_t__ uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ sav_count; TYPE_2__** sav_vdevs; int * sav_config; } ;
struct TYPE_9__ {TYPE_1__ spa_l2cache; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int ,int **,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int ***,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__**,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_9(spa_t *VAR_6, nvlist_t *VAR_7)
{
 nvlist_t **VAR_8;
 uint_t VAR_9, VAR_10, VAR_11;
 nvlist_t *VAR_12;
 uint64_t VAR_13;
 vdev_t *VAR_14;
 vdev_stat_t *VAR_15;
 uint_t VAR_16;

 FUNC_0(FUNC_7(VAR_6, VAR_1, VAR_0));

 if (VAR_6->spa_l2cache.sav_count == 0)
  return;

 FUNC_1(FUNC_3(VAR_7,
     VAR_5, &VAR_12) == 0);
 FUNC_1(FUNC_4(VAR_6->spa_l2cache.sav_config,
     VAR_3, &VAR_8, &VAR_11) == 0);
 if (VAR_11 != 0) {
  FUNC_1(FUNC_2(VAR_12,
      VAR_3, VAR_8, VAR_11) == 0);
  FUNC_1(FUNC_4(VAR_12,
      VAR_3, &VAR_8, &VAR_11) == 0);





  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
   FUNC_1(FUNC_5(VAR_8[VAR_9],
       VAR_2, &VAR_13) == 0);

   VAR_14 = ((void*)0);
   for (VAR_10 = 0; VAR_10 < VAR_6->spa_l2cache.sav_count; VAR_10++) {
    if (VAR_13 ==
        VAR_6->spa_l2cache.sav_vdevs[VAR_10]->vdev_guid) {
     VAR_14 = VAR_6->spa_l2cache.sav_vdevs[VAR_10];
     break;
    }
   }
   FUNC_0(VAR_14 != ((void*)0));

   FUNC_1(FUNC_6(VAR_8[VAR_9],
       VAR_4, (uint64_t **)&VAR_15, &VAR_16)
       == 0);
   FUNC_8(VAR_14, VAR_15);
  }
 }
}
