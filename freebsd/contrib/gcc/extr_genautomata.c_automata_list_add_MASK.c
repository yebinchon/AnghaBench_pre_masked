
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int automaton_t ;
typedef TYPE_1__* automata_list_el_t ;
struct TYPE_4__ {struct TYPE_4__* next_automata_list_el; int automaton; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (automaton_t VAR_1)
{
  automata_list_el_t VAR_2;

  VAR_2 = FUNC_0 ();
  VAR_2->automaton = VAR_1;
  VAR_2->next_automata_list_el = VAR_0;
  VAR_0 = VAR_2;
}
