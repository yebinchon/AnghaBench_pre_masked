
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_ptevents; int p_flag2; int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct proc *VAR_6, bool VAR_7)
{

 FUNC_1(&VAR_5, VAR_4);
 FUNC_0(VAR_6, VAR_0);
 VAR_6->p_flag |= VAR_3;
 if (VAR_7)
  VAR_6->p_flag2 |= VAR_1;
 VAR_6->p_ptevents = VAR_2;
}
