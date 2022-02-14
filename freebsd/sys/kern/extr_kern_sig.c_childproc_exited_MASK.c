
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_xexit; int p_xsig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct proc*,int,int) ;

void
FUNC_4(struct proc *VAR_3)
{
 int VAR_4, VAR_5;

 if (FUNC_0(VAR_3->p_xsig)) {
  VAR_4 = VAR_0;
  VAR_5 = FUNC_2(VAR_3->p_xsig);
 } else if (FUNC_1(VAR_3->p_xsig)) {
  VAR_4 = VAR_2;
  VAR_5 = FUNC_2(VAR_3->p_xsig);
 } else {
  VAR_4 = VAR_1;
  VAR_5 = VAR_3->p_xexit;
 }




 FUNC_3(VAR_3, VAR_4, VAR_5);
}
