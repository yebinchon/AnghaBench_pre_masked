
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct thread {TYPE_1__ td_sa; struct proc* td_proc; } ;
struct proc {int p_pid; char* p_comm; } ;
struct nosys_args {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

int
FUNC_5(struct thread *VAR_3, struct nosys_args *VAR_4)
{
 struct proc *VAR_5;

 VAR_5 = VAR_3->td_proc;

 FUNC_0(VAR_5);
 FUNC_3(VAR_3, VAR_1);
 FUNC_1(VAR_5);
 if (VAR_2 == 1 || VAR_2 == 3) {
  FUNC_4("pid %d comm %s: nosys %d\n", VAR_5->p_pid, VAR_5->p_comm,
      VAR_3->td_sa.code);
 }
 if (VAR_2 == 2 || VAR_2 == 3) {
  FUNC_2("pid %d comm %s: nosys %d\n", VAR_5->p_pid, VAR_5->p_comm,
      VAR_3->td_sa.code);
 }
 return (VAR_0);
}
