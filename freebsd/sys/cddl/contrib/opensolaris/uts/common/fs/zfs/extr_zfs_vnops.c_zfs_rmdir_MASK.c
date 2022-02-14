
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


struct TYPE_22__ {int z_sa_hdl; int z_id; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_23__ {TYPE_14__* z_os; int z_unlinkedobj; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_24__ {scalar_t__ v_type; } ;
typedef TYPE_3__ vnode_t ;
typedef int uint64_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
struct TYPE_21__ {scalar_t__ os_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_14__*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,TYPE_3__*,char*,int ) ;
 int FUNC_14 (TYPE_1__*,char*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_15 (int *,int *,int ,TYPE_1__*,char*,int ) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static int
FUNC_19(vnode_t *VAR_10, vnode_t *VAR_11, char *VAR_12, cred_t *VAR_13)
{
 znode_t *VAR_14 = FUNC_1(VAR_10);
 znode_t *VAR_15 = FUNC_1(VAR_11);
 zfsvfs_t *VAR_16 = VAR_14->z_zfsvfs;
 zilog_t *VAR_17;
 dmu_tx_t *VAR_18;
 int VAR_19;

 FUNC_2(VAR_16);
 FUNC_4(VAR_14);
 FUNC_4(VAR_15);
 VAR_17 = VAR_16->z_log;


 if ((VAR_19 = FUNC_17(VAR_14, VAR_15, VAR_13))) {
  goto out;
 }

 if (VAR_11->v_type != VAR_5) {
  VAR_19 = FUNC_0(VAR_1);
  goto out;
 }

 FUNC_13(VAR_11, VAR_10, VAR_12, VAR_9);

 VAR_18 = FUNC_9(VAR_16->z_os);
 FUNC_11(VAR_18, VAR_14->z_id, VAR_2, VAR_12);
 FUNC_10(VAR_18, VAR_15->z_sa_hdl, VAR_0);
 FUNC_11(VAR_18, VAR_16->z_unlinkedobj, VAR_2, ((void*)0));
 FUNC_16(VAR_18, VAR_15);
 FUNC_16(VAR_18, VAR_14);
 FUNC_12(VAR_18);
 VAR_19 = FUNC_7(VAR_18, VAR_3);
 if (VAR_19) {
  FUNC_6(VAR_18);
  FUNC_3(VAR_16);
  return (VAR_19);
 }

 FUNC_5(VAR_10);

 VAR_19 = FUNC_14(VAR_14, VAR_12, VAR_15, VAR_18, VAR_6, ((void*)0));

 if (VAR_19 == 0) {
  uint64_t VAR_20 = VAR_4;
  FUNC_15(VAR_17, VAR_18, VAR_20, VAR_14, VAR_12, VAR_7);
 }

 FUNC_8(VAR_18);

 FUNC_5(VAR_11);
out:
 if (VAR_16->z_os->os_sync == VAR_8)
  FUNC_18(VAR_17, 0);

 FUNC_3(VAR_16);
 return (VAR_19);
}
