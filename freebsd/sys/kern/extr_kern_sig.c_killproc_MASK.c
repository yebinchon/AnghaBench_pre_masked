
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc {TYPE_2__* p_ucred; int p_comm; int p_pid; } ;
struct TYPE_4__ {int cr_uid; TYPE_1__* cr_prison; } ;
struct TYPE_3__ {int pr_id; } ;


 int FUNC_0 (int ,char*,struct proc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,char*) ;
 int FUNC_4 (struct proc*) ;

void
FUNC_5(struct proc *VAR_4, char *VAR_5)
{

 FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_0, "killproc: proc %p (pid %d, %s)", VAR_4, VAR_4->p_pid,
     VAR_4->p_comm);
 FUNC_3(VAR_1, "pid %d (%s), jid %d, uid %d, was killed: %s\n",
     VAR_4->p_pid, VAR_4->p_comm, VAR_4->p_ucred->cr_prison->pr_id,
     VAR_4->p_ucred->cr_uid, VAR_5);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4, VAR_3);
}
