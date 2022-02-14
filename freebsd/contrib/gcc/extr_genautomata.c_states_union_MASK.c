
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef int reserv_sets_t ;
struct TYPE_9__ {scalar_t__ automaton; int reservs; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static state_t
FUNC_6 (state_t VAR_0, state_t VAR_1, reserv_sets_t VAR_2)
{
  state_t VAR_3;
  state_t VAR_4;

  FUNC_1 (VAR_0->automaton == VAR_1->automaton);
  VAR_3 = FUNC_2 (1, VAR_0->automaton);
  FUNC_5 (VAR_3->reservs, VAR_0->reservs, VAR_1->reservs);
  FUNC_4 (VAR_3->reservs, VAR_3->reservs, VAR_2);
  VAR_4 = FUNC_3 (VAR_3);
  if (VAR_3 != VAR_4)
    {
      FUNC_0 (VAR_3);
      VAR_3 = VAR_4;
    }
  return VAR_3;
}
