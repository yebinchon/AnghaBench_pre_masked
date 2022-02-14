
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {struct ucred* a_cred; struct vnode* a_vp; struct vattr* a_vap; } ;
struct vnode {int v_type; TYPE_4__* v_mount; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_sec; int tv_nsec; } ;
struct TYPE_5__ {int tv_sec; int tv_nsec; } ;
struct vattr {scalar_t__ va_type; int va_nlink; int va_fsid; int va_fileid; int va_blocksize; int va_rdev; int va_gen; int va_flags; scalar_t__ va_uid; scalar_t__ va_gid; int va_size; int va_vaflags; scalar_t__ va_mode; TYPE_3__ va_birthtime; TYPE_2__ va_mtime; TYPE_1__ va_atime; scalar_t__ va_bytes; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {int i_flags; int i_flag; int i_atime; int i_mtime; int i_birthnsec; int i_birthtime; int i_mtimensec; int i_atimensec; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_8__ {int mnt_flag; } ;


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


 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;

 struct inode* FUNC_1 (struct vnode*) ;
 int VAR_21 ;
 struct thread* VAR_22 ;
 int FUNC_2 (struct vnode*,int,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*,scalar_t__,scalar_t__,struct ucred*,struct thread*) ;
 int FUNC_4 (struct vnode*,int,int ,struct ucred*,struct thread*) ;
 int FUNC_5 (struct vnode*,int ) ;
 int FUNC_6 (struct ucred*,int ) ;
 int FUNC_7 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_8(struct vop_setattr_args *VAR_23)
{
 struct vattr *VAR_24 = VAR_23->a_vap;
 struct vnode *VAR_25 = VAR_23->a_vp;
 struct inode *VAR_26 = FUNC_1(VAR_25);
 struct ucred *VAR_27 = VAR_23->a_cred;
 struct thread *VAR_28 = VAR_22;
 int VAR_29;




 if ((VAR_24->va_type != VAR_19) || (VAR_24->va_nlink != VAR_20) ||
     (VAR_24->va_fsid != VAR_20) || (VAR_24->va_fileid != VAR_20) ||
     (VAR_24->va_blocksize != VAR_20) || (VAR_24->va_rdev != VAR_20) ||
     ((int)VAR_24->va_bytes != VAR_20) || (VAR_24->va_gen != VAR_20)) {
  return (VAR_1);
 }
 if (VAR_24->va_flags != VAR_20) {

  if (VAR_24->va_flags & ~(VAR_13 | VAR_14 | VAR_16))
   return (VAR_3);

  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_5);




  if ((VAR_29 = FUNC_0(VAR_25, VAR_17, VAR_27, VAR_28)))
   return (VAR_29);







  if (!FUNC_6(VAR_27, VAR_12)) {
   if (VAR_26->i_flags & (VAR_14 | VAR_13)) {
    VAR_29 = FUNC_7(VAR_27, 0);
    if (VAR_29)
     return (VAR_29);
   }
  } else {
   if (VAR_26->i_flags & (VAR_14 | VAR_13) ||
       ((VAR_24->va_flags ^ VAR_26->i_flags) & VAR_15))
    return (VAR_4);
  }
  VAR_26->i_flags = VAR_24->va_flags;
  VAR_26->i_flag |= VAR_8;
  if (VAR_26->i_flags & (VAR_6 | VAR_0))
   return (0);
 }
 if (VAR_26->i_flags & (VAR_6 | VAR_0))
  return (VAR_4);



 if (VAR_24->va_uid != (uid_t)VAR_20 || VAR_24->va_gid != (gid_t)VAR_20) {
  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_5);
  if ((VAR_29 = FUNC_3(VAR_25, VAR_24->va_uid, VAR_24->va_gid, VAR_27,
      VAR_28)) != 0)
   return (VAR_29);
 }
 if (VAR_24->va_size != VAR_20) {





  switch (VAR_25->v_type) {
  case 130:
   return (VAR_2);
  case 129:
  case 128:
   if (VAR_25->v_mount->mnt_flag & VAR_11)
    return (VAR_5);
   break;
  default:
   break;
  }
  if ((VAR_29 = FUNC_4(VAR_25, VAR_24->va_size, 0, VAR_27, VAR_28)) != 0)
   return (VAR_29);
 }
 if (VAR_24->va_atime.tv_sec != VAR_20 || VAR_24->va_mtime.tv_sec != VAR_20) {
  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_5);
  if ((VAR_29 = FUNC_0(VAR_25, VAR_17, VAR_27, VAR_28)) &&
      ((VAR_24->va_vaflags & VAR_18) == 0 ||
      (VAR_29 = FUNC_0(VAR_25, VAR_21, VAR_27, VAR_28))))
   return (VAR_29);
  VAR_26->i_flag |= VAR_8 | VAR_9;
  if (VAR_24->va_atime.tv_sec != VAR_20) {
   VAR_26->i_flag &= ~VAR_7;
   VAR_26->i_atime = VAR_24->va_atime.tv_sec;
   VAR_26->i_atimensec = VAR_24->va_atime.tv_nsec;
  }
  if (VAR_24->va_mtime.tv_sec != VAR_20) {
   VAR_26->i_flag &= ~VAR_10;
   VAR_26->i_mtime = VAR_24->va_mtime.tv_sec;
   VAR_26->i_mtimensec = VAR_24->va_mtime.tv_nsec;
  }
  VAR_26->i_birthtime = VAR_24->va_birthtime.tv_sec;
  VAR_26->i_birthnsec = VAR_24->va_birthtime.tv_nsec;
  VAR_29 = FUNC_5(VAR_25, 0);
  if (VAR_29)
   return (VAR_29);
 }
 VAR_29 = 0;
 if (VAR_24->va_mode != (mode_t)VAR_20) {
  if (VAR_25->v_mount->mnt_flag & VAR_11)
   return (VAR_5);
  VAR_29 = FUNC_2(VAR_25, (int)VAR_24->va_mode, VAR_27, VAR_28);
 }
 return (VAR_29);
}
