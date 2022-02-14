
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
struct TYPE_4__ {scalar_t__ automaton; int reservs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (state_t VAR_0, state_t VAR_1)
{
  FUNC_0 (VAR_0->automaton == VAR_1->automaton);
  return FUNC_1 (VAR_0->reservs, VAR_1->reservs);
}
