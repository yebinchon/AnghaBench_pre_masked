
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct fuse_dispatcher {int dummy; } ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (struct thread*,struct ucred*) ;
 int FUNC_1 (struct vnode*) ;
 void FUNC_2 (struct fuse_dispatcher*,int,int ,int ,int ,struct ucred*) ;
 int FUNC_3 (struct vnode*) ;

void
FUNC_4(struct fuse_dispatcher *VAR_0, enum fuse_opcode VAR_1,
    struct vnode *VAR_2, struct thread *VAR_3, struct ucred *VAR_4)
{
 FUNC_0(VAR_3, VAR_4);
 return FUNC_2(VAR_0, VAR_1, FUNC_3(VAR_2), FUNC_1(VAR_2),
     VAR_3->td_proc->p_pid, VAR_4);
}
