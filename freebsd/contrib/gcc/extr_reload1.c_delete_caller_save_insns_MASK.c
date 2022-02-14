
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_chain {struct insn_chain* next; TYPE_1__* prev; int insn; scalar_t__ is_caller_save_insn; } ;
typedef int rtx ;
struct TYPE_2__ {struct insn_chain* next; } ;


 int FUNC_0 (int ) ;
 struct insn_chain* VAR_0 ;
 struct insn_chain* VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct insn_chain *VAR_2 = VAR_0;

  while (VAR_2 != 0)
    {
      while (VAR_2 != 0 && VAR_2->is_caller_save_insn)
 {
   struct insn_chain *VAR_3 = VAR_2->next;
   rtx VAR_4 = VAR_2->insn;

   if (VAR_2 == VAR_0)
     VAR_0 = VAR_3;
   FUNC_0 (VAR_4);

   if (VAR_3)
     VAR_3->prev = VAR_2->prev;
   if (VAR_2->prev)
     VAR_2->prev->next = VAR_3;
   VAR_2->next = VAR_1;
   VAR_1 = VAR_2;
   VAR_2 = VAR_3;
 }
      if (VAR_2 != 0)
 VAR_2 = VAR_2->next;
    }
}
