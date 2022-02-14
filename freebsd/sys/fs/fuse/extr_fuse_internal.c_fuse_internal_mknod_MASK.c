
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnode {int v_mount; } ;
struct vattr {int va_type; int va_rdev; int va_mode; } ;
struct fuse_mknod_in {int umask; int rdev; int mode; } ;
struct fuse_data {int dummy; } ;
struct componentname {int dummy; } ;
typedef int fmni ;
struct TYPE_6__ {TYPE_2__* td_proc; } ;
struct TYPE_5__ {TYPE_1__* p_fd; } ;
struct TYPE_4__ {int fd_cmask; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* VAR_2 ;
 struct fuse_data* FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*,struct vnode**,struct componentname*,int ,struct fuse_mknod_in*,size_t,int ) ;
 scalar_t__ FUNC_3 (struct fuse_data*,int,int) ;

int
FUNC_4(struct vnode *VAR_3, struct vnode **VAR_4,
 struct componentname *VAR_5, struct vattr *VAR_6)
{
 struct fuse_data *VAR_7;
 struct fuse_mknod_in VAR_8;
 size_t VAR_9;

 VAR_7 = FUNC_1(VAR_3->v_mount);

 VAR_8.mode = FUNC_0(VAR_6->va_type, VAR_6->va_mode);
 VAR_8.rdev = VAR_6->va_rdev;
 if (FUNC_3(VAR_7, 7, 12)) {
  VAR_9 = sizeof(VAR_8);
  VAR_8.umask = VAR_2->td_proc->p_fd->fd_cmask;
 } else {
  VAR_9 = VAR_0;
 }
 return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1, &VAR_8,
     VAR_9, VAR_6->va_type));
}
