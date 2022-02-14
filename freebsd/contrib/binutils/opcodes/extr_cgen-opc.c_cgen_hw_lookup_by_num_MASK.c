
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_entries; TYPE_2__** entries; } ;
struct TYPE_8__ {TYPE_1__ hw_table; } ;
struct TYPE_7__ {unsigned int type; } ;
typedef TYPE_2__ CGEN_HW_ENTRY ;
typedef TYPE_3__* CGEN_CPU_DESC ;



const CGEN_HW_ENTRY *
FUNC_0 (CGEN_CPU_DESC VAR_0, unsigned int VAR_1)
{
  unsigned int VAR_2;
  const CGEN_HW_ENTRY **VAR_3 = VAR_0->hw_table.entries;


  for (VAR_2 = 0; VAR_2 < VAR_0->hw_table.num_entries; ++VAR_2)
    if (VAR_3[VAR_2] && VAR_1 == VAR_3[VAR_2]->type)
      return VAR_3[VAR_2];

  return ((void*)0);
}
