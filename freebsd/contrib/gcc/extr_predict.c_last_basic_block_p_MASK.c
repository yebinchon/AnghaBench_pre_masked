
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_8__ {TYPE_1__* next_bb; } ;
struct TYPE_7__ {struct TYPE_7__* next_bb; } ;


 TYPE_1__* VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_2 (basic_block VAR_1)
{
  if (VAR_1 == VAR_0)
    return 0;

  return (VAR_1->next_bb == VAR_0
   || (VAR_1->next_bb->next_bb == VAR_0
       && FUNC_1 (VAR_1)
       && FUNC_0 (VAR_1)->next_bb == VAR_0));
}
