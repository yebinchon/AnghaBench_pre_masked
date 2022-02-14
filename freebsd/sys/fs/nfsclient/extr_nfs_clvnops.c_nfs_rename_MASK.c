
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_rename_args {struct vnode* a_tdvp; struct vnode* a_fvp; struct componentname* a_fcnp; struct componentname* a_tcnp; struct vnode* a_fdvp; struct vnode* a_tvp; } ;
struct vnode {scalar_t__ v_mount; scalar_t__ v_type; } ;
struct nfsv4node {int n4_namelen; scalar_t__ n4_fhlen; int n4_data; } ;
struct nfsnode {struct nfsv4node* n_v4; TYPE_1__* n_fhp; int n_sillyrename; } ;
struct componentname {int cn_flags; int cn_namelen; int cn_nameptr; int cn_thread; int cn_cred; } ;
struct TYPE_2__ {int nfh_len; int nfh_fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct nfsv4node*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct nfsnode*) ;
 int FUNC_5 (struct nfsnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 int FUNC_7 (struct vnode*,int ) ;
 scalar_t__ FUNC_8 (struct vnode*) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (struct vnode*,int ,int ) ;
 scalar_t__ VAR_8 ;
 struct nfsnode* FUNC_10 (struct vnode*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct nfsv4node*,int ) ;
 struct nfsv4node* FUNC_14 (int,int ,int ) ;
 int FUNC_15 (struct vnode*,struct vnode*,int ,int,struct vnode*,struct vnode*,int ,int,int ,int ) ;
 int FUNC_16 (struct vnode*,struct vnode*,struct componentname*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;
 int FUNC_20 (struct vnode*) ;

__attribute__((used)) static int
FUNC_21(struct vop_rename_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_fvp;
 struct vnode *VAR_11 = VAR_9->a_tvp;
 struct vnode *VAR_12 = VAR_9->a_fdvp;
 struct vnode *VAR_13 = VAR_9->a_tdvp;
 struct componentname *VAR_14 = VAR_9->a_tcnp;
 struct componentname *VAR_15 = VAR_9->a_fcnp;
 struct nfsnode *VAR_16 = FUNC_10(VAR_9->a_fvp);
 struct nfsnode *VAR_17 = FUNC_10(VAR_9->a_tdvp);
 struct nfsv4node *VAR_18 = ((void*)0);
 int VAR_19;

 FUNC_0((VAR_14->cn_flags & VAR_2) != 0 &&
     (VAR_15->cn_flags & VAR_2) != 0, ("nfs_rename: no name"));

 if ((VAR_10->v_mount != VAR_13->v_mount) ||
     (VAR_11 && (VAR_10->v_mount != VAR_11->v_mount))) {
  VAR_19 = VAR_1;
  goto out;
 }

 if (VAR_10 == VAR_11) {
  FUNC_17("nfs_rename: fvp == tvp (can't happen)\n");
  VAR_19 = 0;
  goto out;
 }
 if ((VAR_19 = FUNC_6(VAR_10, VAR_3)) != 0)
  goto out;
 VAR_19 = FUNC_9(VAR_10, VAR_4, VAR_15->cn_thread);
 FUNC_7(VAR_10, 0);
 if (!VAR_19 && VAR_11)
  VAR_19 = FUNC_9(VAR_11, VAR_4, VAR_14->cn_thread);
 if (VAR_19)
  goto out;






 if (VAR_11 && FUNC_19(VAR_11) > 1 && !FUNC_10(VAR_11)->n_sillyrename &&
  VAR_11->v_type != VAR_7 && !FUNC_16(VAR_13, VAR_11, VAR_14)) {
  FUNC_18(VAR_11);
  VAR_11 = ((void*)0);
 }

 VAR_19 = FUNC_15(VAR_12, VAR_10, VAR_15->cn_nameptr, VAR_15->cn_namelen,
     VAR_13, VAR_11, VAR_14->cn_nameptr, VAR_14->cn_namelen, VAR_14->cn_cred,
     VAR_14->cn_thread);

 if (VAR_19 == 0 && FUNC_8(VAR_13)) {




  VAR_18 = FUNC_14(
      sizeof (struct nfsv4node) +
      VAR_17->n_fhp->nfh_len + VAR_14->cn_namelen - 1,
      VAR_5, VAR_6);
  FUNC_4(VAR_17);
  FUNC_4(VAR_16);
  if (VAR_16->n_v4 != ((void*)0) && VAR_10->v_type == VAR_8 &&
      (VAR_16->n_v4->n4_namelen != VAR_14->cn_namelen ||
        FUNC_2(VAR_14->cn_nameptr, FUNC_1(VAR_16->n_v4),
        VAR_14->cn_namelen) ||
        VAR_17->n_fhp->nfh_len != VAR_16->n_v4->n4_fhlen ||
        FUNC_2(VAR_17->n_fhp->nfh_fh, VAR_16->n_v4->n4_data,
   VAR_17->n_fhp->nfh_len))) {
   FUNC_13(VAR_16->n_v4, VAR_5);
   VAR_16->n_v4 = VAR_18;
   VAR_18 = ((void*)0);
   VAR_16->n_v4->n4_fhlen = VAR_17->n_fhp->nfh_len;
   VAR_16->n_v4->n4_namelen = VAR_14->cn_namelen;
   FUNC_3(VAR_17->n_fhp->nfh_fh, VAR_16->n_v4->n4_data,
       VAR_17->n_fhp->nfh_len);
   FUNC_3(VAR_14->cn_nameptr,
       FUNC_1(VAR_16->n_v4), VAR_14->cn_namelen);
  }
  FUNC_5(VAR_17);
  FUNC_5(VAR_16);
  if (VAR_18 != ((void*)0))
   FUNC_13(VAR_18, VAR_5);
 }

 if (VAR_10->v_type == VAR_7) {
  if (VAR_11 != ((void*)0) && VAR_11->v_type == VAR_7)
   FUNC_12(VAR_13);
  FUNC_12(VAR_12);
 }

out:
 if (VAR_13 == VAR_11)
  FUNC_20(VAR_13);
 else
  FUNC_18(VAR_13);
 if (VAR_11)
  FUNC_18(VAR_11);
 FUNC_20(VAR_12);
 FUNC_20(VAR_10);



 if (VAR_19 == VAR_0)
  VAR_19 = 0;
 return (VAR_19);
}
