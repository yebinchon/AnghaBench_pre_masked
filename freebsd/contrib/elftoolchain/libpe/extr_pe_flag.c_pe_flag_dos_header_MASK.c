
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pe_flags; } ;
typedef scalar_t__ PE_Cmd ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(PE *VAR_6, PE_Cmd VAR_7, unsigned int VAR_8)
{

 if (VAR_6 == ((void*)0) || (VAR_7 != VAR_3 && VAR_7 != VAR_2) ||
     (VAR_8 & ~VAR_4) != 0) {
  VAR_5 = VAR_0;
  return (-1);
 }

 if (VAR_7 == VAR_3)
  VAR_6->pe_flags |= VAR_1;
 else
  VAR_6->pe_flags &= ~VAR_1;

 return (0);
}
