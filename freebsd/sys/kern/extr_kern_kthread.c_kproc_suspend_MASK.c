
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; int p_mtx; int p_siglist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int,char*,int) ;
 int FUNC_4 (struct proc*) ;

int
FUNC_5(struct proc *VAR_5, int VAR_6)
{




 FUNC_0(VAR_5);
 if ((VAR_5->p_flag & VAR_3) == 0) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_5->p_siglist, VAR_4);
 FUNC_4(VAR_5);
 return FUNC_3(&VAR_5->p_siglist, &VAR_5->p_mtx, VAR_2 | VAR_1, "suspkp", VAR_6);
}
