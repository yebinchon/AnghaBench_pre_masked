
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef int reserv_sets_t ;
struct TYPE_8__ {int reservs; int automaton; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static state_t
FUNC_5 (state_t VAR_0, reserv_sets_t VAR_1)
{
  state_t VAR_2;
  state_t VAR_3;

  VAR_2 = FUNC_1 (1, VAR_0->automaton);
  FUNC_4 (VAR_2->reservs, VAR_0->reservs);
  FUNC_3 (VAR_2->reservs, VAR_2->reservs, VAR_1);
  VAR_3 = FUNC_2 (VAR_2);
  if (VAR_2 != VAR_3)
    {
      FUNC_0 (VAR_2);
      VAR_2 = VAR_3;
    }
  return VAR_2;
}
