
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct nfsrvsetacldsdorpc {scalar_t__ done; scalar_t__ inprog; int err; int tsk; struct acl* aclp; int * p; struct ucred* cred; struct vnode* vp; struct nfsmount* nmp; int fh; } ;
struct nfsmount {int dummy; } ;
struct acl {int dummy; } ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (struct nfsrvsetacldsdorpc*,int ) ;
 int VAR_4 ;
 struct nfsrvsetacldsdorpc* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,struct nfsrvsetacldsdorpc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,struct ucred*,int *,struct vnode*,struct nfsmount*,struct acl*) ;
 int VAR_6 ;
 int FUNC_7 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(fhandle_t *VAR_7, struct ucred *VAR_8, NFSPROC_T *VAR_9,
    struct vnode *VAR_10, struct nfsmount **VAR_11, int VAR_12, struct acl *VAR_13,
    int *VAR_14)
{
 struct nfsrvsetacldsdorpc *VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_1(4, "in nfsrv_setacldsrpc\n");
 VAR_15 = ((void*)0);
 if (VAR_12 > 1)
  VAR_16 = VAR_15 = FUNC_3(sizeof(*VAR_15) * (VAR_12 - 1), VAR_1,
      VAR_2);





 VAR_17 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_12 - 1; VAR_18++, VAR_16++) {
  VAR_16->done = 0;
  VAR_16->inprog = 0;
  FUNC_0(VAR_7, &VAR_16->fh, sizeof(*VAR_7));
  VAR_16->nmp = *VAR_11;
  VAR_16->vp = VAR_10;
  VAR_16->cred = VAR_8;
  VAR_16->p = VAR_9;
  VAR_16->aclp = VAR_13;
  VAR_16->err = 0;
  VAR_19 = VAR_0;
  if (VAR_5 != 0) {
   VAR_19 = FUNC_4(VAR_6, VAR_16);
   FUNC_1(4, "nfsrv_setacldsrpc: nfs_pnfsio=%d\n",
       VAR_19);
  }
  if (VAR_19 != 0) {
   VAR_19 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, *VAR_11,
       VAR_13);
   if (FUNC_5(VAR_19) && *VAR_14 == -1)
    *VAR_14 = VAR_18;
   else if (VAR_17 == 0 && VAR_19 != 0)
    VAR_17 = VAR_19;
  }
  VAR_11++;
  VAR_7++;
 }
 VAR_19 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, *VAR_11, VAR_13);
 if (FUNC_5(VAR_19) && *VAR_14 == -1 && VAR_12 > 1)
  *VAR_14 = VAR_12 - 1;
 else if (VAR_17 == 0 && VAR_19 != 0)
  VAR_17 = VAR_19;
 FUNC_1(4, "nfsrv_setacldsrpc: aft setextat=%d\n", VAR_17);
 VAR_16 = VAR_15;
 VAR_20 = VAR_4 / 50;
 if (VAR_20 < 1)
  VAR_20 = 1;
 for (VAR_18 = 0; VAR_18 < VAR_12 - 1; VAR_18++, VAR_16++) {

  while (VAR_16->inprog != 0 && VAR_16->done == 0)
   FUNC_7(&VAR_16->tsk, VAR_3, "srvacds", VAR_20);
  if (FUNC_5(VAR_16->err) && *VAR_14 == -1)
   *VAR_14 = VAR_18;
  else if (VAR_17 == 0 && VAR_16->err != 0)
   VAR_17 = VAR_16->err;
 }
 FUNC_2(VAR_15, VAR_1);
 return (VAR_17);
}
