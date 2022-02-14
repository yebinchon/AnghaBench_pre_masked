
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

const char *
FUNC_0 ()
{
  if (VAR_2 == VAR_3)
    {
      if (VAR_4.flags & VAR_1)
 {
   if (VAR_4.flags & VAR_0)





     return "elf64-ia64-big";

   else





     return "elf32-ia64-big";

 }
      else
 {
   if (VAR_4.flags & VAR_0)





     return "elf64-ia64-little";

   else



     return "elf32-ia64-little";

 }
    }
  else
    return "unknown-format";
}
