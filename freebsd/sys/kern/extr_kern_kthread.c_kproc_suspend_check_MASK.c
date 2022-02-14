
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_mtx; int p_siglist; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct proc *VAR_2)
{
 FUNC_0(VAR_2);
 while (FUNC_2(VAR_2->p_siglist, VAR_1)) {
  FUNC_4(&VAR_2->p_siglist);
  FUNC_3(&VAR_2->p_siglist, &VAR_2->p_mtx, VAR_0, "kpsusp", 0);
 }
 FUNC_1(VAR_2);
}
