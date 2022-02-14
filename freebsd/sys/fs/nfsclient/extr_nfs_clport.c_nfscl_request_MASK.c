
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_mount; } ;
struct ucred {int dummy; } ;
struct nfsrv_descript {int nd_flag; } ;
struct nfsmount {int nm_sockreq; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfsmount* FUNC_0 (int ) ;
 int FUNC_1 (struct nfsrv_descript*,struct nfsmount*,int *,int *,struct vnode*,int *,struct ucred*,int ,int,int *,int,int *,int *) ;

int
FUNC_2(struct nfsrv_descript *VAR_6, struct vnode *VAR_7, NFSPROC_T *VAR_8,
    struct ucred *VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12;
 struct nfsmount *VAR_13;

 VAR_13 = FUNC_0(VAR_7->v_mount);
 if (VAR_6->nd_flag & VAR_1)
  VAR_12 = VAR_5;
 else if (VAR_6->nd_flag & VAR_0)
  VAR_12 = VAR_4;
 else
  VAR_12 = VAR_3;
 VAR_11 = FUNC_1(VAR_6, VAR_13, ((void*)0), &VAR_13->nm_sockreq, VAR_7, VAR_8, VAR_9,
  VAR_2, VAR_12, ((void*)0), 1, ((void*)0), ((void*)0));
 return (VAR_11);
}
