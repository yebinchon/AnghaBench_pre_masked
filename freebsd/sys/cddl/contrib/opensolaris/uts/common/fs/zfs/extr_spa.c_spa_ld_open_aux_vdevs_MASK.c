
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_14__ {void* sav_sync; int sav_config; int sav_object; } ;
struct TYPE_13__ {void* sav_sync; int sav_config; int sav_object; } ;
struct TYPE_15__ {TYPE_2__ spa_l2cache; TYPE_1__ spa_spares; int * spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef scalar_t__ spa_import_type_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_10(spa_t *VAR_13, spa_import_type_t VAR_14)
{
 int VAR_15 = 0;
 vdev_t *VAR_16 = VAR_13->spa_root_vdev;
 VAR_15 = FUNC_4(VAR_13, VAR_3, &VAR_13->spa_spares.sav_object,
     VAR_0);
 if (VAR_15 != 0 && VAR_15 != VAR_5)
  return (FUNC_8(VAR_16, VAR_12, VAR_4));
 if (VAR_15 == 0 && VAR_14 != VAR_9) {
  FUNC_0(FUNC_9(VAR_13) >= VAR_11);
  if (FUNC_1(VAR_13, VAR_13->spa_spares.sav_object,
      &VAR_13->spa_spares.sav_config) != 0) {
   FUNC_5(VAR_13, "error loading spares nvlist");
   return (FUNC_8(VAR_16, VAR_12, VAR_4));
  }

  FUNC_2(VAR_13, VAR_8, VAR_6, VAR_7);
  FUNC_7(VAR_13);
  FUNC_3(VAR_13, VAR_8, VAR_6);
 } else if (VAR_15 == 0) {
  VAR_13->spa_spares.sav_sync = VAR_1;
 }




 VAR_15 = FUNC_4(VAR_13, VAR_2,
     &VAR_13->spa_l2cache.sav_object, VAR_0);
 if (VAR_15 != 0 && VAR_15 != VAR_5)
  return (FUNC_8(VAR_16, VAR_12, VAR_4));
 if (VAR_15 == 0 && VAR_14 != VAR_9) {
  FUNC_0(FUNC_9(VAR_13) >= VAR_10);
  if (FUNC_1(VAR_13, VAR_13->spa_l2cache.sav_object,
      &VAR_13->spa_l2cache.sav_config) != 0) {
   FUNC_5(VAR_13, "error loading l2cache nvlist");
   return (FUNC_8(VAR_16, VAR_12, VAR_4));
  }

  FUNC_2(VAR_13, VAR_8, VAR_6, VAR_7);
  FUNC_6(VAR_13);
  FUNC_3(VAR_13, VAR_8, VAR_6);
 } else if (VAR_15 == 0) {
  VAR_13->spa_l2cache.sav_sync = VAR_1;
 }

 return (0);
}
