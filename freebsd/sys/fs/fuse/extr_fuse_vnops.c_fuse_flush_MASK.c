
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct mount {int dummy; } ;
struct fuse_flush_in {int lock_owner; int fh; } ;
struct fuse_filehandle {int fh_id; } ;
struct fuse_dispatcher {struct fuse_flush_in* indata; } ;
typedef int pid_t ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct thread* VAR_2 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 int FUNC_4 (struct mount*,int ) ;
 int FUNC_5 (struct mount*,int ) ;
 int FUNC_6 (struct vnode*,int,struct fuse_filehandle**,struct ucred*,int ) ;
 struct mount* FUNC_7 (struct vnode*) ;

__attribute__((used)) static int
FUNC_8(struct vnode *VAR_3, struct ucred *VAR_4, pid_t VAR_5, int VAR_6)
{
 struct fuse_flush_in *VAR_7;
 struct fuse_filehandle *VAR_8;
 struct fuse_dispatcher VAR_9;
 struct thread *VAR_10 = VAR_2;
 struct mount *VAR_11 = FUNC_7(VAR_3);
 int VAR_12;

 if (!FUNC_4(FUNC_7(VAR_3), VAR_1))
  return 0;

 VAR_12 = FUNC_6(VAR_3, VAR_6, &VAR_8, VAR_4, VAR_5);
 if (VAR_12)
  return VAR_12;

 FUNC_1(&VAR_9, sizeof(*VAR_7));
 FUNC_2(&VAR_9, VAR_1, VAR_3, VAR_10, VAR_4);
 VAR_7 = VAR_9.indata;
 VAR_7->fh = VAR_8->fh_id;





 VAR_7->lock_owner = VAR_10->td_proc->p_pid;

 VAR_12 = FUNC_3(&VAR_9);
 if (VAR_12 == VAR_0) {
  FUNC_5(VAR_11, VAR_1);
  VAR_12 = 0;
 }
 FUNC_0(&VAR_9);
 return VAR_12;
}
