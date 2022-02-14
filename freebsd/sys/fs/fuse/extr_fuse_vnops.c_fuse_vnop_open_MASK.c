
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_open_args {int a_mode; struct ucred* a_cred; struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct fuse_vnode_data {int dummy; } ;
typedef int pid_t ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct fuse_vnode_data* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,int,int *,struct thread*,struct ucred*) ;
 scalar_t__ FUNC_2 (struct vnode*,int,struct ucred*,int ) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct vop_open_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_vp;
 int VAR_11 = VAR_9->a_mode;
 struct thread *VAR_12 = VAR_9->a_td;
 struct ucred *VAR_13 = VAR_9->a_cred;
 pid_t VAR_14 = VAR_12->td_proc->p_pid;
 struct fuse_vnode_data *VAR_15;

 if (FUNC_3(VAR_10))
  return VAR_1;
 if (VAR_10->v_type == VAR_7 || VAR_10->v_type == VAR_6 || VAR_10->v_type == VAR_8)
  return (VAR_2);
 if ((VAR_11 & (VAR_4 | VAR_5 | VAR_3)) == 0)
  return VAR_0;

 VAR_15 = FUNC_0(VAR_10);

 if (FUNC_2(VAR_10, VAR_11, VAR_13, VAR_14)) {
  FUNC_4(VAR_10, 0, VAR_12);
  return 0;
 }

 return FUNC_1(VAR_10, VAR_11, ((void*)0), VAR_12, VAR_13);
}
