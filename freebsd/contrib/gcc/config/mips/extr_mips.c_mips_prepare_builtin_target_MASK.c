
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int mode; int (* predicate ) (int ,int) ;} ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static rtx
FUNC_2 (enum insn_code VAR_1, unsigned int VAR_2, rtx VAR_3)
{
  enum machine_mode VAR_4;

  VAR_4 = VAR_0[VAR_1].operand[VAR_2].mode;
  if (VAR_3 == 0 || !VAR_0[VAR_1].operand[VAR_2].predicate (VAR_3, VAR_4))
    VAR_3 = FUNC_0 (VAR_4);

  return VAR_3;
}
