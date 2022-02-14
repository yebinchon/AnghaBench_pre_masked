
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct nfsrv_descript {int nd_repstat; int nd_mrep; } ;
struct nfsmount {int nm_sockreq; } ;
struct acl {int dummy; } ;
struct TYPE_3__ {int* other; int seqid; } ;
typedef TYPE_1__ nfsv4stateid_t ;
typedef int nfsattrbit_t ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct nfsrv_descript*,int ) ;
 int FUNC_4 (int ) ;
 struct nfsrv_descript* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct nfsrv_descript*,struct nfsmount*,int *,int *,int *,int *,struct ucred*,int ,int ,int *,int,int *,int *) ;
 int FUNC_7 (struct nfsrv_descript*,int ,struct nfsmount*,int *,int,int *,int *,int ,int ) ;
 int FUNC_8 (struct nfsrv_descript*,TYPE_1__*,int ) ;
 int FUNC_9 (struct nfsrv_descript*,int *,struct vnode*,struct acl*,int *,int *,int ,int *,int *,int *,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_10(fhandle_t *VAR_8, struct ucred *VAR_9, NFSPROC_T *VAR_10,
    struct vnode *VAR_11, struct nfsmount *VAR_12, struct acl *VAR_13)
{
 struct nfsrv_descript *VAR_14;
 nfsv4stateid_t VAR_15;
 nfsattrbit_t VAR_16;
 int VAR_17;

 FUNC_0(4, "in nfsrv_setacldsdorpc\n");
 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_0, VAR_1 | VAR_2);






 VAR_15.other[0] = 0x55555555;
 VAR_15.other[1] = 0x55555555;
 VAR_15.other[2] = 0x55555555;
 VAR_15.seqid = 0xffffffff;
 FUNC_7(VAR_14, VAR_4, VAR_12, (u_int8_t *)VAR_8, sizeof(*VAR_8),
     ((void*)0), ((void*)0), 0, 0);
 FUNC_8(VAR_14, &VAR_15, VAR_5);
 FUNC_2(&VAR_16);
 FUNC_1(&VAR_16, VAR_3);





 FUNC_9(VAR_14, ((void*)0), VAR_11, VAR_13, ((void*)0), ((void*)0), 0, &VAR_16, ((void*)0),
     ((void*)0), 0, 0, 0, 0, 0, ((void*)0));
 VAR_17 = FUNC_6(VAR_14, VAR_12, ((void*)0), &VAR_12->nm_sockreq, ((void*)0), VAR_10, VAR_9,
     VAR_6, VAR_7, ((void*)0), 1, ((void*)0), ((void*)0));
 if (VAR_17 != 0) {
  FUNC_3(VAR_14, VAR_0);
  return (VAR_17);
 }
 FUNC_0(4, "nfsrv_setacldsdorpc: aft setaclrpc=%d\n",
     VAR_14->nd_repstat);
 VAR_17 = VAR_14->nd_repstat;
 FUNC_4(VAR_14->nd_mrep);
 FUNC_3(VAR_14, VAR_0);
 return (VAR_17);
}
