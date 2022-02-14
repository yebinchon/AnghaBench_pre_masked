
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


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;

enum insn_code
FUNC_0 (enum machine_mode VAR_3, enum machine_mode VAR_4,
       int VAR_5)
{
  convert_optab VAR_6;





  VAR_6 = VAR_5 ? VAR_2 : VAR_1;
  return VAR_6->handlers[VAR_3][VAR_4].insn_code;
}
