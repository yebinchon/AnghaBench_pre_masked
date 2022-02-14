
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
struct TYPE_4__ {struct TYPE_4__* next_equiv_class_state; int component_states; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (state_t VAR_1)
{
  FUNC_0 (VAR_1->component_states);
  VAR_1->next_equiv_class_state = VAR_0;
  VAR_0 = VAR_1;
}
