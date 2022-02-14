
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_7__ {struct TYPE_7__* prev_bb; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_2 (basic_block VAR_0, basic_block VAR_1)
{
  if (VAR_0->prev_bb == VAR_1)
    return 1;

  FUNC_1 (VAR_0);
  FUNC_0 (VAR_0, VAR_1);

  return 1;
}
