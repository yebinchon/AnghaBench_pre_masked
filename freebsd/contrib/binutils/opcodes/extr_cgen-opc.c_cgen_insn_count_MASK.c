
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_init_entries; TYPE_2__* new_entries; } ;
struct TYPE_7__ {TYPE_1__ insn_table; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ CGEN_INSN_LIST ;
typedef TYPE_3__* CGEN_CPU_DESC ;



int
FUNC_0 (CGEN_CPU_DESC VAR_0)
{
  int VAR_1 = VAR_0->insn_table.num_init_entries;
  CGEN_INSN_LIST *VAR_2 = VAR_0->insn_table.new_entries;

  for ( ; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    ++VAR_1;

  return VAR_1;
}
