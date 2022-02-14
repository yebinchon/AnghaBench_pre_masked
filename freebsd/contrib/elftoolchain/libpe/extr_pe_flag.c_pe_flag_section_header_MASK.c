
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pe_flags; } ;
struct TYPE_4__ {TYPE_2__* ps_pe; } ;
typedef TYPE_1__ PE_Scn ;
typedef scalar_t__ PE_Cmd ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(PE_Scn *VAR_6, PE_Cmd VAR_7, unsigned int VAR_8)
{
 PE *VAR_9;

 if (VAR_6 == ((void*)0) || (VAR_7 != VAR_3 && VAR_7 != VAR_2) ||
     (VAR_8 & ~VAR_4) != 0) {
  VAR_5 = VAR_0;
  return (-1);
 }

 VAR_9 = VAR_6->ps_pe;


 if (VAR_7 == VAR_3)
  VAR_9->pe_flags |= VAR_1;
 else
  VAR_9->pe_flags &= ~VAR_1;

 return (0);
}
