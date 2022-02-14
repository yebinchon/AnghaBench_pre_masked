
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {struct vnode* a_vp; struct ucred* a_cred; struct vattr* a_vap; } ;
struct vnode {int v_vflag; int v_type; TYPE_1__* v_mount; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct vattr {int va_type; scalar_t__ va_nlink; scalar_t__ va_fsid; scalar_t__ va_fileid; scalar_t__ va_blocksize; scalar_t__ va_rdev; scalar_t__ va_bytes; scalar_t__ va_gen; int va_uid; int va_gid; scalar_t__ va_flags; scalar_t__ va_size; int va_mode; TYPE_2__ va_mtime; TYPE_2__ va_atime; } ;
struct ucred {scalar_t__ cr_uid; } ;
struct thread {int dummy; } ;
struct msdosfsmount {scalar_t__ pm_uid; int pm_gid; int pm_flags; } ;
struct denode {int de_flag; int de_Attributes; int de_MTime; int de_MDate; int de_ADate; struct msdosfsmount* de_pmp; } ;
typedef int mode_t ;
typedef int gid_t ;
struct TYPE_3__ {int mnt_flag; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

 int VAR_20 ;
 scalar_t__ VAR_21 ;

 struct denode* FUNC_0 (struct vnode*) ;
 int VAR_22 ;
 struct thread* VAR_23 ;
 int FUNC_1 (struct denode*,scalar_t__,int ,struct ucred*) ;
 int FUNC_2 (struct denode*,int ) ;
 int FUNC_3 (int,struct ucred*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct ucred*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int *,int *) ;
 int FUNC_7 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;

__attribute__((used)) static int
FUNC_8(struct vop_setattr_args *VAR_24)
{
 struct vnode *VAR_25 = VAR_24->a_vp;
 struct denode *VAR_26 = FUNC_0(VAR_24->a_vp);
 struct msdosfsmount *VAR_27 = VAR_26->de_pmp;
 struct vattr *VAR_28 = VAR_24->a_vap;
 struct ucred *VAR_29 = VAR_24->a_cred;
 struct thread *VAR_30 = VAR_23;
 int VAR_31 = 0;
 if ((VAR_28->va_type != VAR_20) || (VAR_28->va_nlink != VAR_21) ||
     (VAR_28->va_fsid != VAR_21) || (VAR_28->va_fileid != VAR_21) ||
     (VAR_28->va_blocksize != VAR_21) || (VAR_28->va_rdev != VAR_21) ||
     (VAR_28->va_bytes != VAR_21) || (VAR_28->va_gen != VAR_21)) {
  return (VAR_7);
 }
 if (VAR_25->v_vflag & VAR_22)
  return (VAR_7);

 if (VAR_28->va_flags != VAR_21) {
  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_10);
  if (VAR_29->cr_uid != VAR_27->pm_uid) {
   VAR_31 = FUNC_5(VAR_29, VAR_13);
   if (VAR_31)
    return (VAR_31);
  }






  if (VAR_28->va_flags & ~(VAR_16 | VAR_17 | VAR_18 |
      VAR_19))
   return VAR_9;
  if (VAR_28->va_flags & VAR_16)
   VAR_26->de_Attributes |= VAR_0;
  else
   VAR_26->de_Attributes &= ~VAR_0;
  if (VAR_28->va_flags & VAR_17)
   VAR_26->de_Attributes |= VAR_1;
  else
   VAR_26->de_Attributes &= ~VAR_1;

  if (VAR_25->v_type != 129) {
   if (VAR_28->va_flags & VAR_18)
    VAR_26->de_Attributes |= VAR_2;
   else
    VAR_26->de_Attributes &= ~VAR_2;
  }
  if (VAR_28->va_flags & VAR_19)
   VAR_26->de_Attributes |= VAR_3;
  else
   VAR_26->de_Attributes &= ~VAR_3;
  VAR_26->de_flag |= VAR_5;
 }

 if (VAR_28->va_uid != (uid_t)VAR_21 || VAR_28->va_gid != (gid_t)VAR_21) {
  uid_t VAR_32;
  gid_t VAR_33;

  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_10);
  VAR_32 = VAR_28->va_uid;
  if (VAR_32 == (uid_t)VAR_21)
   VAR_32 = VAR_27->pm_uid;
  VAR_33 = VAR_28->va_gid;
  if (VAR_33 == (gid_t)VAR_21)
   VAR_33 = VAR_27->pm_gid;
  if (VAR_29->cr_uid != VAR_27->pm_uid || VAR_32 != VAR_27->pm_uid ||
      (VAR_33 != VAR_27->pm_gid && !FUNC_3(VAR_33, VAR_29))) {
   VAR_31 = FUNC_5(VAR_29, VAR_14);
   if (VAR_31)
    return (VAR_31);
  }
  if (VAR_32 != VAR_27->pm_uid || VAR_33 != VAR_27->pm_gid)
   return VAR_7;
 }

 if (VAR_28->va_size != VAR_21) {
  switch (VAR_25->v_type) {
  case 129:
   return (VAR_8);
  case 128:




   if (VAR_25->v_mount->mnt_flag & VAR_11)
    return (VAR_10);
   break;
  default:
   break;
  }
  VAR_31 = FUNC_1(VAR_26, VAR_28->va_size, 0, VAR_29);
  if (VAR_31)
   return VAR_31;
 }
 if (VAR_28->va_atime.tv_sec != VAR_21 || VAR_28->va_mtime.tv_sec != VAR_21) {
  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_10);
  VAR_31 = FUNC_7(VAR_25, VAR_28, VAR_29, VAR_30);
  if (VAR_31 != 0)
   return (VAR_31);
  if ((VAR_27->pm_flags & VAR_12) == 0 &&
      VAR_28->va_atime.tv_sec != VAR_21) {
   VAR_26->de_flag &= ~VAR_4;
   FUNC_6(&VAR_28->va_atime, 0,
       &VAR_26->de_ADate, ((void*)0), ((void*)0));
  }
  if (VAR_28->va_mtime.tv_sec != VAR_21) {
   VAR_26->de_flag &= ~VAR_6;
   FUNC_6(&VAR_28->va_mtime, 0,
       &VAR_26->de_MDate, &VAR_26->de_MTime, ((void*)0));
  }




  if (VAR_25->v_type != 129)
   VAR_26->de_Attributes |= VAR_0;
  VAR_26->de_flag |= VAR_5;
 }





 if (VAR_28->va_mode != (mode_t)VAR_21) {
  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_10);
  if (VAR_29->cr_uid != VAR_27->pm_uid) {
   VAR_31 = FUNC_5(VAR_29, VAR_13);
   if (VAR_31)
    return (VAR_31);
  }
  if (VAR_25->v_type != 129) {

   if (VAR_28->va_mode & VAR_15)
    VAR_26->de_Attributes &= ~VAR_2;
   else
    VAR_26->de_Attributes |= VAR_2;
   VAR_26->de_Attributes |= VAR_0;
   VAR_26->de_flag |= VAR_5;
  }
 }
 return (FUNC_2(VAR_26, 0));
}
