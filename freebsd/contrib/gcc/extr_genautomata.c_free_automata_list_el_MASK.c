
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* automata_list_el_t ;
struct TYPE_4__ {struct TYPE_4__* next_automata_list_el; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (automata_list_el_t VAR_1)
{
  if (VAR_1 == ((void*)0))
    return;
  VAR_1->next_automata_list_el = VAR_0;
  VAR_0 = VAR_1;
}
