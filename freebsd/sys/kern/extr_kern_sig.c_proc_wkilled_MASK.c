
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct proc *VAR_5)
{

 FUNC_0(VAR_5, VAR_0);
 if ((VAR_5->p_flag & VAR_3) == 0) {
  VAR_5->p_flag |= VAR_3;





  if ((VAR_5->p_flag & (VAR_1 | VAR_2)) == 0)
   FUNC_1(&VAR_4);
 }
}
