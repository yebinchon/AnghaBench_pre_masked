
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {scalar_t__ insn_code; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__** VAR_1 ;

int
FUNC_0 (enum rtx_code VAR_2, enum machine_mode VAR_3)
{
  return (VAR_1[(int) VAR_2] != 0
   && (VAR_1[(int) VAR_2]->handlers[(int) VAR_3].insn_code
       != VAR_0));
}
