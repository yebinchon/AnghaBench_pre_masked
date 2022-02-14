
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsrv_descript {int nd_repstat; int nd_mrep; } ;
struct nfsmount {int nm_sockreq; } ;
typedef int nfsattrbit_t ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct nfsrv_descript*,int ) ;
 int FUNC_5 (int ) ;
 struct nfsrv_descript* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct nfsrv_descript*,struct nfsmount*,int *,int *,int *,int *,struct ucred*,int ,int ,int *,int,int *,int *) ;
 int FUNC_8 (struct nfsrv_descript*,int ,struct nfsmount*,int *,int,int *,int *,int ,int ) ;
 int FUNC_9 (struct nfsrv_descript*,int *) ;
 int FUNC_10 (struct vnode*,struct nfsvattr*,int *) ;
 int FUNC_11 (struct nfsrv_descript*,int *,struct nfsvattr*,int *,int *,int ,int *,int *,int *,int *,int *,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_12(fhandle_t *VAR_11, struct ucred *VAR_12, NFSPROC_T *VAR_13,
    struct vnode *VAR_14, struct nfsmount *VAR_15, struct nfsvattr *VAR_16)
{
 struct nfsrv_descript *VAR_17;
 int VAR_18;
 nfsattrbit_t VAR_19;

 FUNC_0(4, "in nfsrv_getattrdsrpc\n");
 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_1, VAR_2 | VAR_3);
 FUNC_8(VAR_17, VAR_8, VAR_15, (u_int8_t *)VAR_11,
     sizeof(fhandle_t), ((void*)0), ((void*)0), 0, 0);
 FUNC_2(&VAR_19);
 FUNC_1(&VAR_19, VAR_5);
 FUNC_1(&VAR_19, VAR_4);
 FUNC_1(&VAR_19, VAR_6);
 FUNC_1(&VAR_19, VAR_7);
 (void) FUNC_9(VAR_17, &VAR_19);
 VAR_18 = FUNC_7(VAR_17, VAR_15, ((void*)0), &VAR_15->nm_sockreq, ((void*)0), VAR_13, VAR_12,
     VAR_9, VAR_10, ((void*)0), 1, ((void*)0), ((void*)0));
 if (VAR_18 != 0) {
  FUNC_4(VAR_17, VAR_1);
  return (VAR_18);
 }
 FUNC_0(4, "nfsrv_getattrdsrpc: aft getattrrpc=%d\n",
     VAR_17->nd_repstat);
 if (VAR_17->nd_repstat == 0) {
  VAR_18 = FUNC_11(VAR_17, ((void*)0), VAR_16, ((void*)0), ((void*)0), 0,
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0),
      ((void*)0), ((void*)0));
  if (VAR_18 == 0 && FUNC_3(VAR_14) == VAR_0) {
   VAR_18 = FUNC_10(VAR_14, VAR_16, VAR_13);
   FUNC_0(4, "nfsrv_getattrdsrpc: aft setextat=%d\n",
       VAR_18);
  }
 } else
  VAR_18 = VAR_17->nd_repstat;
 FUNC_5(VAR_17->nd_mrep);
 FUNC_4(VAR_17, VAR_1);
 FUNC_0(4, "nfsrv_getattrdsrpc error=%d\n", VAR_18);
 return (VAR_18);
}
