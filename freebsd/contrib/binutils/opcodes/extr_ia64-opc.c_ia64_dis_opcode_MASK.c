
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ia64_opcode {int dummy; } ;
typedef int ia64_insn ;
typedef enum ia64_insn_type { ____Placeholder_ia64_insn_type } ia64_insn_type ;
struct TYPE_6__ {int name_index; int subentries; int alternative; int dependencies; } ;
struct TYPE_5__ {unsigned int completer_index; int insn_index; } ;
struct TYPE_4__ {int completers; int opcode; size_t name_index; int mask; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 char** VAR_2 ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_3 ;
 struct ia64_opcode* FUNC_3 (int,char*,int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

struct ia64_opcode *
FUNC_6 (ia64_insn VAR_4, enum ia64_insn_type VAR_5)
{
  int VAR_6 = FUNC_2 (VAR_4, VAR_5);

  if (VAR_6 < 0)
    {
      return ((void*)0);
    }
  else
    {
      unsigned int VAR_7 = VAR_1[VAR_6].completer_index;
      static char VAR_8[128];
      int VAR_9 = VAR_1[VAR_6].insn_index;
      int VAR_10 = VAR_3[VAR_9].completers;
      ia64_insn VAR_11 = VAR_3[VAR_9].opcode;

      FUNC_5 (VAR_8, VAR_2 [VAR_3[VAR_9].name_index]);

      while (VAR_7)
 {
   if (VAR_7 & 1)
     {
       int VAR_12 = VAR_0[VAR_10].name_index;

       VAR_11 = FUNC_1 (VAR_11, VAR_10);

       if (VAR_2[VAR_12][0] != '\0')
  {
    FUNC_4 (VAR_8, ".");
    FUNC_4 (VAR_8, VAR_2[VAR_12]);
  }
       if (VAR_7 != 1)
  {
    VAR_10 = VAR_0[VAR_10].subentries;
  }
     }
   else
     {
       VAR_10 = VAR_0[VAR_10].alternative;
     }
   if (VAR_10 < 0)
     {
       FUNC_0 ();
     }
   VAR_7 = VAR_7 >> 1;
 }
      if (VAR_11 != (VAR_4 & VAR_3[VAR_9].mask))
 {
   FUNC_0 ();
 }
      return FUNC_3 (VAR_4, VAR_8, VAR_9,
                               VAR_0[VAR_10].dependencies);
    }
}
