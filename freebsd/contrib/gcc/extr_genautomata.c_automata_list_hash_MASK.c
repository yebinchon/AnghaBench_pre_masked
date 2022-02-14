
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int hashval_t ;
typedef TYPE_2__* automata_list_el_t ;
struct TYPE_4__ {TYPE_1__* automaton; struct TYPE_4__* next_automata_list_el; } ;
struct TYPE_3__ {unsigned int automaton_order_num; } ;


 int VAR_0 ;

__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_1)
{
  unsigned int VAR_2;
  automata_list_el_t VAR_3;

  VAR_2 = 0;
  for (VAR_3 = (automata_list_el_t) VAR_1;
       VAR_3 != ((void*)0);
       VAR_3 = VAR_3->next_automata_list_el)
    VAR_2 = (((VAR_2 >> (sizeof (unsigned) - 1) * VAR_0)
     | (VAR_2 << VAR_0))
    + VAR_3->automaton->automaton_order_num);
  return VAR_2;
}
