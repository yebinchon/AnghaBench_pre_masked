
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_write_args {int a_ioflag; struct ucred* a_cred; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct uio {int dummy; } ;
struct ucred {int dummy; } ;
typedef int pid_t ;
struct TYPE_6__ {int flag; } ;
struct TYPE_5__ {TYPE_1__* td_proc; } ;
struct TYPE_4__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct vnode*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct vnode*,struct uio*,int,struct ucred*,int ) ;
 scalar_t__ FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_write_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_vp;
 struct uio *VAR_6 = VAR_4->a_uio;
 int VAR_7 = VAR_4->a_ioflag;
 struct ucred *VAR_8 = VAR_4->a_cred;
 pid_t VAR_9 = VAR_3->td_proc->p_pid;

 if (FUNC_2(VAR_5)) {
  return VAR_0;
 }

 if (FUNC_0(VAR_5)->flag & VAR_1) {
  VAR_7 |= VAR_2;
 }

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
