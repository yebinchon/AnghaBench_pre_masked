
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int reserv_sets_t ;
typedef TYPE_1__* automaton_t ;
struct TYPE_7__ {int units_num; } ;
struct TYPE_6__ {scalar_t__ automaton_decl; int min_occ_cycle_num; scalar_t__ in_set_p; scalar_t__ query_p; } ;
struct TYPE_5__ {scalar_t__ corresponding_automaton_decl; } ;


 int FUNC_0 () ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static reserv_sets_t
FUNC_2 (automaton_t VAR_3)
{
  int VAR_4, VAR_5;
  reserv_sets_t VAR_6 = FUNC_0();

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    for (VAR_5 = 0; VAR_5 < VAR_0->units_num; VAR_5++)
      if (VAR_2 [VAR_5]->automaton_decl
   == VAR_3->corresponding_automaton_decl
   && (VAR_4 >= VAR_2 [VAR_5]->min_occ_cycle_num

       || VAR_2 [VAR_5]->query_p




       || VAR_2 [VAR_5]->in_set_p))
 FUNC_1 (VAR_6, VAR_4, VAR_5);
  return VAR_6;
}
