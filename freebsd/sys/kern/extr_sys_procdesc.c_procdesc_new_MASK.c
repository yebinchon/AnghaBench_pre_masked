
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct procdesc {int pd_refcount; int pd_lock; TYPE_1__ pd_selinfo; int pd_flags; int pd_pid; struct proc* pd_proc; } ;
struct proc {struct procdesc* p_procdesc; int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct procdesc*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 struct procdesc* FUNC_3 (int ,int) ;

void
FUNC_4(struct proc *VAR_5, int VAR_6)
{
 struct procdesc *VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_0 | VAR_1);
 VAR_7->pd_proc = VAR_5;
 VAR_7->pd_pid = VAR_5->p_pid;
 VAR_5->p_procdesc = VAR_7;
 VAR_7->pd_flags = 0;
 if (VAR_6 & VAR_3)
  VAR_7->pd_flags |= VAR_2;
 FUNC_0(VAR_7);
 FUNC_1(&VAR_7->pd_selinfo.si_note, &VAR_7->pd_lock);





 FUNC_2(&VAR_7->pd_refcount, 2);
}
