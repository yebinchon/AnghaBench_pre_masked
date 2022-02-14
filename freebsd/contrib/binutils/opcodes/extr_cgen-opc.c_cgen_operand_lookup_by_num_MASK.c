
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const** entries; } ;
struct TYPE_5__ {TYPE_1__ operand_table; } ;
typedef int CGEN_OPERAND ;
typedef TYPE_2__* CGEN_CPU_DESC ;



const CGEN_OPERAND *
FUNC_0 (CGEN_CPU_DESC VAR_0, int VAR_1)
{
  return VAR_0->operand_table.entries[VAR_1];
}
