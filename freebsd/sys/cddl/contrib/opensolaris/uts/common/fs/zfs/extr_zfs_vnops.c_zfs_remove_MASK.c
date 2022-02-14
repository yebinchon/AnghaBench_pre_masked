
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;


struct TYPE_26__ {int z_sa_hdl; scalar_t__ z_id; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_27__ {TYPE_17__* z_os; scalar_t__ z_unlinkedobj; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int xattr_obj ;
struct TYPE_28__ {scalar_t__ v_type; int v_vflag; } ;
typedef TYPE_3__ vnode_t ;
typedef scalar_t__ uint64_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_25__ {scalar_t__ os_sync; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_17__*) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ,scalar_t__*,int) ;
 int FUNC_16 (TYPE_3__*,TYPE_3__*,char*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_1__*,char*,TYPE_1__*,int *,int ,scalar_t__*) ;
 int FUNC_19 (int *,int *,scalar_t__,TYPE_1__*,char*,scalar_t__) ;
 int FUNC_20 (int *,TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int *) ;
 int FUNC_22 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_23 (TYPE_2__*,scalar_t__,TYPE_1__**) ;
 int FUNC_24 (int *,int ) ;

__attribute__((used)) static int
FUNC_25(vnode_t *VAR_11, vnode_t *VAR_12, char *VAR_13, cred_t *VAR_14)
{
 znode_t *VAR_15 = FUNC_3(VAR_11);
 znode_t *VAR_16 = FUNC_3(VAR_12);
 znode_t *VAR_17;
 zfsvfs_t *VAR_18 = VAR_15->z_zfsvfs;
 zilog_t *VAR_19;
 uint64_t VAR_20, VAR_21;
 uint64_t VAR_22 = 0;
 dmu_tx_t *VAR_23;
 boolean_t VAR_24, VAR_25 = VAR_3;
 uint64_t VAR_26;
 int VAR_27;

 FUNC_4(VAR_18);
 FUNC_6(VAR_15);
 FUNC_6(VAR_16);
 VAR_19 = VAR_18->z_log;
 VAR_16 = FUNC_3(VAR_12);

 VAR_21 = 0;
 VAR_17 = ((void*)0);

 if ((VAR_27 = FUNC_22(VAR_15, VAR_16, VAR_14))) {
  goto out;
 }




 if (VAR_12->v_type == VAR_6) {
  VAR_27 = FUNC_2(VAR_2);
  goto out;
 }

 FUNC_16(VAR_12, VAR_11, VAR_13, VAR_10);

 VAR_22 = VAR_16->z_id;


 VAR_27 = FUNC_15(VAR_16->z_sa_hdl, FUNC_1(VAR_18),
     &VAR_21, sizeof (VAR_21));
 if (VAR_27 == 0 && VAR_21) {
  VAR_27 = FUNC_23(VAR_18, VAR_21, &VAR_17);
  FUNC_0(VAR_27);
 }







 VAR_23 = FUNC_11(VAR_18->z_os);
 FUNC_13(VAR_23, VAR_15->z_id, VAR_3, VAR_13);
 FUNC_12(VAR_23, VAR_16->z_sa_hdl, VAR_0);
 FUNC_20(VAR_23, VAR_16);
 FUNC_20(VAR_23, VAR_15);

 if (VAR_17) {
  FUNC_12(VAR_23, VAR_16->z_sa_hdl, VAR_1);
  FUNC_12(VAR_23, VAR_17->z_sa_hdl, VAR_0);
 }


 FUNC_13(VAR_23, VAR_18->z_unlinkedobj, VAR_3, ((void*)0));




 FUNC_14(VAR_23);

 VAR_27 = FUNC_9(VAR_23, VAR_4);
 if (VAR_27) {
  FUNC_8(VAR_23);
  FUNC_5(VAR_18);
  return (VAR_27);
 }




 VAR_27 = FUNC_18(VAR_15, VAR_13, VAR_16, VAR_23, VAR_8, &VAR_24);

 if (VAR_27) {
  FUNC_10(VAR_23);
  goto out;
 }

 if (VAR_24) {
  FUNC_21(VAR_16, VAR_23);
  VAR_12->v_vflag |= VAR_7;
 }

 VAR_26 = VAR_5;
 FUNC_19(VAR_19, VAR_23, VAR_26, VAR_15, VAR_13, VAR_22);

 FUNC_10(VAR_23);
out:

 if (VAR_17)
  FUNC_17(FUNC_7(VAR_17));

 if (VAR_18->z_os->os_sync == VAR_9)
  FUNC_24(VAR_19, 0);

 FUNC_5(VAR_18);
 return (VAR_27);
}
