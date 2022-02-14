
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* automata_list_el_t ;
struct TYPE_12__ {int insn_equiv_classes_num; int achieved_states_num; int trans_table; } ;
struct TYPE_11__ {TYPE_2__* automaton; struct TYPE_11__* next_automata_list_el; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10 (automata_list_el_t VAR_5)
{
  automata_list_el_t VAR_6, VAR_7;

  FUNC_1 (VAR_4, "      {\n");
  if (VAR_5 != ((void*)0) && VAR_5->next_automata_list_el != ((void*)0))
    for (VAR_6 = VAR_5;; VAR_6 = VAR_7)
      {
        VAR_7 = VAR_6->next_automata_list_el;
        if (VAR_7 == ((void*)0))
          break;
        FUNC_1 (VAR_4, "        ");
        FUNC_3 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " ");
        FUNC_4 (VAR_4, VAR_6->automaton);
        FUNC_1 (VAR_4, ";\n");
      }
  for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->next_automata_list_el)
    if (FUNC_0 (VAR_6->automaton->trans_table))
      {
 FUNC_1 (VAR_4, "\n        %s = ", VAR_3);
 FUNC_5 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " [%s->", VAR_0);
 FUNC_2 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, "] + ");
 FUNC_9 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " [%s];\n", VAR_1);
 FUNC_1 (VAR_4, "        if (");
 FUNC_6 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " [%s] != %s->",
   VAR_3, VAR_0);
 FUNC_2 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, ")\n");
 FUNC_1 (VAR_4, "          return %s (%s, %s);\n",
   VAR_2, VAR_1,
   VAR_0);
 FUNC_1 (VAR_4, "        else\n");
 FUNC_1 (VAR_4, "          ");
 if (VAR_6->next_automata_list_el != ((void*)0))
   FUNC_4 (VAR_4, VAR_6->automaton);
 else
   {
     FUNC_1 (VAR_4, "%s->", VAR_0);
     FUNC_2 (VAR_4, VAR_6->automaton);
   }
 FUNC_1 (VAR_4, " = ");
 FUNC_7 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " [%s];\n", VAR_3);
      }
    else
      {
 FUNC_1 (VAR_4, "\n        %s = ", VAR_3);
 FUNC_8 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " [");
 FUNC_9 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " [%s] + ", VAR_1);
 FUNC_1 (VAR_4, "%s->", VAR_0);
 FUNC_2 (VAR_4, VAR_6->automaton);
 FUNC_1 (VAR_4, " * %d];\n",
   VAR_6->automaton->insn_equiv_classes_num);
 FUNC_1 (VAR_4, "        if (%s >= %d)\n",
   VAR_3, VAR_6->automaton->achieved_states_num);
 FUNC_1 (VAR_4, "          return %s (%s, %s);\n",
   VAR_2, VAR_1,
   VAR_0);
 FUNC_1 (VAR_4, "        else\n          ");
 if (VAR_6->next_automata_list_el != ((void*)0))
   FUNC_4 (VAR_4, VAR_6->automaton);
 else
   {
     FUNC_1 (VAR_4, "%s->", VAR_0);
     FUNC_2 (VAR_4, VAR_6->automaton);
   }
 FUNC_1 (VAR_4, " = %s;\n", VAR_3);
      }
  if (VAR_5 != ((void*)0) && VAR_5->next_automata_list_el != ((void*)0))
    for (VAR_6 = VAR_5;; VAR_6 = VAR_7)
      {
        VAR_7 = VAR_6->next_automata_list_el;
        if (VAR_7 == ((void*)0))
          break;
        FUNC_1 (VAR_4, "        %s->", VAR_0);
        FUNC_2 (VAR_4, VAR_6->automaton);
        FUNC_1 (VAR_4, " = ");
        FUNC_4 (VAR_4, VAR_6->automaton);
        FUNC_1 (VAR_4, ";\n");
      }
  FUNC_1 (VAR_4, "        return -1;\n");
  FUNC_1 (VAR_4, "      }\n");
}
