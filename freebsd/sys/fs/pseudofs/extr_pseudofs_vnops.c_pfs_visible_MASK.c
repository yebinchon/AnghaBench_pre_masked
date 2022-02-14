
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct proc {int dummy; } ;
struct pfs_node {int pn_name; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {int p_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct proc*) ;
 struct proc* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct thread*,struct pfs_node*,struct proc*) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_1, struct pfs_node *VAR_2, pid_t VAR_3,
    struct proc **VAR_4)
{
 struct proc *VAR_5;

 FUNC_1(("%s (pid: %d, req: %d)",
     VAR_2->pn_name, VAR_3, VAR_1->td_proc->p_pid));

 if (VAR_4)
  *VAR_4 = ((void*)0);
 if (VAR_3 == VAR_0)
  FUNC_0 (1);
 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 == ((void*)0))
  FUNC_0 (0);
 if (FUNC_4(VAR_1, VAR_2, VAR_5)) {
  if (VAR_4)
   *VAR_4 = VAR_5;
  else
   FUNC_2(VAR_5);
  FUNC_0 (1);
 }
 FUNC_2(VAR_5);
 FUNC_0 (0);
}
