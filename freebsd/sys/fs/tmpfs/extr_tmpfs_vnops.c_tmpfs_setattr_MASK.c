
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_setattr_args {struct ucred* a_cred; struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_5__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct vattr {scalar_t__ va_type; scalar_t__ va_nlink; scalar_t__ va_fsid; scalar_t__ va_fileid; scalar_t__ va_blocksize; scalar_t__ va_gen; scalar_t__ va_rdev; scalar_t__ va_bytes; scalar_t__ va_flags; scalar_t__ va_size; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; TYPE_3__ va_birthtime; TYPE_2__ va_mtime; TYPE_1__ va_atime; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
typedef scalar_t__ mode_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vnode*) ;
 struct thread* VAR_3 ;
 int FUNC_2 (struct vnode*,scalar_t__,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*,scalar_t__,struct ucred*,struct thread*) ;
 int FUNC_4 (struct vnode*,scalar_t__,scalar_t__,struct ucred*,struct thread*) ;
 int FUNC_5 (struct vnode*,scalar_t__,struct ucred*,struct thread*) ;
 int FUNC_6 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct vop_setattr_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_vp;
 struct vattr *VAR_6 = VAR_4->a_vap;
 struct ucred *VAR_7 = VAR_4->a_cred;
 struct thread *VAR_8 = VAR_3;

 int VAR_9;

 FUNC_0(FUNC_1(VAR_5));

 VAR_9 = 0;


 if (VAR_6->va_type != VAR_1 ||
     VAR_6->va_nlink != VAR_2 ||
     VAR_6->va_fsid != VAR_2 ||
     VAR_6->va_fileid != VAR_2 ||
     VAR_6->va_blocksize != VAR_2 ||
     VAR_6->va_gen != VAR_2 ||
     VAR_6->va_rdev != VAR_2 ||
     VAR_6->va_bytes != VAR_2)
  VAR_9 = VAR_0;

 if (VAR_9 == 0 && (VAR_6->va_flags != VAR_2))
  VAR_9 = FUNC_2(VAR_5, VAR_6->va_flags, VAR_7, VAR_8);

 if (VAR_9 == 0 && (VAR_6->va_size != VAR_2))
  VAR_9 = FUNC_5(VAR_5, VAR_6->va_size, VAR_7, VAR_8);

 if (VAR_9 == 0 && (VAR_6->va_uid != VAR_2 || VAR_6->va_gid != VAR_2))
  VAR_9 = FUNC_4(VAR_5, VAR_6->va_uid, VAR_6->va_gid, VAR_7, VAR_8);

 if (VAR_9 == 0 && (VAR_6->va_mode != (mode_t)VAR_2))
  VAR_9 = FUNC_3(VAR_5, VAR_6->va_mode, VAR_7, VAR_8);

 if (VAR_9 == 0 && ((VAR_6->va_atime.tv_sec != VAR_2 &&
     VAR_6->va_atime.tv_nsec != VAR_2) ||
     (VAR_6->va_mtime.tv_sec != VAR_2 &&
     VAR_6->va_mtime.tv_nsec != VAR_2) ||
     (VAR_6->va_birthtime.tv_sec != VAR_2 &&
     VAR_6->va_birthtime.tv_nsec != VAR_2)))
  VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);




 FUNC_7(VAR_5);

 FUNC_0(FUNC_1(VAR_5));

 return VAR_9;
}
