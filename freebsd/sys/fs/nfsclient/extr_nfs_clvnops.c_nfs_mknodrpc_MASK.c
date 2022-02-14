
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct vnode {int v_mount; } ;
struct vattr {int va_rdev; int va_gid; int va_uid; int va_type; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {scalar_t__ n_attrstamp; int n_flag; } ;
struct nfsfh {int dummy; } ;
struct componentname {int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int FUNC_1 (struct nfsnode*) ;
 struct vnode* FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct vnode*,struct vattr*,int ) ;
 int VAR_6 ;
 struct nfsnode* FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_8 (int ,int,int ,int ) ;
 int FUNC_9 (int ,struct vnode*,struct nfsfh*,struct componentname*,int ,struct nfsnode**,int *,int ) ;
 int FUNC_10 (struct vnode*,int ,int ,int ,int ,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_11 (struct vnode*,int ,int ,struct vattr*,int,int ,int ,int ,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_12 (struct vnode*) ;

__attribute__((used)) static int
FUNC_13(struct vnode *VAR_7, struct vnode **VAR_8, struct componentname *VAR_9,
    struct vattr *VAR_10)
{
 struct nfsvattr VAR_11, VAR_12;
 struct vnode *VAR_13 = ((void*)0);
 struct nfsnode *VAR_14 = ((void*)0), *VAR_15;
 struct nfsfh *VAR_16;
 struct vattr VAR_17;
 int VAR_18 = 0, VAR_19, VAR_20;
 u_int32_t VAR_21;

 if (VAR_10->va_type == VAR_4 || VAR_10->va_type == VAR_3)
  VAR_21 = VAR_10->va_rdev;
 else if (VAR_10->va_type == VAR_5 || VAR_10->va_type == VAR_6)
  VAR_21 = 0xffffffff;
 else
  return (VAR_0);
 if ((VAR_18 = FUNC_5(VAR_7, &VAR_17, VAR_9->cn_cred)))
  return (VAR_18);
 VAR_18 = FUNC_11(VAR_7, VAR_9->cn_nameptr, VAR_9->cn_namelen, VAR_10,
     VAR_21, VAR_10->va_type, VAR_9->cn_cred, VAR_9->cn_thread, &VAR_12,
     &VAR_11, &VAR_16, &VAR_19, &VAR_20, ((void*)0));
 if (!VAR_18) {
  if (!VAR_16)
   (void) FUNC_10(VAR_7, VAR_9->cn_nameptr,
       VAR_9->cn_namelen, VAR_9->cn_cred, VAR_9->cn_thread,
       &VAR_12, &VAR_11, &VAR_16, &VAR_19, &VAR_20,
       ((void*)0));
  if (VAR_16)
   VAR_18 = FUNC_9(VAR_7->v_mount, VAR_7, VAR_16, VAR_9,
       VAR_9->cn_thread, &VAR_14, ((void*)0), VAR_1);
 }
 if (VAR_20)
  (void) FUNC_7(&VAR_7, &VAR_12, ((void*)0), ((void*)0), 0, 1);
 if (!VAR_18) {
  VAR_13 = FUNC_2(VAR_14);
  if (VAR_19 != 0) {
   VAR_18 = FUNC_7(&VAR_13, &VAR_11, ((void*)0), ((void*)0),
       0, 1);
   if (VAR_18 != 0)
    FUNC_12(VAR_13);
  }
 }
 if (!VAR_18) {
  *VAR_8 = VAR_13;
 } else if (FUNC_4(VAR_7)) {
  VAR_18 = FUNC_8(VAR_9->cn_thread, VAR_18, VAR_10->va_uid,
      VAR_10->va_gid);
 }
 VAR_15 = FUNC_6(VAR_7);
 FUNC_1(VAR_15);
 VAR_15->n_flag |= VAR_2;
 if (!VAR_20) {
  VAR_15->n_attrstamp = 0;
  FUNC_0(VAR_7);
 }
 FUNC_3(VAR_15);
 return (VAR_18);
}
