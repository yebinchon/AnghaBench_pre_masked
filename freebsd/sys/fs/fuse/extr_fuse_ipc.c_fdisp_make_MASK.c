
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct mount {int dummy; } ;
struct fuse_dispatcher {int dummy; } ;
struct fuse_data {int dummy; } ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (struct thread*,struct ucred*) ;
 void FUNC_1 (struct fuse_dispatcher*,int,struct fuse_data*,int ,int ,struct ucred*) ;
 struct fuse_data* FUNC_2 (struct mount*) ;

void
FUNC_3(struct fuse_dispatcher *VAR_0, enum fuse_opcode VAR_1, struct mount *VAR_2,
    uint64_t VAR_3, struct thread *VAR_4, struct ucred *VAR_5)
{
 struct fuse_data *VAR_6 = FUNC_2(VAR_2);
 FUNC_0(VAR_4, VAR_5);

 return FUNC_1(VAR_0, VAR_1, VAR_6, VAR_3, VAR_4->td_proc->p_pid, VAR_5);
}
