
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int pe_flags; } ;
typedef scalar_t__ PE_Cmd ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;

int
FUNC_0(PE *VAR_8, PE_Cmd VAR_9, unsigned int VAR_10)
{

 if (VAR_8 == ((void*)0) || (VAR_9 != VAR_2 && VAR_9 != VAR_1)) {
  VAR_7 = VAR_0;
  return (-1);
 }

 if ((VAR_10 & ~(VAR_4 | VAR_5 |
     VAR_6 | VAR_3)) != 0) {
  VAR_7 = VAR_0;
  return (-1);
 }

 if (VAR_9 == VAR_2)
  VAR_8->pe_flags |= VAR_10;
 else
  VAR_8->pe_flags &= ~VAR_10;

 return (0);
}
