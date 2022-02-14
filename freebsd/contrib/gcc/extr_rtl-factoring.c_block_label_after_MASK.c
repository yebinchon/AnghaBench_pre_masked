
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_7__ {scalar_t__ dest; } ;
struct TYPE_6__ {scalar_t__ next_bb; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_4 (rtx VAR_1)
{
  basic_block VAR_2 = FUNC_1 (VAR_1);
  if ((VAR_1 == FUNC_0 (VAR_2)) && (VAR_2->next_bb != VAR_0))
    return FUNC_2 (VAR_2->next_bb);
  else
    return FUNC_2 (FUNC_3 (VAR_2, VAR_1)->dest);
}
