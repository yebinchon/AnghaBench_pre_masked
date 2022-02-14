
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct vop_create_args {struct vnode** a_vpp; struct componentname* a_cnp; struct vattr* a_vap; struct vnode* a_dvp; } ;
struct vnode {int v_mount; } ;
struct vattr {scalar_t__ va_type; int va_vaflags; scalar_t__ va_uid; scalar_t__ va_gid; } ;
struct nfsvattr {int na_ctime; } ;
struct nfsnode {int n_flag; scalar_t__ n_attrstamp; int n_mtx; } ;
struct nfsmount {int dummy; } ;
struct nfsfh {int dummy; } ;
struct componentname {int cn_flags; int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;
typedef int nfsquad_t ;
typedef scalar_t__ gid_t ;
typedef int caddr_t ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct nfsmount*) ;
 int FUNC_2 (struct nfsnode*) ;
 struct vnode* FUNC_3 (struct nfsnode*) ;
 int FUNC_4 (struct nfsnode*) ;
 scalar_t__ FUNC_5 (struct vnode*) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nfsmount* FUNC_7 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (struct vnode*,struct vattr*,int ) ;
 scalar_t__ VAR_10 ;
 struct nfsnode* FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*,struct vnode*,struct componentname*,int *,int *) ;
 int FUNC_11 (int ,int *,int ,char*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (struct vnode*,struct vnode**,struct componentname*,struct vattr*) ;
 scalar_t__ FUNC_14 (struct vattr*,struct nfsvattr*) ;
 int FUNC_15 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_16 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_17 (int ,struct vnode*,struct nfsfh*,struct componentname*,int ,struct nfsnode**,int *,int ) ;
 int FUNC_18 (struct vnode*,int ,int ,struct vattr*,int ,int,int ,int ,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_19 (struct vnode*,int ,int ,struct nfsvattr*,int *) ;
 int FUNC_20 (struct vnode*,int ,int ,int ,int ,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,int *) ;
 int FUNC_21 (struct vnode*,struct vattr*,int *,int ,int ,struct nfsvattr*,int*,int *) ;
 int FUNC_22 (struct vnode*) ;
 int FUNC_23 (struct vnode*) ;

__attribute__((used)) static int
FUNC_24(struct vop_create_args *VAR_11)
{
 struct vnode *VAR_12 = VAR_11->a_dvp;
 struct vattr *VAR_13 = VAR_11->a_vap;
 struct componentname *VAR_14 = VAR_11->a_cnp;
 struct nfsnode *VAR_15 = ((void*)0), *VAR_16;
 struct vnode *VAR_17 = ((void*)0);
 struct nfsmount *VAR_18;
 struct nfsvattr VAR_19, VAR_20;
 struct nfsfh *VAR_21;
 nfsquad_t VAR_22;
 int VAR_23 = 0, VAR_24, VAR_25, VAR_26 = 0;
 struct vattr VAR_27;




 if (VAR_13->va_type == VAR_10)
  return (FUNC_13(VAR_12, VAR_11->a_vpp, VAR_14, VAR_13));

 if ((VAR_23 = FUNC_8(VAR_12, &VAR_27, VAR_14->cn_cred)))
  return (VAR_23);
 if (VAR_13->va_vaflags & VAR_8)
  VAR_26 |= VAR_6;
 VAR_16 = FUNC_9(VAR_12);
 VAR_18 = FUNC_7(FUNC_22(VAR_12));
again:

 FUNC_2(VAR_16);
 while (FUNC_1(VAR_18) && (VAR_16->n_flag & VAR_4)) {
  VAR_16->n_flag |= VAR_5;
  (void) FUNC_11((caddr_t)VAR_16, &VAR_16->n_mtx, VAR_7, "nfscrt", 0);
 }
 FUNC_4(VAR_16);

 VAR_22 = FUNC_12();
 VAR_23 = FUNC_18(VAR_12, VAR_14->cn_nameptr, VAR_14->cn_namelen,
     VAR_13, VAR_22, VAR_26, VAR_14->cn_cred, VAR_14->cn_thread, &VAR_19, &VAR_20,
     &VAR_21, &VAR_24, &VAR_25, ((void*)0));
 if (!VAR_23) {
  if (VAR_21 == ((void*)0))
   (void) FUNC_20(VAR_12, VAR_14->cn_nameptr,
       VAR_14->cn_namelen, VAR_14->cn_cred, VAR_14->cn_thread,
       &VAR_19, &VAR_20, &VAR_21, &VAR_24, &VAR_25,
       ((void*)0));
  if (VAR_21 != ((void*)0))
   VAR_23 = FUNC_17(VAR_12->v_mount, VAR_12, VAR_21, VAR_14,
       VAR_14->cn_thread, &VAR_15, ((void*)0), VAR_0);
 }
 if (VAR_25)
  (void) FUNC_15(&VAR_12, &VAR_19, ((void*)0), ((void*)0), 0, 1);
 if (!VAR_23) {
  VAR_17 = FUNC_3(VAR_15);
  if (VAR_24 == 0)
   VAR_23 = FUNC_19(VAR_17, VAR_14->cn_cred,
       VAR_14->cn_thread, &VAR_20, ((void*)0));
  if (VAR_23 == 0)
   VAR_23 = FUNC_15(&VAR_17, &VAR_20, ((void*)0), ((void*)0),
       0, 1);
 }
 if (VAR_23) {
  if (VAR_17 != ((void*)0)) {
   FUNC_23(VAR_17);
   VAR_17 = ((void*)0);
  }
  if (FUNC_5(VAR_12) && (VAR_26 & VAR_6) &&
      VAR_23 == VAR_2) {
   VAR_26 &= ~VAR_6;
   goto again;
  }
 } else if (FUNC_5(VAR_12) && (VAR_26 & VAR_6)) {
  if (FUNC_14(VAR_13, &VAR_20)) {
   VAR_23 = FUNC_21(VAR_17, VAR_13, ((void*)0), VAR_14->cn_cred,
       VAR_14->cn_thread, &VAR_20, &VAR_24, ((void*)0));
   if (VAR_23 && (VAR_13->va_uid != (uid_t)VAR_9 ||
       VAR_13->va_gid != (gid_t)VAR_9)) {

    VAR_13->va_uid = (uid_t)VAR_9;
    VAR_13->va_gid = (uid_t)VAR_9;
    VAR_23 = FUNC_21(VAR_17, VAR_13, ((void*)0),
        VAR_14->cn_cred, VAR_14->cn_thread, &VAR_20,
        &VAR_24, ((void*)0));
   }
   if (VAR_24)
    (void) FUNC_15(&VAR_17, &VAR_20, ((void*)0),
        ((void*)0), 0, 1);
   if (VAR_23 != 0)
    FUNC_23(VAR_17);
  }
 }
 if (!VAR_23) {
  if ((VAR_14->cn_flags & VAR_1) && VAR_24)
   FUNC_10(VAR_12, VAR_17, VAR_14, &VAR_20.na_ctime,
       ((void*)0));
  *VAR_11->a_vpp = VAR_17;
 } else if (FUNC_6(VAR_12)) {
  VAR_23 = FUNC_16(VAR_14->cn_thread, VAR_23, VAR_13->va_uid,
      VAR_13->va_gid);
 }
 FUNC_2(VAR_16);
 VAR_16->n_flag |= VAR_3;
 if (!VAR_25) {
  VAR_16->n_attrstamp = 0;
  FUNC_0(VAR_12);
 }
 FUNC_4(VAR_16);
 return (VAR_23);
}
