
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
typedef TYPE_2__* automata_list_el_t ;
struct TYPE_8__ {TYPE_1__* automaton; struct TYPE_8__* next_automata_list_el; } ;
struct TYPE_7__ {int min_issue_delay_table_compression_factor; int insn_equiv_classes_num; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (automata_list_el_t VAR_5)
{
  automata_list_el_t VAR_6;
  automaton_t VAR_7;

  for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->next_automata_list_el)
    {
      VAR_7 = VAR_6->automaton;
      FUNC_0 (VAR_4, "\n      %s = ", VAR_3);
      FUNC_2 (VAR_4, VAR_7);
      FUNC_0 (VAR_4,
        (VAR_7->min_issue_delay_table_compression_factor != 1
  ? " [(" : " ["));
      FUNC_3 (VAR_4, VAR_7);
      FUNC_0 (VAR_4, " [%s] + ", VAR_1);
      FUNC_0 (VAR_4, "%s->", VAR_0);
      FUNC_1 (VAR_4, VAR_7);
      FUNC_0 (VAR_4, " * %d", VAR_7->insn_equiv_classes_num);
      if (VAR_7->min_issue_delay_table_compression_factor == 1)
 FUNC_0 (VAR_4, "];\n");
      else
 {
   FUNC_0 (VAR_4, ") / %d];\n",
     VAR_7->min_issue_delay_table_compression_factor);
   FUNC_0 (VAR_4, "      %s = (%s >> (8 - (",
     VAR_3, VAR_3);
   FUNC_3 (VAR_4, VAR_7);
   FUNC_0
     (VAR_4, " [%s] %% %d + 1) * %d)) & %d;\n",
      VAR_1,
      VAR_7->min_issue_delay_table_compression_factor,
      8 / VAR_7->min_issue_delay_table_compression_factor,
      (1 << (8 / VAR_7->min_issue_delay_table_compression_factor))
      - 1);
 }
      if (VAR_6 == VAR_5)
 FUNC_0 (VAR_4, "      %s = %s;\n",
   VAR_2, VAR_3);
      else
 {
   FUNC_0 (VAR_4, "      if (%s > %s)\n",
     VAR_3, VAR_2);
   FUNC_0 (VAR_4, "        %s = %s;\n",
     VAR_2, VAR_3);
 }
    }
  FUNC_0 (VAR_4, "      break;\n\n");
}
