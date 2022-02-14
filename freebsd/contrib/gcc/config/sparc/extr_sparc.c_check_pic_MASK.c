
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * operand; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

int
FUNC_3 (int VAR_6)
{
  switch (VAR_3)
    {
    case 1:
      FUNC_2 (FUNC_0 (VAR_5.operand[VAR_6]) != VAR_2
      && (FUNC_0 (VAR_5.operand[VAR_6]) != VAR_0
           || (FUNC_0 (FUNC_1 (VAR_5.operand[VAR_6], 0)) == VAR_1
        && (FUNC_1 (FUNC_1 (VAR_5.operand[VAR_6], 0), 0)
     == VAR_4)
        && (FUNC_0 (FUNC_1 (FUNC_1 (VAR_5.operand[VAR_6], 0), 1))
     == VAR_0))));
    case 2:
    default:
      return 1;
    }
}
