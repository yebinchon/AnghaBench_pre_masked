
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ state_t ;
typedef TYPE_1__* arc_t ;
typedef scalar_t__ ainsn_t ;
struct TYPE_6__ {scalar_t__ to_state; scalar_t__ insn; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static arc_t
FUNC_2 (state_t VAR_0, state_t VAR_1, ainsn_t VAR_2)
{
  arc_t VAR_3;

  for (VAR_3 = FUNC_0 (VAR_0); VAR_3 != ((void*)0); VAR_3 = FUNC_1 (VAR_3))
    if (VAR_3->to_state == VAR_1 && VAR_3->insn == VAR_2)
      return VAR_3;
  return ((void*)0);
}
