
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int ;
struct TYPE_2__ {scalar_t__ bo_bsize; int * bo_ops; } ;
struct vnode {scalar_t__ v_type; int v_vflag; int v_vnlock; struct nfsnode* v_data; TYPE_1__ v_bufobj; } ;
struct thread {int dummy; } ;
struct nfsnode {struct nfsfh* n_fhp; int n_excl; int n_mtx; struct vnode* n_vnode; } ;
struct nfsmount {int nm_fhsize; int nm_fh; } ;
struct nfsfh {int nfh_len; int * nfh_fh; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct nfsmount* FUNC_1 (struct mount*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 struct nfsnode* FUNC_4 (struct vnode*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_16 ;
 struct thread* VAR_17 ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct nfsfh*,int ) ;
 int FUNC_9 (int ,struct mount*,int *,struct vnode**) ;
 int FUNC_10 (struct vnode*,struct mount*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,char*,int ,int) ;
 int FUNC_13 (int ,int,int *) ;
 void* FUNC_14 (int,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct nfsnode* FUNC_17 (int ,int) ;
 int FUNC_18 (int ,struct nfsnode*) ;
 int FUNC_19 (struct mount*,int ,int,struct thread*,struct vnode**,int ,struct nfsfh*) ;
 int FUNC_20 (struct vnode*,int ,int,struct thread*,struct vnode**,int ,struct nfsfh*) ;

int
FUNC_21(struct mount *VAR_22, u_int8_t *VAR_23, int VAR_24, struct nfsnode **VAR_25,
    int VAR_26)
{
 struct thread *VAR_27 = VAR_17;
 struct nfsnode *VAR_28;
 struct vnode *VAR_29;
 struct vnode *VAR_30;
 int VAR_31;
 u_int VAR_32;
 struct nfsmount *VAR_33;
 struct nfsfh *VAR_34;

 VAR_33 = FUNC_1(VAR_22);
 *VAR_25 = ((void*)0);

 VAR_32 = FUNC_7(VAR_23, VAR_24, VAR_0);

 VAR_34 = FUNC_14(sizeof (struct nfsfh) + VAR_24,
     VAR_7, VAR_8);
 FUNC_6(VAR_23, &VAR_34->nfh_fh[0], VAR_24);
 VAR_34->nfh_len = VAR_24;
 VAR_31 = FUNC_19(VAR_22, VAR_32, VAR_26,
     VAR_27, &VAR_30, VAR_18, VAR_34);
 FUNC_8(VAR_34, VAR_7);
 if (VAR_31)
  return (VAR_31);
 if (VAR_30 != ((void*)0)) {
  *VAR_25 = FUNC_4(VAR_30);
  return (0);
 }
 VAR_28 = FUNC_17(VAR_20, VAR_8 | VAR_9);

 VAR_31 = FUNC_9(VAR_21, VAR_22, &VAR_19, &VAR_30);
 if (VAR_31) {
  FUNC_18(VAR_20, VAR_28);
  return (VAR_31);
 }
 VAR_29 = VAR_30;
 FUNC_0(VAR_29->v_bufobj.bo_bsize != 0, ("ncl_nget: bo_bsize == 0"));
 VAR_29->v_bufobj.bo_ops = &VAR_16;
 VAR_29->v_data = VAR_28;
 VAR_28->n_vnode = VAR_29;






 FUNC_16(&VAR_28->n_mtx, "NEWNFSnode lock", ((void*)0), VAR_5 | VAR_6);
 FUNC_12(&VAR_28->n_excl, VAR_10, "nfsupg", VAR_12, VAR_3 |
     VAR_1);




 FUNC_13(VAR_29->v_vnlock, VAR_2 | VAR_4, ((void*)0));
 FUNC_2(VAR_29);
 FUNC_3(VAR_29);




 if ((VAR_24 == VAR_33->nm_fhsize) &&
     !FUNC_5(VAR_23, VAR_33->nm_fh, VAR_24)) {
  if (VAR_29->v_type == VAR_13)
   VAR_29->v_type = VAR_11;
  VAR_29->v_vflag |= VAR_14;
 }

 VAR_29->v_vflag |= VAR_15;

 VAR_28->n_fhp = FUNC_14(sizeof (struct nfsfh) + VAR_24,
     VAR_7, VAR_8);
 FUNC_6(VAR_23, VAR_28->n_fhp->nfh_fh, VAR_24);
 VAR_28->n_fhp->nfh_len = VAR_24;
 VAR_31 = FUNC_10(VAR_29, VAR_22);
 if (VAR_31 != 0) {
  *VAR_25 = ((void*)0);
  FUNC_8(VAR_28->n_fhp, VAR_7);
  FUNC_15(&VAR_28->n_mtx);
  FUNC_11(&VAR_28->n_excl);
  FUNC_18(VAR_20, VAR_28);
  return (VAR_31);
 }
 VAR_31 = FUNC_20(VAR_29, VAR_32, VAR_26,
     VAR_27, &VAR_30, VAR_18, VAR_28->n_fhp);
 if (VAR_31)
  return (VAR_31);
 if (VAR_30 != ((void*)0)) {
  *VAR_25 = FUNC_4(VAR_30);

  return (0);
 }
 *VAR_25 = VAR_28;

 return (0);
}
