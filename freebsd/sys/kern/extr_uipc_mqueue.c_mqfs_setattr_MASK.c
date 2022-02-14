
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {TYPE_3__* a_cred; struct vnode* a_vp; struct vattr* a_vap; } ;
struct vnode {int dummy; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_5__ {int tv_sec; } ;
struct vattr {scalar_t__ va_type; int va_nlink; int va_fsid; int va_fileid; int va_blocksize; int va_flags; int va_rdev; int va_gen; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; int va_vaflags; TYPE_2__ va_mtime; TYPE_1__ va_atime; scalar_t__ va_bytes; } ;
struct thread {int dummy; } ;
struct mqfs_node {scalar_t__ mn_uid; scalar_t__ mn_gid; scalar_t__ mn_mode; int mn_ctime; TYPE_2__ mn_mtime; TYPE_1__ mn_atime; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_7__ {scalar_t__ cr_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnode*,int ,TYPE_3__*,struct thread*) ;
 struct mqfs_node* FUNC_1 (struct vnode*) ;
 int VAR_6 ;
 struct thread* VAR_7 ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct vop_setattr_args *VAR_8)
{
 struct mqfs_node *VAR_9;
 struct vattr *VAR_10;
 struct vnode *VAR_11;
 struct thread *VAR_12;
 int VAR_13, VAR_14;
 uid_t VAR_15;
 gid_t VAR_16;

 VAR_12 = VAR_7;
 VAR_10 = VAR_8->a_vap;
 VAR_11 = VAR_8->a_vp;
 if ((VAR_10->va_type != VAR_4) ||
     (VAR_10->va_nlink != VAR_5) ||
     (VAR_10->va_fsid != VAR_5) ||
     (VAR_10->va_fileid != VAR_5) ||
     (VAR_10->va_blocksize != VAR_5) ||
     (VAR_10->va_flags != VAR_5 && VAR_10->va_flags != 0) ||
     (VAR_10->va_rdev != VAR_5) ||
     ((int)VAR_10->va_bytes != VAR_5) ||
     (VAR_10->va_gen != VAR_5)) {
  return (VAR_0);
 }

 VAR_9 = FUNC_1(VAR_11);

 VAR_14 = VAR_13 = 0;
 if (VAR_10->va_uid == (uid_t)VAR_5)
  VAR_15 = VAR_9->mn_uid;
 else
  VAR_15 = VAR_10->va_uid;
 if (VAR_10->va_gid == (gid_t)VAR_5)
  VAR_16 = VAR_9->mn_gid;
 else
  VAR_16 = VAR_10->va_gid;

 if (VAR_15 != VAR_9->mn_uid || VAR_16 != VAR_9->mn_gid) {




  if ((VAR_14 = FUNC_0(VAR_11, VAR_2, VAR_8->a_cred, VAR_12)))
   return (VAR_14);






  if (((VAR_8->a_cred->cr_uid != VAR_9->mn_uid) || VAR_15 != VAR_9->mn_uid ||
      (VAR_16 != VAR_9->mn_gid && !FUNC_2(VAR_16, VAR_8->a_cred))) &&
      (VAR_14 = FUNC_3(VAR_12, VAR_1)) != 0)
   return (VAR_14);
  VAR_9->mn_uid = VAR_15;
  VAR_9->mn_gid = VAR_16;
  VAR_13 = 1;
 }

 if (VAR_10->va_mode != (mode_t)VAR_5) {
  if ((VAR_8->a_cred->cr_uid != VAR_9->mn_uid) &&
      (VAR_14 = FUNC_3(VAR_12, VAR_1)))
   return (VAR_14);
  VAR_9->mn_mode = VAR_10->va_mode;
  VAR_13 = 1;
 }

 if (VAR_10->va_atime.tv_sec != VAR_5 || VAR_10->va_mtime.tv_sec != VAR_5) {

  if ((VAR_14 = FUNC_0(VAR_11, VAR_2, VAR_8->a_cred, VAR_12)) &&
      ((VAR_10->va_vaflags & VAR_3) == 0 ||
      (VAR_14 = FUNC_0(VAR_11, VAR_6, VAR_8->a_cred, VAR_12))))
   return (VAR_14);
  if (VAR_10->va_atime.tv_sec != VAR_5) {
   VAR_9->mn_atime = VAR_10->va_atime;
  }
  if (VAR_10->va_mtime.tv_sec != VAR_5) {
   VAR_9->mn_mtime = VAR_10->va_mtime;
  }
  VAR_13 = 1;
 }
 if (VAR_13) {
  FUNC_4(&VAR_9->mn_ctime);
 }
 return (0);
}
