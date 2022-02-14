
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sb_flags; } ;
typedef TYPE_1__ PE_SecBuf ;
typedef scalar_t__ PE_Cmd ;
typedef int PE_Buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(PE_Buffer *VAR_5, PE_Cmd VAR_6, unsigned int VAR_7)
{
 PE_SecBuf *VAR_8;

 if (VAR_5 == ((void*)0) || (VAR_6 != VAR_2 && VAR_6 != VAR_1) ||
     (VAR_7 & ~VAR_3) != 0) {
  VAR_4 = VAR_0;
  return (-1);
 }

 VAR_8 = (PE_SecBuf *) VAR_5;

 if (VAR_6 == VAR_2)
  VAR_8->sb_flags |= VAR_7;
 else
  VAR_8->sb_flags &= ~VAR_7;

 return (0);
}
