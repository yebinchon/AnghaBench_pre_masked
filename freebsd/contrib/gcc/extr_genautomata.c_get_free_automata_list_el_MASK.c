
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct automata_list_el {int dummy; } ;
typedef TYPE_1__* automata_list_el_t ;
struct TYPE_5__ {struct TYPE_5__* next_automata_list_el; int * automaton; } ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static automata_list_el_t
FUNC_1 (void)
{
  automata_list_el_t VAR_1;

  if (VAR_0 != ((void*)0))
    {
      VAR_1 = VAR_0;
      VAR_0
 = VAR_0->next_automata_list_el;
    }
  else
    VAR_1 = FUNC_0 (sizeof (struct automata_list_el));
  VAR_1->automaton = ((void*)0);
  VAR_1->next_automata_list_el = ((void*)0);
  return VAR_1;
}
