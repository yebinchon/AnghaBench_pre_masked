
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct state_ainsn_table {int dummy; } ;
typedef TYPE_1__* state_ainsn_table_t ;
typedef TYPE_2__* automaton_t ;
struct TYPE_7__ {int achieved_states_num; int insn_equiv_classes_num; } ;
struct TYPE_6__ {scalar_t__ max_comb_vect_el_value; scalar_t__ min_comb_vect_el_value; scalar_t__ max_base_vect_el_value; scalar_t__ min_base_vect_el_value; void* full_vect; scalar_t__ base_vect; void* check_vect; void* comb_vect; TYPE_2__* automaton; } ;


 void* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static state_ainsn_table_t
FUNC_4 (automaton_t VAR_3)
{
  state_ainsn_table_t VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_4 = FUNC_3 (sizeof (struct state_ainsn_table));
  VAR_4->automaton = VAR_3;

  VAR_4->comb_vect = FUNC_0 (VAR_2,VAR_0, 10000);
  VAR_4->check_vect = FUNC_0 (VAR_2,VAR_0, 10000);

  VAR_4->base_vect = 0;
  FUNC_2 (VAR_2,VAR_0, VAR_4->base_vect,
   VAR_3->achieved_states_num);

  VAR_5 = (VAR_3->insn_equiv_classes_num
                      * VAR_3->achieved_states_num);
  VAR_4->full_vect = FUNC_0 (VAR_2,VAR_0, VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    FUNC_1 (VAR_2, VAR_4->full_vect, VAR_1);

  VAR_4->min_base_vect_el_value = 0;
  VAR_4->max_base_vect_el_value = 0;
  VAR_4->min_comb_vect_el_value = 0;
  VAR_4->max_comb_vect_el_value = 0;
  return VAR_4;
}
