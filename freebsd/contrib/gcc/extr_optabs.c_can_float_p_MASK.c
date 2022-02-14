
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
typedef TYPE_2__* convert_optab ;
struct TYPE_6__ {TYPE_1__** handlers; } ;
struct TYPE_5__ {int insn_code; } ;


 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static enum insn_code
FUNC_0 (enum machine_mode VAR_2, enum machine_mode VAR_3,
      int VAR_4)
{
  convert_optab VAR_5;

  VAR_5 = VAR_4 ? VAR_1 : VAR_0;
  return VAR_5->handlers[VAR_2][VAR_3].insn_code;
}
