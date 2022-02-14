
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
struct TYPE_6__ {TYPE_1__* first_automaton; } ;
struct TYPE_5__ {struct TYPE_5__* next_automaton; } ;


 char* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  automaton_t VAR_3;

  FUNC_0 (VAR_2, "struct %s\n{\n", VAR_0);
  for (VAR_3 = VAR_1->first_automaton;
       VAR_3 != ((void*)0);
       VAR_3 = VAR_3->next_automaton)
    {
      FUNC_0 (VAR_2, "  ");
      FUNC_2 (VAR_2, VAR_3);
      FUNC_0 (VAR_2, " ");
      FUNC_1 (VAR_2, VAR_3);
      FUNC_0 (VAR_2, ";\n");
    }
  FUNC_0 (VAR_2, "};\n\n");



}
