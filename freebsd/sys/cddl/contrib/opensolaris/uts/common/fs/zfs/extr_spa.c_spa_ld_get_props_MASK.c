
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int zcs_bytes; } ;
struct TYPE_10__ {scalar_t__ spa_deflate; scalar_t__ spa_creation_version; scalar_t__ spa_errlog_last; scalar_t__ spa_errlog_scrub; scalar_t__ spa_history; scalar_t__ spa_all_vdev_zaps; scalar_t__ spa_delegation; scalar_t__ spa_pool_props_object; scalar_t__ spa_bootfs; scalar_t__ spa_failmode; scalar_t__ spa_autoexpand; scalar_t__ spa_dedup_ditto; int spa_autoreplace; scalar_t__ spa_missing_tvds; scalar_t__ spa_load_state; int * spa_root_vdev; int spa_avz_action; int spa_config_object; int spa_meta_objset; int spa_deferred_bpobj; TYPE_1__ spa_cksum_salt; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;


 int FUNC_0 (int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,scalar_t__*,int ) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(spa_t *VAR_26)
{
 int VAR_27 = 0;
 uint64_t VAR_28;
 vdev_t *VAR_29 = VAR_26->spa_root_vdev;


 VAR_27 = FUNC_13(VAR_26->spa_meta_objset, VAR_7,
     VAR_4, 1,
     sizeof (VAR_26->spa_cksum_salt.zcs_bytes),
     VAR_26->spa_cksum_salt.zcs_bytes);
 if (VAR_27 == VAR_15) {

  (void) FUNC_6(VAR_26->spa_cksum_salt.zcs_bytes,
      sizeof (VAR_26->spa_cksum_salt.zcs_bytes));
 } else if (VAR_27 != 0) {
  FUNC_8(VAR_26, "unable to retrieve checksum salt from "
      "MOS [error=%d]", VAR_27);
  return (FUNC_11(VAR_29, VAR_17, VAR_14));
 }

 if (FUNC_7(VAR_26, VAR_12, &VAR_28, VAR_3) != 0)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));
 VAR_27 = FUNC_2(&VAR_26->spa_deferred_bpobj, VAR_26->spa_meta_objset, VAR_28);
 if (VAR_27 != 0) {
  FUNC_8(VAR_26, "error opening deferred-frees bpobj "
      "[error=%d]", VAR_27);
  return (FUNC_11(VAR_29, VAR_17, VAR_14));
 }






 VAR_27 = FUNC_7(VAR_26, VAR_6, &VAR_26->spa_deflate, VAR_2);
 if (VAR_27 != 0 && VAR_27 != VAR_15)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));

 VAR_27 = FUNC_7(VAR_26, VAR_5,
     &VAR_26->spa_creation_version, VAR_2);
 if (VAR_27 != 0 && VAR_27 != VAR_15)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));





 VAR_27 = FUNC_7(VAR_26, VAR_8, &VAR_26->spa_errlog_last,
     VAR_2);
 if (VAR_27 != 0 && VAR_27 != VAR_15)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));

 VAR_27 = FUNC_7(VAR_26, VAR_9,
     &VAR_26->spa_errlog_scrub, VAR_2);
 if (VAR_27 != 0 && VAR_27 != VAR_15)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));





 VAR_27 = FUNC_7(VAR_26, VAR_10, &VAR_26->spa_history, VAR_2);
 if (VAR_27 != 0 && VAR_27 != VAR_15)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));
 nvlist_t *VAR_30;
 if (FUNC_3(VAR_26, VAR_26->spa_config_object, &VAR_30) != 0) {
  FUNC_8(VAR_26, "unable to retrieve MOS config");
  return (FUNC_11(VAR_29, VAR_17, VAR_14));
 }

 VAR_27 = FUNC_7(VAR_26, VAR_13,
     &VAR_26->spa_all_vdev_zaps, VAR_2);

 if (VAR_27 == VAR_15) {
  FUNC_1(!FUNC_4(VAR_30,
      VAR_19));
  VAR_26->spa_avz_action = VAR_1;
  FUNC_0(FUNC_12(VAR_26->spa_root_vdev));
 } else if (VAR_27 != 0) {
  return (FUNC_11(VAR_29, VAR_17, VAR_14));
 } else if (!FUNC_4(VAR_30, VAR_19)) {





  VAR_26->spa_avz_action = VAR_0;




  FUNC_0(FUNC_12(VAR_26->spa_root_vdev));
 }
 FUNC_5(VAR_30);

 VAR_26->spa_delegation = FUNC_14(VAR_24);

 VAR_27 = FUNC_7(VAR_26, VAR_11, &VAR_26->spa_pool_props_object,
     VAR_2);
 if (VAR_27 && VAR_27 != VAR_15)
  return (FUNC_11(VAR_29, VAR_17, VAR_14));

 if (VAR_27 == 0) {
  uint64_t VAR_31;

  FUNC_10(VAR_26, VAR_22, &VAR_26->spa_bootfs);
  FUNC_10(VAR_26, VAR_21, &VAR_31);
  FUNC_10(VAR_26, VAR_24, &VAR_26->spa_delegation);
  FUNC_10(VAR_26, VAR_25, &VAR_26->spa_failmode);
  FUNC_10(VAR_26, VAR_20, &VAR_26->spa_autoexpand);
  FUNC_10(VAR_26, VAR_23,
      &VAR_26->spa_dedup_ditto);

  VAR_26->spa_autoreplace = (VAR_31 != 0);
 }






 if (VAR_26->spa_missing_tvds > 0 &&
     VAR_26->spa_failmode != VAR_18 &&
     VAR_26->spa_load_state != VAR_16) {
  FUNC_9(VAR_26, "forcing failmode to 'continue' "
      "as some top level vdevs are missing");
  VAR_26->spa_failmode = VAR_18;
 }

 return (0);
}
