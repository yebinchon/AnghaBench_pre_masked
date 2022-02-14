
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct insn_reserv_decl {int transformed_regexp; } ;
typedef TYPE_1__* automaton_t ;
struct TYPE_6__ {int * alt_states; int sorted_alt_states; struct insn_reserv_decl* insn_reserv_decl; struct TYPE_6__* next_ainsn; } ;
struct TYPE_5__ {TYPE_3__* ainsn_list; } ;


 struct insn_reserv_decl* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (automaton_t VAR_2)
{
  struct insn_reserv_decl *VAR_3;

  for (VAR_1 = VAR_2->ainsn_list;
       VAR_1 != ((void*)0);
       VAR_1 = VAR_1->next_ainsn)
    {
      VAR_3 = VAR_1->insn_reserv_decl;
      if (VAR_3 != FUNC_0 (VAR_0))
        {
          VAR_1->alt_states = ((void*)0);
          FUNC_1 (VAR_3->transformed_regexp,
        VAR_2, 0);
          VAR_1->sorted_alt_states
     = FUNC_2 (VAR_1->alt_states);
        }
    }
}
