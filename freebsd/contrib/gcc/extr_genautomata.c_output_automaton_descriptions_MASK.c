
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
struct TYPE_7__ {TYPE_1__* first_automaton; } ;
struct TYPE_6__ {struct TYPE_6__* next_automaton; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  automaton_t VAR_3;

  for (VAR_3 = VAR_0->first_automaton;
       VAR_3 != ((void*)0);
       VAR_3 = VAR_3->next_automaton)
    {
      FUNC_0 (VAR_1, "\nAutomaton ");
      FUNC_1 (VAR_1, VAR_3);
      FUNC_0 (VAR_1, "\n");
      FUNC_2 (VAR_3);
      FUNC_3 (VAR_3, VAR_2);
    }
}
