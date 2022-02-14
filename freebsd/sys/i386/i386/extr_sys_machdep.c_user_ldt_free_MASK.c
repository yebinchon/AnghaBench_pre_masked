
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct proc_ldt {int dummy; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
struct TYPE_2__ {struct mdproc p_md; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct proc_ldt*) ;

void
FUNC_5(struct thread *VAR_5)
{
 struct mdproc *VAR_6;
 struct proc_ldt *VAR_7;

 FUNC_2(&VAR_4, VAR_0);
 VAR_6 = &VAR_5->td_proc->p_md;
 if ((VAR_7 = VAR_6->md_ldt) == ((void*)0)) {
  FUNC_3(&VAR_4);
  return;
 }

 if (VAR_5 == VAR_3) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_2, VAR_1);
 }

 VAR_6->md_ldt = ((void*)0);
 FUNC_4(VAR_7);
}
