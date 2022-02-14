
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cgen_parse_operand_fn ;
struct TYPE_3__ {int parse_operand_fn; } ;
typedef TYPE_1__* CGEN_CPU_DESC ;



void
FUNC_0 (CGEN_CPU_DESC VAR_0, cgen_parse_operand_fn VAR_1)
{
  VAR_0->parse_operand_fn = VAR_1;
}
