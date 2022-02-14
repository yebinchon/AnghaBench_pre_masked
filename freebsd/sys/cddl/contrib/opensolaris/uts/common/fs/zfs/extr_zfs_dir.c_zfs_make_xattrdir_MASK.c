
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ z_id; int z_sa_hdl; TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_24__ {int z_log; scalar_t__ z_fuid_dirty; int z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
struct TYPE_25__ {int z_fuidp; TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
typedef int vnode_t ;
typedef int vattr_t ;
typedef scalar_t__ uint64_t ;
typedef int parent ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_22__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_9 ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,int ,int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_16 (int ,int ,scalar_t__*,int,int *) ;
 int FUNC_17 (TYPE_2__*,int ,int *,int *,int *,TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (TYPE_3__*,int *) ;
 int FUNC_22 (int ,int *,int ,TYPE_2__*,TYPE_2__*,char*,int *,int ,int *) ;
 int FUNC_23 (TYPE_2__*,int *,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_24 (TYPE_2__*,int ,int ,int ,int *) ;

int
FUNC_25(znode_t *VAR_10, vattr_t *VAR_11, vnode_t **VAR_12, cred_t *VAR_13)
{
 zfsvfs_t *VAR_14 = VAR_10->z_zfsvfs;
 znode_t *VAR_15;
 dmu_tx_t *VAR_16;
 int VAR_17;
 zfs_acl_ids_t VAR_18;
 boolean_t VAR_19;
 uint64_t VAR_20;

 *VAR_12 = ((void*)0);






 if ((VAR_17 = FUNC_24(VAR_10, VAR_0, 0, VAR_1, VAR_13)))
  return (VAR_17);


 if ((VAR_17 = FUNC_17(VAR_10, VAR_6, VAR_11, VAR_13, ((void*)0),
     &VAR_18)) != 0)
  return (VAR_17);
 if (FUNC_19(VAR_14, &VAR_18)) {
  FUNC_18(&VAR_18);
  return (FUNC_3(VAR_4));
 }

 FUNC_14(1);

 VAR_16 = FUNC_9(VAR_14->z_os);
 FUNC_11(VAR_16, VAR_18.z_aclp->z_acl_bytes +
     VAR_9);
 FUNC_10(VAR_16, VAR_10->z_sa_hdl, VAR_2);
 FUNC_12(VAR_16, VAR_3, VAR_5, ((void*)0));
 VAR_19 = VAR_14->z_fuid_dirty;
 if (VAR_19)
  FUNC_21(VAR_14, VAR_16);
 VAR_17 = FUNC_7(VAR_16, VAR_7);
 if (VAR_17) {
  FUNC_18(&VAR_18);
  FUNC_6(VAR_16);
  return (VAR_17);
 }
 FUNC_23(VAR_10, VAR_11, VAR_16, VAR_13, VAR_6, &VAR_15, &VAR_18);

 if (VAR_19)
  FUNC_20(VAR_14, VAR_16);







 FUNC_4(0 == FUNC_16(VAR_10->z_sa_hdl, FUNC_2(VAR_14), &VAR_15->z_id,
     sizeof (VAR_15->z_id), VAR_16));

 (void) FUNC_22(VAR_14->z_log, VAR_16, VAR_8, VAR_10,
     VAR_15, "", ((void*)0), VAR_18.z_fuidp, VAR_11);

 FUNC_18(&VAR_18);
 FUNC_8(VAR_16);

 FUNC_13();

 *VAR_12 = FUNC_5(VAR_15);

 return (0);
}
