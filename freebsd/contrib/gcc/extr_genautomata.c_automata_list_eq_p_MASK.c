
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* automata_list_el_t ;
struct TYPE_2__ {scalar_t__ automaton; struct TYPE_2__* next_automata_list_el; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  automata_list_el_t VAR_2;
  automata_list_el_t VAR_3;

  for (VAR_2 = (automata_list_el_t) VAR_0,
  VAR_3 = (automata_list_el_t) VAR_1;
       VAR_2 != ((void*)0) && VAR_3 != ((void*)0);
       VAR_2 = VAR_2->next_automata_list_el,
  VAR_3 = VAR_3->next_automata_list_el)
    if (VAR_2->automaton != VAR_3->automaton)
      return 0;
  return VAR_2 == VAR_3;
}
