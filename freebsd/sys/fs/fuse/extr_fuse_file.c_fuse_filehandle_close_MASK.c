
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct fuse_release_in {int lock_owner; int flags; int fh; } ;
struct fuse_filehandle {int fufh_type; int fh_id; } ;
struct fuse_dispatcher {struct fuse_release_in* indata; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_filehandle*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fuse_dispatcher*) ;
 int FUNC_3 (struct fuse_dispatcher*,int) ;
 int FUNC_4 (struct fuse_dispatcher*,int,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_5 (struct fuse_dispatcher*) ;
 int FUNC_6 (struct fuse_filehandle*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct vnode*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (struct vnode*) ;

int
FUNC_10(struct vnode *VAR_5, struct fuse_filehandle *VAR_6,
    struct thread *VAR_7, struct ucred *VAR_8)
{
 struct fuse_dispatcher VAR_9;
 struct fuse_release_in *VAR_10;

 int VAR_11 = 0;
 int VAR_12 = VAR_0;

 if (FUNC_8(VAR_5)) {
  goto out;
 }
 if (FUNC_9(VAR_5))
  VAR_12 = VAR_1;
 FUNC_3(&VAR_9, sizeof(*VAR_10));
 FUNC_4(&VAR_9, VAR_12, VAR_5, VAR_7, VAR_8);
 VAR_10 = VAR_9.indata;
 VAR_10->fh = VAR_6->fh_id;
 VAR_10->flags = FUNC_7(VAR_6->fufh_type);





 VAR_10->lock_owner = VAR_7->td_proc->p_pid;

 VAR_11 = FUNC_5(&VAR_9);
 FUNC_2(&VAR_9);

out:
 FUNC_1(VAR_3, -1);
 FUNC_0(VAR_6, VAR_4);
 FUNC_6(VAR_6, VAR_2);

 return VAR_11;
}
