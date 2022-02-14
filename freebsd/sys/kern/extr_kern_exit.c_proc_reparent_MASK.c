
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; int p_pid; int p_oppid; struct proc* p_pptr; int p_children; int p_ksi; } ;


 int FUNC_0 (int *,struct proc*,int ) ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*,int ) ;
 int FUNC_4 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct proc*,struct proc*) ;
 int FUNC_6 (struct proc*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

void
FUNC_9(struct proc *VAR_5, struct proc *VAR_6, bool VAR_7)
{

 FUNC_8(&VAR_4, VAR_2);
 FUNC_3(VAR_5, VAR_0);
 if (VAR_5->p_pptr == VAR_6)
  return;

 FUNC_2(VAR_5->p_pptr);
 FUNC_7(VAR_5->p_ksi);
 FUNC_4(VAR_5->p_pptr);
 FUNC_1(VAR_5, VAR_3);
 FUNC_0(&VAR_6->p_children, VAR_5, VAR_3);

 FUNC_6(VAR_5);
 if ((VAR_5->p_flag & VAR_1) != 0) {
  FUNC_5(VAR_5, VAR_5->p_pptr);
 }

 VAR_5->p_pptr = VAR_6;
 if (VAR_7)
  VAR_5->p_oppid = VAR_6->p_pid;
}
