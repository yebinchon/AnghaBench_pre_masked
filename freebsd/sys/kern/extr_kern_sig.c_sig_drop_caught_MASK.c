
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_sigcatch; int ps_mtx; } ;
struct proc {struct sigacts* p_sigacts; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sigacts*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct proc*,int) ;

void
FUNC_7(struct proc *VAR_2)
{
 int VAR_3;
 struct sigacts *VAR_4;

 VAR_4 = VAR_2->p_sigacts;
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_4->ps_mtx, VAR_0);
 while (FUNC_1(VAR_4->ps_sigcatch)) {
  VAR_3 = FUNC_3(&VAR_4->ps_sigcatch);
  FUNC_4(VAR_4, VAR_3);
  if ((FUNC_5(VAR_3) & VAR_1) != 0)
   FUNC_6(VAR_2, VAR_3);
 }
}
