
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(struct proc *VAR_5)
{

 FUNC_0(VAR_5, VAR_0);
 if (VAR_5->p_flag & VAR_2)
  return;
 if ((VAR_5->p_flag & VAR_1) == 0) {
  VAR_5->p_flag |= VAR_1;
  FUNC_2(&VAR_4);
  if (++VAR_3 == 1)
   FUNC_1();
  FUNC_3(&VAR_4);
 }
}
