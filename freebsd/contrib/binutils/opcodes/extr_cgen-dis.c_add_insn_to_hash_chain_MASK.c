
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int const* insn; } ;
typedef TYPE_1__ CGEN_INSN_LIST ;
typedef int CGEN_INSN ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static void
FUNC_1 (CGEN_INSN_LIST *VAR_0,
   const CGEN_INSN *VAR_1,
   CGEN_INSN_LIST **VAR_2,
   unsigned int VAR_3)
{
  CGEN_INSN_LIST *VAR_4;
  CGEN_INSN_LIST *VAR_5;
  int VAR_6;




  VAR_6 = FUNC_0 (VAR_1);
  VAR_5 = ((void*)0);
  for (VAR_4 = VAR_2[VAR_3]; VAR_4 != ((void*)0);
       VAR_4 = VAR_4->next)
    {
      int VAR_7 = FUNC_0 (VAR_4->insn);
      if (VAR_6 >= VAR_7)
 break;
      VAR_5 = VAR_4;
    }


  VAR_0->insn = VAR_1;
  VAR_0->next = VAR_4;
  if (VAR_5 == ((void*)0))
    VAR_2[VAR_3] = VAR_0;
  else
    VAR_5->next = VAR_0;
}
