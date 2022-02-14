
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {TYPE_3__* a_cred; struct vnode* a_vp; struct vattr* a_vap; } ;
struct vnode {scalar_t__ v_type; int v_mount; TYPE_2__* v_rdev; struct devfs_dirent* v_data; } ;
struct TYPE_10__ {int tv_sec; } ;
struct TYPE_7__ {int tv_sec; } ;
struct vattr {scalar_t__ va_type; int va_nlink; int va_fsid; int va_fileid; int va_blocksize; int va_flags; int va_rdev; int va_gen; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; TYPE_4__ va_mtime; TYPE_1__ va_atime; scalar_t__ va_bytes; } ;
struct thread {int dummy; } ;
struct devfs_dirent {scalar_t__ de_uid; scalar_t__ de_gid; scalar_t__ de_mode; TYPE_4__ de_mtime; TYPE_1__ de_atime; struct devfs_dirent* de_dir; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_11__ {int dm_lock; } ;
struct TYPE_9__ {scalar_t__ cr_uid; } ;
struct TYPE_8__ {TYPE_4__ si_ctime; TYPE_4__ si_mtime; TYPE_1__ si_atime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct thread* VAR_7 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct vnode*,struct vattr*,TYPE_3__*,struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct vop_setattr_args *VAR_8)
{
 struct devfs_dirent *VAR_9;
 struct vattr *VAR_10;
 struct vnode *VAR_11;
 struct thread *VAR_12;
 int VAR_13, VAR_14;
 uid_t VAR_15;
 gid_t VAR_16;

 VAR_10 = VAR_8->a_vap;
 VAR_11 = VAR_8->a_vp;
 VAR_12 = VAR_7;
 if ((VAR_10->va_type != VAR_5) ||
     (VAR_10->va_nlink != VAR_6) ||
     (VAR_10->va_fsid != VAR_6) ||
     (VAR_10->va_fileid != VAR_6) ||
     (VAR_10->va_blocksize != VAR_6) ||
     (VAR_10->va_flags != VAR_6 && VAR_10->va_flags != 0) ||
     (VAR_10->va_rdev != VAR_6) ||
     ((int)VAR_10->va_bytes != VAR_6) ||
     (VAR_10->va_gen != VAR_6)) {
  return (VAR_0);
 }

 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_9 = VAR_11->v_data;
 if (VAR_11->v_type == VAR_4)
  VAR_9 = VAR_9->de_dir;

 VAR_13 = 0;
 if (VAR_10->va_uid == (uid_t)VAR_6)
  VAR_15 = VAR_9->de_uid;
 else
  VAR_15 = VAR_10->va_uid;
 if (VAR_10->va_gid == (gid_t)VAR_6)
  VAR_16 = VAR_9->de_gid;
 else
  VAR_16 = VAR_10->va_gid;
 if (VAR_15 != VAR_9->de_uid || VAR_16 != VAR_9->de_gid) {
  if ((VAR_8->a_cred->cr_uid != VAR_9->de_uid) || VAR_15 != VAR_9->de_uid ||
      (VAR_16 != VAR_9->de_gid && !FUNC_2(VAR_16, VAR_8->a_cred))) {
   VAR_14 = FUNC_3(VAR_12, VAR_2);
   if (VAR_14 != 0)
    goto ret;
  }
  VAR_9->de_uid = VAR_15;
  VAR_9->de_gid = VAR_16;
  VAR_13 = 1;
 }

 if (VAR_10->va_mode != (mode_t)VAR_6) {
  if (VAR_8->a_cred->cr_uid != VAR_9->de_uid) {
   VAR_14 = FUNC_3(VAR_12, VAR_1);
   if (VAR_14 != 0)
    goto ret;
  }
  VAR_9->de_mode = VAR_10->va_mode;
  VAR_13 = 1;
 }

 if (VAR_10->va_atime.tv_sec != VAR_6 || VAR_10->va_mtime.tv_sec != VAR_6) {
  VAR_14 = FUNC_6(VAR_11, VAR_10, VAR_8->a_cred, VAR_12);
  if (VAR_14 != 0)
   goto ret;
  if (VAR_10->va_atime.tv_sec != VAR_6) {
   if (VAR_11->v_type == VAR_3)
    VAR_11->v_rdev->si_atime = VAR_10->va_atime;
   else
    VAR_9->de_atime = VAR_10->va_atime;
  }
  if (VAR_10->va_mtime.tv_sec != VAR_6) {
   if (VAR_11->v_type == VAR_3)
    VAR_11->v_rdev->si_mtime = VAR_10->va_mtime;
   else
    VAR_9->de_mtime = VAR_10->va_mtime;
  }
  VAR_13 = 1;
 }

 if (VAR_13) {
  if (VAR_11->v_type == VAR_3)
   FUNC_5(&VAR_11->v_rdev->si_ctime);
  else
   FUNC_5(&VAR_9->de_mtime);
 }

ret:
 FUNC_4(&FUNC_0(VAR_11->v_mount)->dm_lock);
 return (VAR_14);
}
