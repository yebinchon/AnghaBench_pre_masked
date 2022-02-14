
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef TYPE_3__* arc_t ;
struct TYPE_12__ {TYPE_1__* to_state; } ;
struct TYPE_11__ {scalar_t__ pass_num; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 void FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (state_t VAR_1, void (*VAR_2) (state_t VAR_3))
{
  arc_t VAR_4;

  if (VAR_1->pass_num == VAR_0)
    return;
  VAR_1->pass_num = VAR_0;
  (*VAR_2) (VAR_1);
  for (VAR_4 = FUNC_0 (VAR_1);
       VAR_4 != ((void*)0);
       VAR_4 = FUNC_1 (VAR_4))
    FUNC_3 (VAR_4->to_state, VAR_2);
}
