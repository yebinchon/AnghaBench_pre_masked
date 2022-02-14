
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc_ldt {int dummy; } ;
struct mdproc {int md_ldt_sd; struct proc_ldt* md_ldt; } ;
struct proc {struct mdproc p_md; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct thread* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct proc_ldt*) ;

void
FUNC_9(struct thread *VAR_4)
{
 struct proc *VAR_5 = VAR_4->td_proc;
 struct mdproc *VAR_6 = &VAR_5->p_md;
 struct proc_ldt *VAR_7;

 FUNC_6(&VAR_3);
 if ((VAR_7 = VAR_6->md_ldt) == ((void*)0)) {
  FUNC_7(&VAR_3);
  return;
 }

 FUNC_3();
 VAR_6->md_ldt = ((void*)0);
 FUNC_1();
 FUNC_2(&VAR_6->md_ldt_sd, sizeof(VAR_6->md_ldt_sd));
 if (VAR_4 == VAR_2)
  FUNC_5(FUNC_0(VAR_0, VAR_1));
 FUNC_4();
 FUNC_8(VAR_7);
}
