
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uint64_t ;
struct ucred {int dummy; } ;
struct nfsrv_descript {int nd_repstat; int nd_mrep; } ;
struct nfsmount {int dummy; } ;
struct acl {int dummy; } ;
typedef int nfsv4stateid_t ;
typedef int nfsattrbit_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsrv_descript*,int ,int ) ;
 int FUNC_1 (struct nfsmount*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 struct nfsmount* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nfsrv_descript*,int ,int *,struct ucred*,void*) ;
 int FUNC_7 (struct nfsrv_descript*,int *,int ) ;
 int FUNC_8 (struct nfsrv_descript*,int ,int ,struct acl*,int *,int *,int ,int *,int *,int *,int ,int ,int ,int ,int ,int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(vnode_t VAR_4, struct ucred *VAR_5, NFSPROC_T *VAR_6,
    struct acl *VAR_7, nfsv4stateid_t *VAR_8, void *VAR_9)
{
 struct nfsrv_descript VAR_10, *VAR_11 = &VAR_10;
 int VAR_12;
 nfsattrbit_t VAR_13;
 struct nfsmount *VAR_14 = FUNC_4(FUNC_9(VAR_4));

 if (!FUNC_1(VAR_14))
  return (VAR_0);
 FUNC_0(VAR_11, VAR_2, VAR_4);
 FUNC_7(VAR_11, VAR_8, VAR_3);
 FUNC_3(&VAR_13);
 FUNC_2(&VAR_13, VAR_1);
 (void) FUNC_8(VAR_11, FUNC_9(VAR_4), VAR_4, VAR_7, ((void*)0), ((void*)0), 0,
     &VAR_13, ((void*)0), ((void*)0), 0, 0, 0, 0, (uint64_t)0, ((void*)0));
 VAR_12 = FUNC_6(VAR_11, VAR_4, VAR_6, VAR_5, VAR_9);
 if (VAR_12)
  return (VAR_12);

 FUNC_5(VAR_11->nd_mrep);
 return (VAR_11->nd_repstat);
}
