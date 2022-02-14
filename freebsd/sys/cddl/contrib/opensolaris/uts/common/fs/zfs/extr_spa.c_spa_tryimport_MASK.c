
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ zlp_txg; } ;
typedef TYPE_2__ zpool_load_policy_t ;
typedef int uint64_t ;
struct TYPE_17__ {int ub_timestamp; } ;
struct TYPE_19__ {scalar_t__ spa_load_max_txg; scalar_t__ spa_bootfs; int spa_load_info; TYPE_1__ spa_uberblock; int * spa_root_vdev; int spa_config_source; int spa_extreme_rewind; int spa_config; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
typedef int longlong_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,char**) ;
 scalar_t__ FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (char*,int ,char*,char*,char*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_3__*,int ,int ) ;
 int * FUNC_18 (TYPE_3__*,int *,unsigned long long,int ) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int ,int ) ;
 int FUNC_21 (TYPE_3__*) ;
 int VAR_20 ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 char* FUNC_24 (char*,char) ;
 int FUNC_25 (char*,char*,int ) ;
 int FUNC_26 (char*,char*,...) ;
 int FUNC_27 (int ,TYPE_2__*) ;

nvlist_t *
FUNC_28(nvlist_t *VAR_21)
{
 nvlist_t *VAR_22 = ((void*)0);
 char *VAR_23, *VAR_24;
 spa_t *VAR_25;
 uint64_t VAR_26;
 int VAR_27;
 zpool_load_policy_t VAR_28;

 if (FUNC_9(VAR_21, VAR_17, &VAR_23))
  return (((void*)0));

 if (FUNC_10(VAR_21, VAR_18, &VAR_26))
  return (((void*)0));




 FUNC_4(&VAR_20);
 VAR_25 = FUNC_13(VAR_12, VAR_21, ((void*)0));
 FUNC_12(VAR_25, VAR_2);




 FUNC_27(VAR_25->spa_config, &VAR_28);
 if (VAR_28.zlp_txg != VAR_13) {
  VAR_25->spa_load_max_txg = VAR_28.zlp_txg;
  VAR_25->spa_extreme_rewind = VAR_0;
  FUNC_26("spa_tryimport: importing %s, max_txg=%lld",
      VAR_23, (longlong_t)VAR_28.zlp_txg);
 } else {
  FUNC_26("spa_tryimport: importing %s", VAR_23);
 }

 if (FUNC_9(VAR_21, VAR_15, &VAR_24)
     == 0) {
  FUNC_26("spa_tryimport: using cachefile '%s'", VAR_24);
  VAR_25->spa_config_source = VAR_8;
 } else {
  VAR_25->spa_config_source = VAR_9;
 }

 VAR_27 = FUNC_20(VAR_25, VAR_11, VAR_10);




 if (VAR_25->spa_root_vdev != ((void*)0)) {
  VAR_22 = FUNC_18(VAR_25, ((void*)0), -1ULL, VAR_0);
  FUNC_0(FUNC_7(VAR_22, VAR_17,
      VAR_23) == 0);
  FUNC_0(FUNC_8(VAR_22, VAR_18,
      VAR_26) == 0);
  FUNC_0(FUNC_8(VAR_22, VAR_19,
      VAR_25->spa_uberblock.ub_timestamp) == 0);
  FUNC_0(FUNC_6(VAR_22, VAR_16,
      VAR_25->spa_load_info) == 0);






  if ((!VAR_27 || VAR_27 == VAR_1) && VAR_25->spa_bootfs) {
   char *VAR_29 = FUNC_2(VAR_5, VAR_4);





   if (FUNC_1(FUNC_21(VAR_25),
       VAR_25->spa_bootfs, VAR_29) == 0) {
    char *VAR_30;
    char *VAR_31 = FUNC_2(VAR_5, VAR_4);

    VAR_30 = FUNC_24(VAR_29, '/');
    if (VAR_30 == ((void*)0)) {
     (void) FUNC_25(VAR_31, VAR_29,
         VAR_5);
    } else {
     (void) FUNC_11(VAR_31, VAR_5,
         "%s/%s", VAR_23, ++VAR_30);
    }
    FUNC_0(FUNC_7(VAR_22,
        VAR_14, VAR_31) == 0);
    FUNC_3(VAR_31, VAR_5);
   }
   FUNC_3(VAR_29, VAR_5);
  }




  FUNC_16(VAR_25, VAR_7, VAR_3, VAR_6);
  FUNC_15(VAR_25, VAR_22);
  FUNC_14(VAR_25, VAR_22);
  FUNC_17(VAR_25, VAR_7, VAR_3);
 }

 FUNC_23(VAR_25);
 FUNC_19(VAR_25);
 FUNC_22(VAR_25);
 FUNC_5(&VAR_20);

 return (VAR_22);
}
