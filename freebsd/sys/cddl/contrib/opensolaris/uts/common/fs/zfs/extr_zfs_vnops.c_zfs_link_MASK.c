
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_17__ ;


struct TYPE_25__ {int z_pflags; int z_id; int z_sa_hdl; int z_uid; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_26__ {scalar_t__ z_shares_dir; TYPE_17__* z_os; scalar_t__ z_utf8; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_27__ {scalar_t__ v_type; } ;
typedef TYPE_3__ vnode_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uid_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef int caller_context_t ;
struct TYPE_24__ {scalar_t__ os_sync; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_17__*) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int ,int ,char*) ;
 int FUNC_14 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,int ,int *,int ,int*) ;
 int FUNC_18 (TYPE_3__*,int *) ;
 int FUNC_19 (TYPE_1__*,char*,TYPE_1__**,int ) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_21 (TYPE_1__*,char*,TYPE_1__*,int *,int ) ;
 int FUNC_22 (int *,int *,scalar_t__,TYPE_1__*,TYPE_1__*,char*) ;
 int FUNC_23 (int *,TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_25 (int *,int ) ;

__attribute__((used)) static int
FUNC_26(vnode_t *VAR_17, vnode_t *VAR_18, char *VAR_19, cred_t *VAR_20,
    caller_context_t *VAR_21, int VAR_22)
{
 znode_t *VAR_23 = FUNC_3(VAR_17);
 znode_t *VAR_24, *VAR_25;
 zfsvfs_t *VAR_26 = VAR_23->z_zfsvfs;
 zilog_t *VAR_27;
 dmu_tx_t *VAR_28;
 int VAR_29;
 uint64_t VAR_30;
 uid_t VAR_31;

 FUNC_0(VAR_17->v_type == VAR_9);

 FUNC_4(VAR_26);
 FUNC_6(VAR_23);
 VAR_27 = VAR_26->z_log;





 if (VAR_18->v_type == VAR_9) {
  FUNC_5(VAR_26);
  return (FUNC_2(VAR_4));
 }

 VAR_25 = FUNC_3(VAR_18);
 FUNC_6(VAR_25);

 if (VAR_25->z_pflags & (VAR_10 | VAR_11 | VAR_13)) {
  FUNC_5(VAR_26);
  return (FUNC_2(VAR_4));
 }



 if ((VAR_29 = FUNC_14(VAR_25->z_sa_hdl, FUNC_1(VAR_26),
     &VAR_30, sizeof (uint64_t))) != 0) {
  FUNC_5(VAR_26);
  return (VAR_29);
 }
 if (VAR_30 == VAR_26->z_shares_dir) {
  FUNC_5(VAR_26);
  return (FUNC_2(VAR_4));
 }

 if (VAR_26->z_utf8 && FUNC_17(VAR_19,
     FUNC_16(VAR_19), ((void*)0), VAR_8, &VAR_29) < 0) {
  FUNC_5(VAR_26);
  return (FUNC_2(VAR_2));
 }







 if ((VAR_25->z_pflags & VAR_15) != (VAR_23->z_pflags & VAR_15)) {
  FUNC_5(VAR_26);
  return (FUNC_2(VAR_3));
 }


 VAR_31 = FUNC_20(VAR_26, VAR_25->z_uid, VAR_20, VAR_12);
 if (VAR_31 != FUNC_7(VAR_20) && FUNC_15(VAR_18, VAR_20) != 0) {
  FUNC_5(VAR_26);
  return (FUNC_2(VAR_4));
 }

 if ((VAR_29 = FUNC_24(VAR_23, VAR_0, 0, VAR_1, VAR_20))) {
  FUNC_5(VAR_26);
  return (VAR_29);
 }




 VAR_29 = FUNC_19(VAR_23, VAR_19, &VAR_24, VAR_16);
 if (VAR_29) {
  FUNC_5(VAR_26);
  return (VAR_29);
 }

 VAR_28 = FUNC_11(VAR_26->z_os);
 FUNC_12(VAR_28, VAR_25->z_sa_hdl, VAR_1);
 FUNC_13(VAR_28, VAR_23->z_id, VAR_5, VAR_19);
 FUNC_23(VAR_28, VAR_25);
 FUNC_23(VAR_28, VAR_23);
 VAR_29 = FUNC_9(VAR_28, VAR_6);
 if (VAR_29) {
  FUNC_8(VAR_28);
  FUNC_5(VAR_26);
  return (VAR_29);
 }

 VAR_29 = FUNC_21(VAR_23, VAR_19, VAR_25, VAR_28, 0);

 if (VAR_29 == 0) {
  uint64_t VAR_32 = VAR_7;
  FUNC_22(VAR_27, VAR_28, VAR_32, VAR_23, VAR_25, VAR_19);
 }

 FUNC_10(VAR_28);

 if (VAR_29 == 0) {
  FUNC_18(VAR_18, VAR_21);
 }

 if (VAR_26->z_os->os_sync == VAR_14)
  FUNC_25(VAR_27, 0);

 FUNC_5(VAR_26);
 return (VAR_29);
}
