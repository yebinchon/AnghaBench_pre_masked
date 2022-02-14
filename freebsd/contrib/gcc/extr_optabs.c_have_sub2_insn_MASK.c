
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_8__ {TYPE_2__* operand; } ;
struct TYPE_7__ {TYPE_1__* handlers; } ;
struct TYPE_6__ {int mode; int (* predicate ) (int ,int ) ;} ;
struct TYPE_5__ {scalar_t__ insn_code; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_3 ;

int
FUNC_5 (rtx VAR_4, rtx VAR_5)
{
  int VAR_6;

  FUNC_1 (FUNC_0 (VAR_4) != VAR_1);

  VAR_6 = (int) VAR_3->handlers[(int) FUNC_0 (VAR_4)].insn_code;

  if (VAR_6 == VAR_0)
    return 0;

  if (!(VAR_2[VAR_6].operand[0].predicate
 (VAR_4, VAR_2[VAR_6].operand[0].mode))
      || !(VAR_2[VAR_6].operand[1].predicate
    (VAR_4, VAR_2[VAR_6].operand[1].mode))
      || !(VAR_2[VAR_6].operand[2].predicate
    (VAR_5, VAR_2[VAR_6].operand[2].mode)))
    return 0;

  return 1;
}
