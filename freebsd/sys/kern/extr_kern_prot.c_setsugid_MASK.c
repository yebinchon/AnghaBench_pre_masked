
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_pfsflags; scalar_t__ p_stops; int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_2 ;

void
FUNC_1(struct proc *VAR_3)
{

 FUNC_0(VAR_3, VAR_0);
 VAR_3->p_flag |= VAR_2;
 if (!(VAR_3->p_pfsflags & VAR_1))
  VAR_3->p_stops = 0;
}
