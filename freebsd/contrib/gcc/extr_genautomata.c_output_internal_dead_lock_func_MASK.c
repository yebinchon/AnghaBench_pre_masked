
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
struct TYPE_6__ {TYPE_1__* first_automaton; } ;
struct TYPE_5__ {scalar_t__ locked_states; struct TYPE_5__* next_automaton; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  automaton_t VAR_5;

  FUNC_0 (VAR_4, "static int\n%s (struct %s *ARG_UNUSED (%s))\n",
    VAR_2, VAR_0, VAR_1);
  FUNC_0 (VAR_4, "{\n");
  for (VAR_5 = VAR_3->first_automaton;
       VAR_5 != ((void*)0);
       VAR_5 = VAR_5->next_automaton)
    if (VAR_5->locked_states)
      {
 FUNC_0 (VAR_4, "  if (");
 FUNC_2 (VAR_4, VAR_5);
 FUNC_0 (VAR_4, " [%s->", VAR_1);
 FUNC_1 (VAR_4, VAR_5);
 FUNC_0 (VAR_4, "])\n    return 1/* TRUE */;\n");
      }
  FUNC_0 (VAR_4, "  return 0/* FALSE */;\n}\n\n");
}
