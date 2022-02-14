
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_mkdir_args {struct vnode** a_vpp; struct componentname* a_cnp; struct vattr* a_vap; struct vnode* a_dvp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct vattr {int va_gid; int va_uid; scalar_t__ va_type; } ;
struct nfsvattr {int na_ctime; } ;
struct nfsnode {scalar_t__ n_attrstamp; int n_flag; } ;
struct nfsfh {int dummy; } ;
struct componentname {int cn_flags; int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;
struct TYPE_2__ {scalar_t__ nm_negnametimeo; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nfsnode*) ;
 struct vnode* FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct vnode*,struct vattr*,int ) ;
 struct nfsnode* FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,struct vnode*,struct componentname*,int *,int *) ;
 int FUNC_9 (struct vnode*,int ,int ,int ,int ,struct nfsnode**) ;
 int FUNC_10 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_11 (int ,int,int ,int ) ;
 int FUNC_12 (int ,struct vnode*,struct nfsfh*,struct componentname*,int ,struct nfsnode**,int *,int ) ;
 int FUNC_13 (struct vnode*,int ,int ,struct vattr*,int ,int ,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static int
FUNC_15(struct vop_mkdir_args *VAR_5)
{
 struct vnode *VAR_6 = VAR_5->a_dvp;
 struct vattr *VAR_7 = VAR_5->a_vap;
 struct componentname *VAR_8 = VAR_5->a_cnp;
 struct nfsnode *VAR_9 = ((void*)0), *VAR_10;
 struct vnode *VAR_11 = ((void*)0);
 struct vattr VAR_12;
 struct nfsfh *VAR_13;
 struct nfsvattr VAR_14, VAR_15;
 int VAR_16 = 0, VAR_17, VAR_18, VAR_19;

 if ((VAR_16 = FUNC_6(VAR_6, &VAR_12, VAR_8->cn_cred)) != 0)
  return (VAR_16);
 VAR_7->va_type = VAR_4;
 VAR_16 = FUNC_13(VAR_6, VAR_8->cn_nameptr, VAR_8->cn_namelen,
     VAR_7, VAR_8->cn_cred, VAR_8->cn_thread, &VAR_15, &VAR_14, &VAR_13,
     &VAR_17, &VAR_18, ((void*)0));
 VAR_10 = FUNC_7(VAR_6);
 FUNC_1(VAR_10);
 VAR_10->n_flag |= VAR_3;
 if (VAR_18 != 0) {
  FUNC_3(VAR_10);
  (void) FUNC_10(&VAR_6, &VAR_15, ((void*)0), ((void*)0), 0, 1);
 } else {
  VAR_10->n_attrstamp = 0;
  FUNC_3(VAR_10);
  FUNC_0(VAR_6);
 }
 if (VAR_13) {
  VAR_19 = FUNC_12(VAR_6->v_mount, VAR_6, VAR_13, VAR_8, VAR_8->cn_thread,
      &VAR_9, ((void*)0), VAR_1);
  if (!VAR_19) {
   VAR_11 = FUNC_2(VAR_9);
   if (VAR_17)
      (void) FUNC_10(&VAR_11, &VAR_14, ((void*)0),
    ((void*)0), 0, 1);
  } else if (!VAR_16)
   VAR_16 = VAR_19;
 }
 if (!VAR_16 && VAR_11 == ((void*)0)) {
  VAR_16 = FUNC_9(VAR_6, VAR_8->cn_nameptr, VAR_8->cn_namelen,
      VAR_8->cn_cred, VAR_8->cn_thread, &VAR_9);
  if (!VAR_16) {
   VAR_11 = FUNC_2(VAR_9);
   if (VAR_11->v_type != VAR_4)
    VAR_16 = VAR_0;
  }
 }
 if (VAR_16) {
  if (VAR_11)
   FUNC_14(VAR_11);
  if (FUNC_4(VAR_6))
   VAR_16 = FUNC_11(VAR_8->cn_thread, VAR_16,
       VAR_7->va_uid, VAR_7->va_gid);
 } else {






  if (FUNC_5(VAR_6->v_mount)->nm_negnametimeo != 0 &&
      (VAR_8->cn_flags & VAR_2) &&
      VAR_17 != 0 && VAR_18 != 0)
   FUNC_8(VAR_6, VAR_11, VAR_8, &VAR_14.na_ctime,
       &VAR_15.na_ctime);
  *VAR_5->a_vpp = VAR_11;
 }
 return (VAR_16);
}
