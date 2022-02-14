
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct mount {int dummy; } ;
struct fuse_dispatcher {int dummy; } ;
struct fuse_data {int dummy; } ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (struct thread*,struct ucred*) ;
 int FUNC_1 (struct vnode*) ;
 void FUNC_2 (struct fuse_dispatcher*,int,struct fuse_data*,int ,int ,struct ucred*) ;
 struct fuse_data* FUNC_3 (struct mount*) ;
 struct mount* FUNC_4 (struct vnode*) ;

void
FUNC_5(struct fuse_dispatcher *VAR_0, enum fuse_opcode VAR_1,
    struct vnode *VAR_2, struct thread *VAR_3, struct ucred *VAR_4)
{
 struct mount *VAR_5 = FUNC_4(VAR_2);
 struct fuse_data *VAR_6 = FUNC_3(VAR_5);

 FUNC_0(VAR_3, VAR_4);
 return FUNC_2(VAR_0, VAR_1, VAR_6, FUNC_1(VAR_2),
     VAR_3->td_proc->p_pid, VAR_4);
}
