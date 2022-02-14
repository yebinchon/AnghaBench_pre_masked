
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* automaton_t ;
typedef TYPE_4__* ainsn_t ;
struct TYPE_10__ {TYPE_3__* first_automaton; } ;
struct TYPE_9__ {TYPE_2__* insn_reserv_decl; struct TYPE_9__* next_same_reservs_insn; int arc_exists_p; scalar_t__ first_insn_with_same_reservs; struct TYPE_9__* next_ainsn; } ;
struct TYPE_8__ {TYPE_1__* corresponding_automaton_decl; TYPE_4__* ainsn_list; struct TYPE_8__* next_automaton; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {int name; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,...) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  automaton_t VAR_2;
  ainsn_t VAR_3, VAR_4;

  for (VAR_2 = VAR_0->first_automaton;
       VAR_2 != ((void*)0);
       VAR_2 = VAR_2->next_automaton)
    {
      for (VAR_3 = VAR_2->ainsn_list;
    VAR_3 != ((void*)0);
    VAR_3 = VAR_3->next_ainsn)
 if (VAR_3->first_insn_with_same_reservs && !VAR_3->arc_exists_p)
   {
     for (VAR_4 = VAR_3;
   VAR_4 != ((void*)0);
   VAR_4 = VAR_4->next_same_reservs_insn)
       if (VAR_2->corresponding_automaton_decl != ((void*)0))
  {
    if (!VAR_1)
      FUNC_0 ("Automaton `%s': Insn `%s' will never be issued",
      VAR_2->corresponding_automaton_decl->name,
      VAR_4->insn_reserv_decl->name);
    else
      FUNC_1
        (0, "Automaton `%s': Insn `%s' will never be issued",
         VAR_2->corresponding_automaton_decl->name,
         VAR_4->insn_reserv_decl->name);
  }
       else
  {
    if (!VAR_1)
      FUNC_0 ("Insn `%s' will never be issued",
      VAR_4->insn_reserv_decl->name);
    else
      FUNC_1 (0, "Insn `%s' will never be issued",
        VAR_4->insn_reserv_decl->name);
  }
   }
    }
}
