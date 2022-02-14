
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_step; unsigned int p_xsig; unsigned int p_stype; int p_mtx; int * p_xthread; int p_pid; } ;


 int FUNC_0 (int ,char*,int ,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int*,int *,int ,char*,int ) ;
 int FUNC_3 (unsigned int*) ;

void
FUNC_4(struct proc *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{

 FUNC_1(VAR_4, VAR_1);
 VAR_4->p_step = 1;
 FUNC_0(VAR_0, "stopevent: pid %d event %u val %u", VAR_4->p_pid, VAR_5,
     VAR_6);
 do {
  if (VAR_5 != VAR_3)
   VAR_4->p_xsig = VAR_6;
  VAR_4->p_xthread = ((void*)0);
  VAR_4->p_stype = VAR_5;
  FUNC_3(&VAR_4->p_stype);
  FUNC_2(&VAR_4->p_step, &VAR_4->p_mtx, VAR_2, "stopevent", 0);
 } while (VAR_4->p_step);
}
