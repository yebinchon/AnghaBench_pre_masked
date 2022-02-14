
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* automaton_t ;
struct TYPE_9__ {int NDFA_states_num; int NDFA_arcs_num; int DFA_states_num; int DFA_arcs_num; int minimal_DFA_states_num; int minimal_DFA_arcs_num; TYPE_1__* corresponding_automaton_decl; } ;
struct TYPE_8__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int*,int*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7 (automaton_t VAR_6)
{
  int VAR_7;
  int VAR_8;

  FUNC_6 (&VAR_0);
  if (VAR_4)
    {
      if (VAR_6->corresponding_automaton_decl == ((void*)0))
 FUNC_2 (VAR_5, "Create anonymous automaton");
      else
 FUNC_2 (VAR_5, "Create automaton `%s'",
   VAR_6->corresponding_automaton_decl->name);
      FUNC_2 (VAR_5, " (1 dot is 100 new states):");
    }
  FUNC_3 (VAR_6);
  if (VAR_4)
    FUNC_2 (VAR_5, " done\n");
  FUNC_5 (&VAR_0);
  FUNC_1 (VAR_6, &VAR_7, &VAR_8);
  VAR_6->NDFA_states_num = VAR_7;
  VAR_6->NDFA_arcs_num = VAR_8;
  FUNC_6 (&VAR_1);
  if (VAR_4)
    {
      if (VAR_6->corresponding_automaton_decl == ((void*)0))
 FUNC_2 (VAR_5, "Make anonymous DFA");
      else
 FUNC_2 (VAR_5, "Make DFA `%s'",
   VAR_6->corresponding_automaton_decl->name);
      FUNC_2 (VAR_5, " (1 dot is 100 new states):");
    }
  FUNC_0 (VAR_6);
  if (VAR_4)
    FUNC_2 (VAR_5, " done\n");
  FUNC_5 (&VAR_1);
  FUNC_1 (VAR_6, &VAR_7, &VAR_8);
  VAR_6->DFA_states_num = VAR_7;
  VAR_6->DFA_arcs_num = VAR_8;
  if (!VAR_3)
    {
      FUNC_6 (&VAR_2);
      if (VAR_4)
 {
   if (VAR_6->corresponding_automaton_decl == ((void*)0))
     FUNC_2 (VAR_5, "Minimize anonymous DFA...");
   else
     FUNC_2 (VAR_5, "Minimize DFA `%s'...",
       VAR_6->corresponding_automaton_decl->name);
 }
      FUNC_4 (VAR_6);
      if (VAR_4)
 FUNC_2 (VAR_5, "done\n");
      FUNC_5 (&VAR_2);
      FUNC_1 (VAR_6, &VAR_7, &VAR_8);
      VAR_6->minimal_DFA_states_num = VAR_7;
      VAR_6->minimal_DFA_arcs_num = VAR_8;
    }
}
