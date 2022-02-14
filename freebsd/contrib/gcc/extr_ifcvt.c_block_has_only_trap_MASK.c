
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_6__ {int succs; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static rtx
FUNC_6 (basic_block VAR_4)
{
  rtx VAR_5;


  if (VAR_4 == VAR_0)
    return VAR_1;


  if (FUNC_1 (VAR_4->succs) > 0)
    return VAR_1;


  VAR_5 = FUNC_5 (VAR_4);
  if (! (VAR_5 == FUNC_0 (VAR_4)
  && FUNC_2 (FUNC_3 (VAR_5)) == VAR_2
         && FUNC_4 (FUNC_3 (VAR_5)) == VAR_3))
    return VAR_1;

  return VAR_5;
}
