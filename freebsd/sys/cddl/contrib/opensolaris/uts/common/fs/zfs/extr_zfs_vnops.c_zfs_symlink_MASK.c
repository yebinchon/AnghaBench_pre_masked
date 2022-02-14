
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_27__ ;
typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_37__ {char z_size; int z_sa_hdl; scalar_t__ z_is_sa; int z_id; TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
typedef int zilog_t ;
struct TYPE_38__ {TYPE_27__* z_os; int z_use_sa; scalar_t__ z_fuid_dirty; scalar_t__ z_utf8; int * z_log; } ;
typedef TYPE_3__ zfsvfs_t ;
struct TYPE_39__ {TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
typedef int vnode_t ;
struct TYPE_40__ {scalar_t__ va_type; } ;
typedef TYPE_5__ vattr_t ;
typedef scalar_t__ uint64_t ;
typedef int kthread_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_36__ {scalar_t__ os_sync; } ;
struct TYPE_35__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* FUNC_5 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_15 ;
 int * FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_27__*) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int *,int ,int ,scalar_t__) ;
 int FUNC_17 (int *,int ,int ,char*) ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ,int ,char*,int,int *) ;
 scalar_t__ FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char*,scalar_t__,int *,int ,int*) ;
 int FUNC_23 (TYPE_2__*,int ,TYPE_5__*,int *,int *,TYPE_4__*) ;
 int FUNC_24 (TYPE_4__*) ;
 scalar_t__ FUNC_25 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_26 (TYPE_2__*,char*,TYPE_2__**,int ) ;
 int FUNC_27 (TYPE_3__*,int *) ;
 int FUNC_28 (TYPE_3__*,int *) ;
 int FUNC_29 (TYPE_2__*,char*,TYPE_2__*,int *,int ) ;
 int FUNC_30 (int *,int *,scalar_t__,TYPE_2__*,TYPE_2__*,char*,char*) ;
 int FUNC_31 (TYPE_2__*,TYPE_5__*,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_32 (TYPE_2__*,char*,scalar_t__,int *) ;
 int FUNC_33 (TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_34 (int *,int ) ;

__attribute__((used)) static int
FUNC_35(vnode_t *VAR_16, vnode_t **VAR_17, char *VAR_18, vattr_t *VAR_19, char *VAR_20,
    cred_t *VAR_21, kthread_t *VAR_22)
{
 znode_t *VAR_23, *VAR_24 = FUNC_5(VAR_16);
 dmu_tx_t *VAR_25;
 zfsvfs_t *VAR_26 = VAR_24->z_zfsvfs;
 zilog_t *VAR_27;
 uint64_t VAR_28 = FUNC_21(VAR_20);
 int VAR_29;
 zfs_acl_ids_t VAR_30;
 boolean_t VAR_31;
 uint64_t VAR_32 = VAR_9;
 int VAR_33 = 0;

 FUNC_0(VAR_19->va_type == VAR_11);

 FUNC_6(VAR_26);
 FUNC_8(VAR_24);
 VAR_27 = VAR_26->z_log;

 if (VAR_26->z_utf8 && FUNC_22(VAR_18, FUNC_21(VAR_18),
     ((void*)0), VAR_10, &VAR_29) < 0) {
  FUNC_7(VAR_26);
  return (FUNC_4(VAR_4));
 }

 if (VAR_28 > VAR_6) {
  FUNC_7(VAR_26);
  return (FUNC_4(VAR_5));
 }

 if ((VAR_29 = FUNC_23(VAR_24, 0,
     VAR_19, VAR_21, ((void*)0), &VAR_30)) != 0) {
  FUNC_7(VAR_26);
  return (VAR_29);
 }




 VAR_29 = FUNC_26(VAR_24, VAR_18, &VAR_23, VAR_15);
 if (VAR_29) {
  FUNC_24(&VAR_30);
  FUNC_7(VAR_26);
  return (VAR_29);
 }

 if ((VAR_29 = FUNC_33(VAR_24, VAR_0, 0, VAR_1, VAR_21))) {
  FUNC_24(&VAR_30);
  FUNC_7(VAR_26);
  return (VAR_29);
 }

 if (FUNC_25(VAR_26, &VAR_30)) {
  FUNC_24(&VAR_30);
  FUNC_7(VAR_26);
  return (FUNC_4(VAR_3));
 }

 FUNC_19(1);
 VAR_25 = FUNC_13(VAR_26->z_os);
 VAR_31 = VAR_26->z_fuid_dirty;
 FUNC_16(VAR_25, VAR_2, 0, FUNC_1(1, VAR_28));
 FUNC_17(VAR_25, VAR_24->z_id, VAR_7, VAR_18);
 FUNC_15(VAR_25, VAR_30.z_aclp->z_acl_bytes +
     VAR_13 + VAR_28);
 FUNC_14(VAR_25, VAR_24->z_sa_hdl, VAR_1);
 if (!VAR_26->z_use_sa && VAR_30.z_aclp->z_acl_bytes > VAR_12) {
  FUNC_16(VAR_25, VAR_2, 0,
      VAR_30.z_aclp->z_acl_bytes);
 }
 if (VAR_31)
  FUNC_28(VAR_26, VAR_25);
 VAR_29 = FUNC_11(VAR_25, VAR_8);
 if (VAR_29) {
  FUNC_24(&VAR_30);
  FUNC_10(VAR_25);
  FUNC_18();
  FUNC_7(VAR_26);
  return (VAR_29);
 }





 FUNC_31(VAR_24, VAR_19, VAR_25, VAR_21, 0, &VAR_23, &VAR_30);

 if (VAR_31)
  FUNC_27(VAR_26, VAR_25);

 if (VAR_23->z_is_sa)
  VAR_29 = FUNC_20(VAR_23->z_sa_hdl, FUNC_3(VAR_26),
      VAR_20, VAR_28, VAR_25);
 else
  FUNC_32(VAR_23, VAR_20, VAR_28, VAR_25);

 VAR_23->z_size = VAR_28;
 (void) FUNC_20(VAR_23->z_sa_hdl, FUNC_2(VAR_26),
     &VAR_23->z_size, sizeof (VAR_23->z_size), VAR_25);



 (void) FUNC_29(VAR_24, VAR_18, VAR_23, VAR_25, VAR_15);

 FUNC_30(VAR_27, VAR_25, VAR_32, VAR_24, VAR_23, VAR_18, VAR_20);
 *VAR_17 = FUNC_9(VAR_23);

 FUNC_24(&VAR_30);

 FUNC_12(VAR_25);

 FUNC_18();

 if (VAR_26->z_os->os_sync == VAR_14)
  FUNC_34(VAR_27, 0);

 FUNC_7(VAR_26);
 return (VAR_29);
}
