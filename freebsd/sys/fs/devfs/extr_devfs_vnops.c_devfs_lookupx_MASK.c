
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_lookup_args {struct vnode* a_dvp; struct vnode** a_vpp; struct componentname* a_cnp; } ;
struct vnode {scalar_t__ v_type; int v_vflag; struct devfs_dirent* v_data; struct mount* v_mount; } ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;
struct devfs_mount {size_t dm_idx; int dm_lock; } ;
struct devfs_dirent {int de_flags; } ;
struct componentname {char* cn_nameptr; int cn_flags; int cn_nameiop; int cn_namelen; int cn_lkflags; int cn_cred; struct thread* cn_thread; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {struct devfs_dirent** cdp_dirents; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct devfs_mount*) ;
 int FUNC_1 (struct devfs_mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,char*,int ,struct cdev**) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct vnode* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 struct devfs_mount* FUNC_3 (struct mount*) ;
 int FUNC_4 (struct vnode*,int ,int ,struct thread*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 int FUNC_7 (struct vnode*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__* FUNC_8 (struct cdev*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_9 () ;
 int FUNC_10 (struct cdev*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct devfs_dirent*,struct mount*,int,struct vnode**) ;
 struct devfs_dirent* FUNC_13 (struct devfs_dirent*,char*,int,int ) ;
 char* FUNC_14 (char*,struct devfs_mount*,struct devfs_dirent*,struct componentname*) ;
 struct devfs_dirent* FUNC_15 (struct devfs_dirent*) ;
 scalar_t__ FUNC_16 (struct vnode*) ;
 scalar_t__ FUNC_17 (struct devfs_dirent*,struct thread*) ;
 int FUNC_18 (struct devfs_mount*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_25(struct vop_lookup_args *VAR_26, int *VAR_27)
{
 struct componentname *VAR_28;
 struct vnode *VAR_29, **VAR_30;
 struct thread *VAR_31;
 struct devfs_dirent *VAR_32, *VAR_33;
 struct devfs_dirent **VAR_34;
 struct devfs_mount *VAR_35;
 struct mount *VAR_36;
 struct cdev *VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41;
 char VAR_42[VAR_18 + 1], *VAR_43;

 VAR_28 = VAR_26->a_cnp;
 VAR_30 = VAR_26->a_vpp;
 VAR_29 = VAR_26->a_dvp;
 VAR_43 = VAR_28->cn_nameptr;
 VAR_31 = VAR_28->cn_thread;
 VAR_39 = VAR_28->cn_flags;
 VAR_40 = VAR_28->cn_nameiop;
 VAR_36 = VAR_29->v_mount;
 VAR_35 = FUNC_3(VAR_36);
 VAR_33 = VAR_29->v_data;
 *VAR_30 = VAR_15;

 if ((VAR_39 & VAR_10) && VAR_40 == VAR_16)
  return (VAR_8);

 if (VAR_29->v_type != VAR_19)
  return (VAR_7);

 if ((VAR_39 & VAR_9) && (VAR_29->v_vflag & VAR_21))
  return (VAR_4);

 VAR_38 = FUNC_4(VAR_29, VAR_20, VAR_28->cn_cred, VAR_31);
 if (VAR_38)
  return (VAR_38);

 if (VAR_28->cn_namelen == 1 && *VAR_43 == '.') {
  if ((VAR_39 & VAR_10) && VAR_40 != VAR_14)
   return (VAR_3);
  *VAR_30 = VAR_29;
  FUNC_7(VAR_29);
  return (0);
 }

 if (VAR_39 & VAR_9) {
  if ((VAR_39 & VAR_10) && VAR_40 != VAR_14)
   return (VAR_3);
  VAR_32 = FUNC_15(VAR_33);
  if (VAR_32 == ((void*)0))
   return (VAR_6);
  VAR_41 = FUNC_5(VAR_29);
  FUNC_6(VAR_29, 0);
  VAR_38 = FUNC_12(VAR_32, VAR_36, VAR_28->cn_lkflags & VAR_12,
      VAR_30);
  *VAR_27 = 0;
  FUNC_24(VAR_29, VAR_41 | VAR_11);
  return (VAR_38);
 }

 VAR_33 = VAR_29->v_data;
 VAR_32 = FUNC_13(VAR_33, VAR_28->cn_nameptr, VAR_28->cn_namelen, 0);
 while (VAR_32 == ((void*)0)) {

  if (VAR_40 == VAR_1)
   return (VAR_6);





  VAR_43 = FUNC_14(VAR_42, VAR_35, VAR_33, VAR_28);
  if (VAR_43 == ((void*)0))
   break;

  VAR_37 = ((void*)0);
  FUNC_1(VAR_35);
  FUNC_23(&VAR_35->dm_lock);
  FUNC_20(&VAR_24);
  FUNC_2(VAR_25,
      VAR_31->td_ucred, VAR_43, FUNC_19(VAR_43), &VAR_37);
  FUNC_21(&VAR_24);

  if (VAR_37 == ((void*)0))
   FUNC_22(&VAR_35->dm_lock);
  else if (FUNC_16(VAR_29) != 0) {
   *VAR_27 = 0;
   FUNC_22(&VAR_35->dm_lock);
   if (FUNC_0(VAR_35)) {
    FUNC_23(&VAR_35->dm_lock);
    FUNC_18(VAR_35);
   } else
    FUNC_23(&VAR_35->dm_lock);
   FUNC_10(VAR_37);
   return (VAR_6);
  }
  if (FUNC_0(VAR_35)) {
   *VAR_27 = 0;
   FUNC_23(&VAR_35->dm_lock);
   FUNC_18(VAR_35);
   if (VAR_37 != ((void*)0))
    FUNC_10(VAR_37);
   return (VAR_6);
  }

  if (VAR_37 == ((void*)0))
   break;

  FUNC_9();
  VAR_34 = &FUNC_8(VAR_37)->cdp_dirents[VAR_35->dm_idx];
  if (VAR_34 != ((void*)0) && *VAR_34 != ((void*)0))
   VAR_32 = *VAR_34;
  FUNC_11();
  FUNC_10(VAR_37);
  break;
 }

 if (VAR_32 == ((void*)0) || VAR_32->de_flags & VAR_2) {
  if ((VAR_40 == VAR_0 || VAR_40 == VAR_16) &&
      (VAR_39 & (VAR_13 | VAR_23)) && (VAR_39 & VAR_10)) {
   VAR_28->cn_flags |= VAR_17;
   return (VAR_5);
  }
  return (VAR_6);
 }

 if (FUNC_17(VAR_32, VAR_31))
  return (VAR_6);

 if ((VAR_28->cn_nameiop == VAR_1) && (VAR_39 & VAR_10)) {
  VAR_38 = FUNC_4(VAR_29, VAR_22, VAR_28->cn_cred, VAR_31);
  if (VAR_38)
   return (VAR_38);
  if (*VAR_30 == VAR_29) {
   FUNC_7(VAR_29);
   *VAR_30 = VAR_29;
   return (0);
  }
 }
 VAR_38 = FUNC_12(VAR_32, VAR_36, VAR_28->cn_lkflags & VAR_12, VAR_30);
 *VAR_27 = 0;
 return (VAR_38);
}
