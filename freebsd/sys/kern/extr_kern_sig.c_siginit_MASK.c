
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_mtx; int ps_sigignore; } ;
struct proc {struct sigacts* p_sigacts; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

void
FUNC_6(struct proc *VAR_3)
{
 int VAR_4;
 struct sigacts *VAR_5;

 FUNC_0(VAR_3);
 VAR_5 = VAR_3->p_sigacts;
 FUNC_3(&VAR_5->ps_mtx);
 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
  if (FUNC_5(VAR_4) & VAR_2 && VAR_4 != VAR_1) {
   FUNC_2(VAR_5->ps_sigignore, VAR_4);
  }
 }
 FUNC_4(&VAR_5->ps_mtx);
 FUNC_1(VAR_3);
}
