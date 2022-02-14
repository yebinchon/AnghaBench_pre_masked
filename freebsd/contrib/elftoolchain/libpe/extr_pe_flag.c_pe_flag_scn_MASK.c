
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int ps_flags; } ;
typedef TYPE_1__ PE_Scn ;
typedef scalar_t__ PE_Cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(PE_Scn *VAR_6, PE_Cmd VAR_7, unsigned int VAR_8)
{

 if (VAR_6 == ((void*)0) || (VAR_7 != VAR_2 && VAR_7 != VAR_1) ||
     (VAR_8 & ~(VAR_3 | VAR_4)) == 0) {
  VAR_5 = VAR_0;
  return (-1);
 }

 if (VAR_7 == VAR_2)
  VAR_6->ps_flags |= VAR_8;
 else
  VAR_6->ps_flags &= ~VAR_8;

 return (0);
}
