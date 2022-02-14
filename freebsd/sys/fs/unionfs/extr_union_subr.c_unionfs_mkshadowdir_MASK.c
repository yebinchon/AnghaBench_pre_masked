
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int dummy; } ;
struct vattr {int va_type; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct unionfs_mount {int dummy; } ;
struct uidinfo {int dummy; } ;
struct ucred {int cr_ruidinfo; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct componentname {int cn_flags; struct ucred* cn_cred; int cn_pnbuf; int cn_namelen; int cn_nameptr; } ;
typedef int cn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_1 (struct vnode*,struct vnode**,struct componentname*,struct vattr*) ;
 int FUNC_2 (struct vnode*,struct vattr*,struct ucred*) ;
 int VAR_6 ;
 int FUNC_3 (struct ucred*,struct uidinfo*) ;
 int FUNC_4 (struct ucred*,struct uidinfo*) ;
 int FUNC_5 (struct ucred*,int ) ;
 int FUNC_6 (int ,int,int ) ;
 struct ucred* FUNC_7 (struct ucred*) ;
 int FUNC_8 (struct ucred*) ;
 int FUNC_9 (struct componentname*,int ,int) ;
 int VAR_7 ;
 struct uidinfo* FUNC_10 (int ) ;
 int FUNC_11 (struct uidinfo*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct unionfs_mount*,struct vattr*,struct vattr*,struct thread*) ;
 int FUNC_14 (struct unionfs_node*,struct vnode*,struct thread*) ;
 int FUNC_15 (struct vnode*,struct vnode**,struct componentname*,struct componentname*,struct thread*,int ,int ,int ) ;
 int FUNC_16 (struct mount*) ;
 int FUNC_17 (struct vnode*,struct mount**,int) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*) ;

int
FUNC_20(struct unionfs_mount *VAR_8, struct vnode *VAR_9,
      struct unionfs_node *VAR_10, struct componentname *VAR_11,
      struct thread *VAR_12)
{
 int VAR_13;
 struct vnode *VAR_14;
 struct vnode *VAR_15;
 struct vattr VAR_16;
 struct vattr VAR_17;
 struct componentname VAR_18;
 struct mount *VAR_19;
 struct ucred *VAR_20;
 struct ucred *VAR_21;
 struct uidinfo *VAR_22;

 if (VAR_10->un_uppervp != VAR_3)
  return (VAR_1);

 VAR_14 = VAR_10->un_lowervp;
 VAR_15 = VAR_3;
 VAR_21 = VAR_11->cn_cred;


 VAR_22 = FUNC_10((uid_t)0);
 VAR_20 = FUNC_7(VAR_11->cn_cred);




 FUNC_6(VAR_20->cr_ruidinfo, 1, 0);
 FUNC_3(VAR_20, VAR_22);
 FUNC_4(VAR_20, VAR_22);
 FUNC_5(VAR_20, (uid_t)0);
 FUNC_11(VAR_22);
 VAR_11->cn_cred = VAR_20;

 FUNC_9(&VAR_18, 0, sizeof(VAR_18));

 if ((VAR_13 = FUNC_0(VAR_14, &VAR_17, VAR_11->cn_cred)))
  goto unionfs_mkshadowdir_abort;

 if ((VAR_13 = FUNC_15(VAR_9, &VAR_15, VAR_11, &VAR_18, VAR_12, VAR_11->cn_nameptr, VAR_11->cn_namelen, VAR_0)))
  goto unionfs_mkshadowdir_abort;
 if (VAR_15 != VAR_3) {
  if (VAR_9 == VAR_15)
   FUNC_19(VAR_15);
  else
   FUNC_18(VAR_15);

  VAR_13 = VAR_1;
  goto unionfs_mkshadowdir_free_out;
 }

 if ((VAR_13 = FUNC_17(VAR_9, &VAR_19, VAR_6 | VAR_4)))
  goto unionfs_mkshadowdir_free_out;
 FUNC_13(VAR_8, &VAR_17, &VAR_16, VAR_12);

 VAR_13 = FUNC_1(VAR_9, &VAR_15, &VAR_18, &VAR_16);

 if (!VAR_13) {
  FUNC_14(VAR_10, VAR_15, VAR_12);





  VAR_16.va_type = VAR_5;
  FUNC_2(VAR_15, &VAR_16, VAR_18.cn_cred);
 }
 FUNC_16(VAR_19);

unionfs_mkshadowdir_free_out:
 if (VAR_18.cn_flags & VAR_2) {
  FUNC_12(VAR_7, VAR_18.cn_pnbuf);
  VAR_18.cn_flags &= ~VAR_2;
 }

unionfs_mkshadowdir_abort:
 VAR_11->cn_cred = VAR_21;
 FUNC_6(VAR_20->cr_ruidinfo, -1, 0);
 FUNC_8(VAR_20);

 return (VAR_13);
}
