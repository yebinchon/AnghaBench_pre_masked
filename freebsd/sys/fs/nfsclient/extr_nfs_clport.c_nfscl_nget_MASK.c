
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ bo_bsize; int * bo_ops; } ;
struct vnode {int v_iflag; scalar_t__ v_type; int v_vnlock; int v_vflag; struct nfsnode* v_data; TYPE_1__ v_bufobj; } ;
struct thread {int dummy; } ;
struct nfsv4node {scalar_t__ nfh_len; scalar_t__ n4_namelen; scalar_t__ n4_fhlen; int n4_data; int nfh_fh; } ;
struct nfsnode {struct nfsv4node* n_v4; int n_excl; int n_mtx; struct nfsv4node* n_fhp; struct vnode* n_vnode; } ;
struct nfsmount {int nm_flag; scalar_t__ nm_fhsize; int nm_fh; } ;
struct nfsfh {scalar_t__ nfh_len; scalar_t__ n4_namelen; scalar_t__ n4_fhlen; int n4_data; int nfh_fh; } ;
struct mount {int dummy; } ;
struct componentname {scalar_t__ cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct nfsv4node*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct nfsnode*) ;
 int VAR_12 ;
 int FUNC_5 (struct nfsnode*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 struct nfsmount* FUNC_6 (struct mount*) ;
 int VAR_15 ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 scalar_t__ VAR_18 ;
 struct nfsnode* FUNC_11 (struct vnode*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (int ,int ,scalar_t__) ;
 int VAR_21 ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (struct nfsv4node*,int ) ;
 int FUNC_15 (int ,struct mount*,int *,struct vnode**) ;
 int FUNC_16 (struct vnode*,struct mount*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,char*,int ,int) ;
 int FUNC_19 (int ,int,int *) ;
 void* FUNC_20 (int,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char*,int *,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct nfsnode* FUNC_23 (int ,int) ;
 int FUNC_24 (int ,struct nfsnode*) ;
 int FUNC_25 (struct mount*,int ,int,struct thread*,struct vnode**,int ,struct nfsv4node*) ;
 int FUNC_26 (struct vnode*,int ,int,struct thread*,struct vnode**,int ,struct nfsv4node*) ;
 int FUNC_27 (struct vnode*) ;

int
FUNC_28(struct mount *VAR_26, struct vnode *VAR_27, struct nfsfh *VAR_28,
    struct componentname *VAR_29, struct thread *VAR_30, struct nfsnode **VAR_31,
    void *VAR_32, int VAR_33)
{
 struct nfsnode *VAR_34, *VAR_35;
 struct vnode *VAR_36, *VAR_37;
 struct nfsv4node *VAR_38, *VAR_39;
 int VAR_40;
 u_int VAR_41;
 struct nfsmount *VAR_42;

 VAR_42 = FUNC_6(VAR_26);
 VAR_35 = FUNC_11(VAR_27);
 *VAR_31 = ((void*)0);

 VAR_41 = FUNC_13(VAR_28->nfh_fh, VAR_28->nfh_len, VAR_1);

 VAR_40 = FUNC_25(VAR_26, VAR_41, VAR_33,
     VAR_30, &VAR_37, VAR_22, VAR_28);
 if (VAR_40 == 0 && VAR_37 != ((void*)0)) {
  FUNC_7(VAR_37);
  if ((VAR_37->v_iflag & VAR_15)) {
   FUNC_8(VAR_37);
   FUNC_27(VAR_37);
   VAR_40 = VAR_0;
  } else {
   FUNC_8(VAR_37);
  }
 }
 if (VAR_40) {
  FUNC_14(VAR_28, VAR_8);
  return (VAR_40);
 }
 if (VAR_37 != ((void*)0)) {
  VAR_34 = FUNC_11(VAR_37);




  VAR_39 = VAR_38 = ((void*)0);
  if ((VAR_42->nm_flag & VAR_12) && VAR_34->n_v4 != ((void*)0) &&
      VAR_37->v_type == VAR_18 &&
      (VAR_34->n_v4->n4_namelen != VAR_29->cn_namelen ||
       FUNC_2(VAR_29->cn_nameptr, FUNC_1(VAR_34->n_v4),
       VAR_29->cn_namelen) ||
       VAR_35->n_fhp->nfh_len != VAR_34->n_v4->n4_fhlen ||
       FUNC_2(VAR_35->n_fhp->nfh_fh, VAR_34->n_v4->n4_data,
       VAR_35->n_fhp->nfh_len))) {
      VAR_38 = FUNC_20(
   sizeof (struct nfsv4node) + VAR_35->n_fhp->nfh_len +
   + VAR_29->cn_namelen - 1, VAR_9, VAR_10);
      FUNC_4(VAR_34);
      if (VAR_38 != ((void*)0) && VAR_34->n_v4 != ((void*)0) && VAR_37->v_type == VAR_18
   && (VAR_34->n_v4->n4_namelen != VAR_29->cn_namelen ||
    FUNC_2(VAR_29->cn_nameptr, FUNC_1(VAR_34->n_v4),
    VAR_29->cn_namelen) ||
    VAR_35->n_fhp->nfh_len != VAR_34->n_v4->n4_fhlen ||
    FUNC_2(VAR_35->n_fhp->nfh_fh, VAR_34->n_v4->n4_data,
    VAR_35->n_fhp->nfh_len))) {
   VAR_39 = VAR_34->n_v4;
   VAR_34->n_v4 = VAR_38;
   VAR_38 = ((void*)0);
   VAR_34->n_v4->n4_fhlen = VAR_35->n_fhp->nfh_len;
   VAR_34->n_v4->n4_namelen = VAR_29->cn_namelen;
   FUNC_3(VAR_35->n_fhp->nfh_fh, VAR_34->n_v4->n4_data,
       VAR_35->n_fhp->nfh_len);
   FUNC_3(VAR_29->cn_nameptr, FUNC_1(VAR_34->n_v4),
       VAR_29->cn_namelen);
      }
      FUNC_5(VAR_34);
  }
  if (VAR_38 != ((void*)0))
   FUNC_14(VAR_38, VAR_9);
  if (VAR_39 != ((void*)0))
   FUNC_14(VAR_39, VAR_9);
  *VAR_31 = VAR_34;
  FUNC_14(VAR_28, VAR_8);
  return (0);
 }
 VAR_34 = FUNC_23(VAR_24, VAR_10 | VAR_11);

 VAR_40 = FUNC_15(VAR_25, VAR_26, &VAR_23, &VAR_37);
 if (VAR_40) {
  FUNC_24(VAR_24, VAR_34);
  FUNC_14(VAR_28, VAR_8);
  return (VAR_40);
 }
 VAR_36 = VAR_37;
 FUNC_0(VAR_36->v_bufobj.bo_bsize != 0, ("nfscl_nget: bo_bsize == 0"));
 VAR_36->v_bufobj.bo_ops = &VAR_21;
 VAR_36->v_data = VAR_34;
 VAR_34->n_vnode = VAR_36;






 FUNC_22(&VAR_34->n_mtx, "NEWNFSnode lock", ((void*)0), VAR_6 | VAR_7);
 FUNC_18(&VAR_34->n_excl, VAR_13, "nfsupg", VAR_16, VAR_4 |
     VAR_2);





 if ((VAR_28->nfh_len == VAR_42->nm_fhsize) &&
     !FUNC_12(VAR_28->nfh_fh, VAR_42->nm_fh, VAR_28->nfh_len)) {
  if (VAR_36->v_type == VAR_17)
   VAR_36->v_type = VAR_14;
  VAR_36->v_vflag |= VAR_19;
 }

 VAR_36->v_vflag |= VAR_20;

 VAR_34->n_fhp = VAR_28;




 if (VAR_42->nm_flag & VAR_12) {
  VAR_34->n_v4 = FUNC_20(sizeof (struct nfsv4node)
      + VAR_35->n_fhp->nfh_len + VAR_29->cn_namelen - 1, VAR_9,
      VAR_10);
  VAR_34->n_v4->n4_fhlen = VAR_35->n_fhp->nfh_len;
  VAR_34->n_v4->n4_namelen = VAR_29->cn_namelen;
  FUNC_3(VAR_35->n_fhp->nfh_fh, VAR_34->n_v4->n4_data,
      VAR_35->n_fhp->nfh_len);
  FUNC_3(VAR_29->cn_nameptr, FUNC_1(VAR_34->n_v4),
      VAR_29->cn_namelen);
 } else {
  VAR_34->n_v4 = ((void*)0);
 }




 FUNC_19(VAR_36->v_vnlock, VAR_3 | VAR_5, ((void*)0));
 FUNC_9(VAR_36);
 FUNC_10(VAR_36);
 VAR_40 = FUNC_16(VAR_36, VAR_26);
 if (VAR_40 != 0) {
  *VAR_31 = ((void*)0);
  FUNC_21(&VAR_34->n_mtx);
  FUNC_17(&VAR_34->n_excl);
  FUNC_14(VAR_28, VAR_8);
  if (VAR_34->n_v4 != ((void*)0))
   FUNC_14(VAR_34->n_v4, VAR_9);
  FUNC_24(VAR_24, VAR_34);
  return (VAR_40);
 }
 VAR_40 = FUNC_26(VAR_36, VAR_41, VAR_33,
     VAR_30, &VAR_37, VAR_22, VAR_28);
 if (VAR_40)
  return (VAR_40);
 if (VAR_37 != ((void*)0)) {
  *VAR_31 = FUNC_11(VAR_37);

  return (0);
 }
 *VAR_31 = VAR_34;

 return (0);
}
