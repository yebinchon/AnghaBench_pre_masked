
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_flag; int ps_mtx; } ;
struct proc {struct sigacts* p_sigacts; struct proc* p_pptr; int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct proc*,int,int) ;
 int FUNC_4 (struct proc*) ;

__attribute__((used)) static void
FUNC_5(struct proc *VAR_3, int VAR_4, int VAR_5)
{
 struct sigacts *VAR_6;

 FUNC_0(VAR_3, VAR_0);
 FUNC_0(VAR_3->p_pptr, VAR_0);







 VAR_3->p_pptr->p_flag |= VAR_2;
 FUNC_4(VAR_3->p_pptr);

 VAR_6 = VAR_3->p_pptr->p_sigacts;
 FUNC_1(&VAR_6->ps_mtx);
 if ((VAR_6->ps_flag & VAR_1) == 0) {
  FUNC_2(&VAR_6->ps_mtx);
  FUNC_3(VAR_3, VAR_4, VAR_5);
 } else
  FUNC_2(&VAR_6->ps_mtx);
}
