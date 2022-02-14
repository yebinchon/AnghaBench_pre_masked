
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_13__ {scalar_t__ ub_checkpoint_txg; scalar_t__ ub_txg; scalar_t__ ub_version; } ;
typedef TYPE_1__ uberblock_t ;
typedef int u_longlong_t ;
struct TYPE_14__ {int * spa_config_splitting; int spa_config; int spa_load_info; int * spa_label_features; TYPE_1__ spa_uberblock; int * spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ spa_import_type_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int **) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,char*,...) ;
 int FUNC_16 (TYPE_2__*,char*,int ) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,TYPE_1__*,int **) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(spa_t *VAR_14, spa_import_type_t VAR_15)
{
 vdev_t *VAR_16 = VAR_14->spa_root_vdev;
 nvlist_t *VAR_17;
 uberblock_t *VAR_18 = &VAR_14->spa_uberblock;
 if (VAR_18->ub_checkpoint_txg != 0 &&
     FUNC_13(VAR_14)) {
  FUNC_14(VAR_14, VAR_18);
  return (0);
 }




 FUNC_19(VAR_16, VAR_18, &VAR_17);




 if (VAR_18->ub_txg == 0) {
  FUNC_7(VAR_17);
  FUNC_15(VAR_14, "no valid uberblock found");
  return (FUNC_18(VAR_16, VAR_9, VAR_1));
 }

 FUNC_16(VAR_14, "using uberblock with txg=%llu",
     (u_longlong_t)VAR_18->ub_txg);




 if (!FUNC_0(VAR_18->ub_version)) {
  FUNC_7(VAR_17);
  FUNC_15(VAR_14, "version %llu is not supported",
      (u_longlong_t)VAR_18->ub_version);
  return (FUNC_18(VAR_16, VAR_11, VAR_0));
 }

 if (VAR_18->ub_version >= VAR_8) {
  nvlist_t *VAR_19;





  if (VAR_17 == ((void*)0)) {
   FUNC_15(VAR_14, "label config unavailable");
   return (FUNC_18(VAR_16, VAR_9,
       VAR_1));
  }

  if (FUNC_8(VAR_17, VAR_12,
      &VAR_19) != 0) {
   FUNC_7(VAR_17);
   FUNC_15(VAR_14, "invalid label: '%s' missing",
       VAR_12);
   return (FUNC_18(VAR_16, VAR_9,
       VAR_1));
  }





  FUNC_7(VAR_14->spa_label_features);
  FUNC_1(FUNC_5(VAR_19, &VAR_14->spa_label_features, 0) == 0);
 }

 FUNC_7(VAR_17);






 if (VAR_18->ub_version >= VAR_8) {
  nvlist_t *VAR_20;

  FUNC_1(FUNC_4(&VAR_20, VAR_4, VAR_3) ==
      0);

  for (nvpair_t *VAR_21 = FUNC_9(VAR_14->spa_label_features,
      ((void*)0)); VAR_21 != ((void*)0);
      VAR_21 = FUNC_9(VAR_14->spa_label_features, VAR_21)) {
   if (!FUNC_20(FUNC_10(VAR_21))) {
    FUNC_1(FUNC_3(VAR_20,
        FUNC_10(VAR_21), "") == 0);
   }
  }

  if (!FUNC_6(VAR_20)) {
   FUNC_1(FUNC_2(VAR_14->spa_load_info,
       VAR_13, VAR_20) == 0);
   FUNC_7(VAR_20);
   FUNC_15(VAR_14, "some features are unsupported");
   return (FUNC_18(VAR_16, VAR_10,
       VAR_0));
  }

  FUNC_7(VAR_20);
 }

 if (VAR_15 != VAR_7 && VAR_14->spa_config_splitting) {
  FUNC_11(VAR_14, VAR_6, VAR_2, VAR_5);
  FUNC_17(VAR_14, VAR_14->spa_config);
  FUNC_12(VAR_14, VAR_6, VAR_2);
  FUNC_7(VAR_14->spa_config_splitting);
  VAR_14->spa_config_splitting = ((void*)0);
 }




 FUNC_14(VAR_14, VAR_18);

 return (0);
}
