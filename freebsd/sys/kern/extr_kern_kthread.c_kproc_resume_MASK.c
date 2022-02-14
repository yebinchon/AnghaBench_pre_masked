
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; int p_siglist; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct proc *VAR_3)
{




 FUNC_0(VAR_3);
 if ((VAR_3->p_flag & VAR_1) == 0) {
  FUNC_1(VAR_3);
  return (VAR_0);
 }
 FUNC_2(VAR_3->p_siglist, VAR_2);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->p_siglist);
 return (0);
}
