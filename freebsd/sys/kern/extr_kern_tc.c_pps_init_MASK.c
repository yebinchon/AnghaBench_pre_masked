
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_state {int ppscap; int kcmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_0(struct pps_state *VAR_8)
{
 VAR_8->ppscap |= VAR_7 | VAR_1;
 if (VAR_8->ppscap & VAR_2)
  VAR_8->ppscap |= VAR_4;
 if (VAR_8->ppscap & VAR_3)
  VAR_8->ppscap |= VAR_5;



 VAR_8->kcmode &= ~VAR_0;
}
