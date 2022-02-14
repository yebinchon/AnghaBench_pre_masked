
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_mkdir_args {struct vattr* a_vap; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct vattr {int va_mode; int va_type; } ;
struct fuse_mkdir_in {int umask; int mode; } ;
struct componentname {int dummy; } ;
typedef int fmdi ;
struct TYPE_6__ {TYPE_2__* td_proc; } ;
struct TYPE_5__ {TYPE_1__* p_fd; } ;
struct TYPE_4__ {int fd_cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct vnode*,struct vnode**,struct componentname*,int ,struct fuse_mkdir_in*,int,int ) ;
 scalar_t__ FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_mkdir_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_dvp;
 struct vnode **VAR_6 = VAR_4->a_vpp;
 struct componentname *VAR_7 = VAR_4->a_cnp;
 struct vattr *VAR_8 = VAR_4->a_vap;

 struct fuse_mkdir_in VAR_9;

 if (FUNC_2(VAR_5)) {
  return VAR_0;
 }
 VAR_9.mode = FUNC_0(VAR_8->va_type, VAR_8->va_mode);
 VAR_9.umask = VAR_3->td_proc->p_fd->fd_cmask;

 return (FUNC_1(VAR_5, VAR_6, VAR_7, VAR_1, &VAR_9,
     sizeof(VAR_9), VAR_2));
}
