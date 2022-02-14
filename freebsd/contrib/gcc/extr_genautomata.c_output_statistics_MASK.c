
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
struct TYPE_7__ {int full_vect; int comb_vect; } ;
struct TYPE_6__ {int insns_num; TYPE_1__* first_automaton; } ;
struct TYPE_5__ {int NDFA_states_num; int NDFA_arcs_num; int DFA_states_num; int DFA_arcs_num; int minimal_DFA_states_num; int minimal_DFA_arcs_num; int insn_equiv_classes_num; int locked_states; TYPE_4__* trans_table; int min_issue_delay_table_compression_factor; struct TYPE_5__* next_automaton; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_6)
{
  automaton_t VAR_7;
  int VAR_8;

  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;


  for (VAR_7 = VAR_3->first_automaton;
       VAR_7 != ((void*)0);
       VAR_7 = VAR_7->next_automaton)
    {
      FUNC_2 (VAR_6, "\nAutomaton ");
      FUNC_3 (VAR_6, VAR_7);
      FUNC_2 (VAR_6, "\n    %5d NDFA states,          %5d NDFA arcs\n",
        VAR_7->NDFA_states_num, VAR_7->NDFA_arcs_num);
      FUNC_2 (VAR_6, "    %5d DFA states,           %5d DFA arcs\n",
        VAR_7->DFA_states_num, VAR_7->DFA_arcs_num);
      VAR_8 = VAR_7->DFA_states_num;
      if (!VAR_4)
 {
   FUNC_2 (VAR_6, "    %5d minimal DFA states,   %5d minimal DFA arcs\n",
     VAR_7->minimal_DFA_states_num,
     VAR_7->minimal_DFA_arcs_num);
   VAR_8 = VAR_7->minimal_DFA_states_num;
 }
      FUNC_2 (VAR_6, "    %5d all insns      %5d insn equivalence classes\n",
        VAR_3->insns_num, VAR_7->insn_equiv_classes_num);
      FUNC_2 (VAR_6, "    %d locked states\n", VAR_7->locked_states);

      FUNC_2
 (VAR_6, "%5ld transition comb vector els, %5ld trans table els: %s\n",
  (long) FUNC_0 (VAR_5, VAR_7->trans_table->comb_vect),
  (long) FUNC_0 (VAR_5, VAR_7->trans_table->full_vect),
  (FUNC_1 (VAR_7->trans_table)
   ? "use comb vect" : "use simple vect"));
      FUNC_2
        (VAR_6, "%5ld min delay table els, compression factor %d\n",
         (long) VAR_8 * VAR_7->insn_equiv_classes_num,
  VAR_7->min_issue_delay_table_compression_factor);
      VAR_9
 += FUNC_0 (VAR_5, VAR_7->trans_table->comb_vect);
      VAR_10
        += FUNC_0 (VAR_5, VAR_7->trans_table->full_vect);
      VAR_11
 += VAR_8 * VAR_7->insn_equiv_classes_num;
      VAR_12
 += VAR_7->locked_states;

    }

  FUNC_2 (VAR_6, "\n%5d all allocated states,     %5d all allocated arcs\n",
    VAR_2, VAR_1);
  FUNC_2 (VAR_6, "%5d all allocated alternative states\n",
    VAR_0);
  FUNC_2 (VAR_6, "%5d all transition comb vector els, %5d all trans table els\n",
    VAR_9, VAR_10);
  FUNC_2 (VAR_6, "%5d all min delay table els\n", VAR_11);
  FUNC_2 (VAR_6, "%5d all locked states\n", VAR_12);

}
