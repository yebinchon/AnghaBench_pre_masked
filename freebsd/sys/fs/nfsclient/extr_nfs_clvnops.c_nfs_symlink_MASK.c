
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_symlink_args {struct vnode** a_vpp; int a_target; struct componentname* a_cnp; struct vattr* a_vap; struct vnode* a_dvp; } ;
struct vnode {int v_mount; } ;
struct vattr {int va_gid; int va_uid; int va_type; } ;
struct nfsvattr {int na_ctime; } ;
struct nfsnode {scalar_t__ n_attrstamp; int n_flag; } ;
struct nfsfh {int dummy; } ;
struct componentname {int cn_flags; int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;
struct TYPE_2__ {scalar_t__ nm_negnametimeo; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfsnode*) ;
 struct vnode* FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (int ) ;
 int VAR_3 ;
 struct nfsnode* FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,struct vnode*,struct componentname*,int *,int *) ;
 int FUNC_8 (struct vnode*,int ,int ,int ,int ,struct nfsnode**) ;
 int FUNC_9 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (int ,struct vnode*,struct nfsfh*,struct componentname*,int ,struct nfsnode**,int *,int ) ;
 int FUNC_12 (struct vnode*,int ,int ,int ,struct vattr*,int ,int ,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_13 (struct vnode*) ;

__attribute__((used)) static int
FUNC_14(struct vop_symlink_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_dvp;
 struct vattr *VAR_6 = VAR_4->a_vap;
 struct componentname *VAR_7 = VAR_4->a_cnp;
 struct nfsvattr VAR_8, VAR_9;
 struct nfsfh *VAR_10;
 struct nfsnode *VAR_11 = ((void*)0), *VAR_12;
 struct vnode *VAR_13 = ((void*)0);
 int VAR_14 = 0, VAR_15, VAR_16, VAR_17;

 VAR_6->va_type = VAR_3;
 VAR_14 = FUNC_12(VAR_5, VAR_7->cn_nameptr, VAR_7->cn_namelen,
     VAR_4->a_target, VAR_6, VAR_7->cn_cred, VAR_7->cn_thread, &VAR_9,
     &VAR_8, &VAR_10, &VAR_15, &VAR_16, ((void*)0));
 if (VAR_10) {
  VAR_17 = FUNC_11(VAR_5->v_mount, VAR_5, VAR_10, VAR_7, VAR_7->cn_thread,
      &VAR_11, ((void*)0), VAR_0);
  if (!VAR_17)
   VAR_13 = FUNC_2(VAR_11);
  else if (!VAR_14)
   VAR_14 = VAR_17;
 }
 if (VAR_13 != ((void*)0)) {
  if (VAR_15)
   (void) FUNC_9(&VAR_13, &VAR_8, ((void*)0), ((void*)0),
       0, 1);
 } else if (!VAR_14) {





  VAR_14 = FUNC_8(VAR_5, VAR_7->cn_nameptr, VAR_7->cn_namelen,
      VAR_7->cn_cred, VAR_7->cn_thread, &VAR_11);
  if (!VAR_14)
   VAR_13 = FUNC_2(VAR_11);
 }
 if (VAR_14) {
  if (VAR_13)
   FUNC_13(VAR_13);
  if (FUNC_4(VAR_5))
   VAR_14 = FUNC_10(VAR_7->cn_thread, VAR_14,
       VAR_6->va_uid, VAR_6->va_gid);
 } else {
  *VAR_4->a_vpp = VAR_13;
 }

 VAR_12 = FUNC_6(VAR_5);
 FUNC_1(VAR_12);
 VAR_12->n_flag |= VAR_2;
 if (VAR_16 != 0) {
  FUNC_3(VAR_12);
  (void) FUNC_9(&VAR_5, &VAR_9, ((void*)0), ((void*)0), 0, 1);
 } else {
  VAR_12->n_attrstamp = 0;
  FUNC_3(VAR_12);
  FUNC_0(VAR_5);
 }






 if (FUNC_5(VAR_5->v_mount)->nm_negnametimeo != 0 &&
     (VAR_7->cn_flags & VAR_1) && VAR_15 != 0 && VAR_14 == 0) {
  FUNC_7(VAR_5, VAR_13, VAR_7, &VAR_8.na_ctime, ((void*)0));
 }
 return (VAR_14);
}
