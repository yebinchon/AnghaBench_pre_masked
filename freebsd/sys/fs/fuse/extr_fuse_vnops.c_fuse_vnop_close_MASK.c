
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_close_args {int a_fflag; struct thread* a_td; struct ucred* a_cred; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
typedef int pid_t ;
struct TYPE_4__ {int flag; } ;
struct TYPE_3__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,struct ucred*,int ,int) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct ucred*,int ) ;
 scalar_t__ FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct vop_close_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct ucred *VAR_4 = VAR_2->a_cred;
 int VAR_5 = VAR_2->a_fflag;
 struct thread *VAR_6 = VAR_2->a_td;
 pid_t VAR_7 = VAR_6->td_proc->p_pid;
 int VAR_8 = 0;

 if (FUNC_2(VAR_3))
  return 0;
 if (FUNC_4(VAR_3))
  return 0;
 if (VAR_5 & VAR_1)
  return 0;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7, VAR_5);

 if ((FUNC_0(VAR_3)->flag & VAR_0) != 0) {
  FUNC_3(VAR_3, VAR_4, VAR_6->td_proc->p_pid);
 }
 return VAR_8;
}
