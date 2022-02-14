
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ia64_opcode {int dummy; } ;
typedef int ia64_insn ;
struct TYPE_4__ {int dependencies; scalar_t__ terminal_completer; } ;
struct TYPE_3__ {short name_index; int opcode; } ;


 int FUNC_0 (int ,short) ;
 TYPE_2__* VAR_0 ;
 short FUNC_1 (short,short,char const*) ;
 short FUNC_2 (char*) ;
 int FUNC_3 (char const**,char*) ;
 TYPE_1__* VAR_1 ;
 struct ia64_opcode* FUNC_4 (int ,char const*,short,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static struct ia64_opcode *
FUNC_6 (const char *VAR_2, short VAR_3)
{
  char VAR_4[129];
  const char *VAR_5;
  short VAR_6;

  if (FUNC_5 (VAR_2) > 128)
    {
      return ((void*)0);
    }
  VAR_5 = VAR_2;
  FUNC_3 (&VAR_5, VAR_4);
  VAR_6 = FUNC_2 (VAR_4);
  if (VAR_6 < 0)
    {
      return ((void*)0);
    }

  while (VAR_1[VAR_3].name_index == VAR_6)
    {
      const char *VAR_7 = VAR_5;
      ia64_insn VAR_8 = VAR_1[VAR_3].opcode;
      short VAR_9 = -1;

      do {
 if (VAR_5[0] == '\0')
   {
     VAR_9 = FUNC_1 (VAR_3, VAR_9, VAR_5);
   }
 else
   {
     FUNC_3 (&VAR_7, VAR_4);
     VAR_9 = FUNC_1 (VAR_3, VAR_9, VAR_4);
   }
 if (VAR_9 != -1)
   {
     VAR_8 = FUNC_0 (VAR_8, VAR_9);
   }
      } while (VAR_9 != -1 && VAR_7[0] != '\0');

      if (VAR_9 != -1 && VAR_7[0] == '\0'
   && VAR_0[VAR_9].terminal_completer)
 {
          int VAR_10 = VAR_0[VAR_9].dependencies;
   return FUNC_4 (VAR_8, VAR_2, VAR_3, VAR_10);
 }
      else
 {
   VAR_3++;
 }
    }
  return ((void*)0);
}
