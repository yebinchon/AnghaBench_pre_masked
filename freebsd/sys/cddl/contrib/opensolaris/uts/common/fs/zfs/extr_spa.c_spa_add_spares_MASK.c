
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vs_aux; int vs_state; } ;
typedef TYPE_2__ vdev_stat_t ;
typedef scalar_t__ uint_t ;
typedef unsigned long long uint64_t ;
struct TYPE_6__ {scalar_t__ sav_count; int * sav_config; } ;
struct TYPE_8__ {TYPE_1__ spa_spares; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int ,int **,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int ***,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int ,unsigned long long*) ;
 scalar_t__ FUNC_6 (int *,int ,unsigned long long**,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_8 (unsigned long long,unsigned long long*,int *) ;

__attribute__((used)) static void
FUNC_9(spa_t *VAR_8, nvlist_t *VAR_9)
{
 nvlist_t **VAR_10;
 uint_t VAR_11, VAR_12;
 nvlist_t *VAR_13;
 uint64_t VAR_14;
 vdev_stat_t *VAR_15;
 uint_t VAR_16;
 uint64_t VAR_17;

 FUNC_0(FUNC_7(VAR_8, VAR_1, VAR_0));

 if (VAR_8->spa_spares.sav_count == 0)
  return;

 FUNC_1(FUNC_3(VAR_9,
     VAR_7, &VAR_13) == 0);
 FUNC_1(FUNC_4(VAR_8->spa_spares.sav_config,
     VAR_5, &VAR_10, &VAR_12) == 0);
 if (VAR_12 != 0) {
  FUNC_1(FUNC_2(VAR_13,
      VAR_5, VAR_10, VAR_12) == 0);
  FUNC_1(FUNC_4(VAR_13,
      VAR_5, &VAR_10, &VAR_12) == 0);






  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   FUNC_1(FUNC_5(VAR_10[VAR_11],
       VAR_4, &VAR_14) == 0);
   if (FUNC_8(VAR_14, &VAR_17, ((void*)0)) &&
       VAR_17 != 0ULL) {
    FUNC_1(FUNC_6(
        VAR_10[VAR_11], VAR_6,
        (uint64_t **)&VAR_15, &VAR_16) == 0);
    VAR_15->vs_state = VAR_3;
    VAR_15->vs_aux = VAR_2;
   }
  }
 }
}
