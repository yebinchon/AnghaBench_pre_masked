
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {int p_pid; } ;
struct TYPE_4__ {scalar_t__ ksi_signo; } ;
typedef TYPE_1__ ksiginfo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct thread*,struct proc*,scalar_t__) ;
 int FUNC_5 (struct thread*,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_0, struct thread *VAR_1, ksiginfo_t *VAR_2)
{
 struct proc *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->td_proc;
 FUNC_2(VAR_2->ksi_signo);
 FUNC_0(VAR_3->p_pid);
 FUNC_1(VAR_3);

 VAR_4 = FUNC_4(VAR_0, VAR_3, VAR_2->ksi_signo);
 if (VAR_4 != 0 || VAR_2->ksi_signo == 0)
  goto out;

 FUNC_5(VAR_1, VAR_2->ksi_signo, VAR_2);

out:
 FUNC_3(VAR_3);
 return (VAR_4);
}
