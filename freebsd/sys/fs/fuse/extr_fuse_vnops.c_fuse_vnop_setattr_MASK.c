
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {struct ucred* a_cred; struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct vattr {scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_size; int va_vaflags; int va_mode; TYPE_2__ va_mtime; TYPE_1__ va_atime; } ;
struct ucred {scalar_t__ cr_ngroups; scalar_t__* cr_groups; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_data {int dataflags; } ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;
typedef int accmode_t ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;


 scalar_t__ VAR_13 ;

 int VAR_14 ;
 struct thread* VAR_15 ;
 struct fuse_data* FUNC_0 (struct mount*) ;
 int FUNC_1 (struct vnode*,int ,struct thread*,struct ucred*) ;
 int FUNC_2 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*,struct vattr*,struct thread*,struct ucred*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int FUNC_5 (scalar_t__,struct ucred*) ;
 int FUNC_6 (struct ucred*,int ) ;
 scalar_t__ FUNC_7 (struct mount*) ;
 struct mount* FUNC_8 (struct vnode*) ;

__attribute__((used)) static int
FUNC_9(struct vop_setattr_args *VAR_16)
{
 struct vnode *VAR_17 = VAR_16->a_vp;
 struct vattr *VAR_18 = VAR_16->a_vap;
 struct ucred *VAR_19 = VAR_16->a_cred;
 struct thread *VAR_20 = VAR_15;
 struct mount *VAR_21;
 struct fuse_data *VAR_22;
 struct vattr VAR_23;
 int VAR_24;
 int VAR_25 = 0, VAR_26;
 accmode_t VAR_27 = 0;
 bool VAR_28;
 bool VAR_29 = 0;
 gid_t VAR_30;

 VAR_21 = FUNC_8(VAR_17);
 VAR_22 = FUNC_0(VAR_21);
 VAR_24 = VAR_22->dataflags;
 VAR_28 = VAR_24 & VAR_4;
 if (VAR_19->cr_ngroups > 0)
  VAR_30 = VAR_19->cr_groups[0];
 else
  VAR_30 = 0;

 if (FUNC_4(VAR_17)) {
  return VAR_2;
 }

 if (VAR_18->va_uid != (uid_t)VAR_13) {
  if (VAR_28) {

   VAR_25 = FUNC_6(VAR_19, VAR_5);
   if (VAR_25) {

    VAR_26 = FUNC_2(VAR_17, &VAR_23, VAR_19,
     VAR_20);
    if (VAR_26)
     return (VAR_26);
    if (VAR_18->va_uid != VAR_23.va_uid)
     return VAR_25;
    else
     VAR_27 |= VAR_11;
    VAR_29 = 1;
   } else
    VAR_27 |= VAR_11;
  } else
   VAR_27 |= VAR_11;
 }
 if (VAR_18->va_gid != (gid_t)VAR_13) {
  if (VAR_28 && FUNC_6(VAR_19, VAR_5))
   VAR_29 = 1;
  if (VAR_28 && !FUNC_5(VAR_18->va_gid, VAR_19))
  {




   VAR_25 = FUNC_6(VAR_19, VAR_5);
   if (VAR_25) {

    VAR_26 = FUNC_2(VAR_17, &VAR_23, VAR_19,
     VAR_20);
    if (VAR_26)
     return (VAR_26);
    if (VAR_18->va_gid != VAR_23.va_gid)
     return VAR_25;
    VAR_27 |= VAR_11;
   } else
    VAR_27 |= VAR_11;
  } else
   VAR_27 |= VAR_11;
 }
 if (VAR_18->va_size != VAR_13) {
  switch (VAR_17->v_type) {
  case 130:
   return (VAR_1);
  case 129:
  case 128:
   if (FUNC_7(VAR_21))
    return (VAR_3);
   break;
  default:
   return (0);
  }

 }
 if (VAR_18->va_atime.tv_sec != VAR_13 || VAR_18->va_mtime.tv_sec != VAR_13) {
  if (VAR_18->va_vaflags & VAR_12)
   VAR_27 |= VAR_14;
  else
   VAR_27 |= VAR_11;
 }
 if (VAR_29) {
  if (VAR_18->va_mode != (mode_t)VAR_13)
   VAR_18->va_mode &= ~(VAR_10 | VAR_8);
  else {
   VAR_25 = FUNC_2(VAR_17, &VAR_23, VAR_19, VAR_20);
   if (VAR_25)
    return (VAR_25);
   VAR_18->va_mode = VAR_23.va_mode & ~(VAR_10 | VAR_8);
  }
 }
 if (VAR_18->va_mode != (mode_t)VAR_13) {

  if (VAR_28 && VAR_17->v_type != 130 && (VAR_18->va_mode & VAR_9)
      && FUNC_6(VAR_19, VAR_7))
   return VAR_0;
  if (VAR_28 && (VAR_18->va_mode & VAR_8)) {
   VAR_25 = FUNC_2(VAR_17, &VAR_23, VAR_19, VAR_20);
   if (VAR_25)
    return (VAR_25);
   if (!FUNC_5(VAR_23.va_gid, VAR_19)) {
    VAR_25 = FUNC_6(VAR_19, VAR_6);
    if (VAR_25)
     return (VAR_25);
   }
  }
  VAR_27 |= VAR_11;
 }

 if (FUNC_7(VAR_21))
  return VAR_3;

 VAR_25 = FUNC_1(VAR_17, VAR_27, VAR_20, VAR_19);
 if (VAR_25)
  return VAR_25;
 else
  return FUNC_3(VAR_17, VAR_18, VAR_20, VAR_19);
}
