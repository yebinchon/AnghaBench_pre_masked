
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ entries; } ;
struct TYPE_13__ {scalar_t__ entries; } ;
struct TYPE_12__ {unsigned int num_init_entries; TYPE_5__* init_entries; } ;
struct TYPE_11__ {unsigned int num_init_entries; TYPE_5__* init_entries; } ;
struct TYPE_15__ {TYPE_4__ operand_table; TYPE_3__ hw_table; TYPE_2__ insn_table; TYPE_1__ macro_insn_table; } ;
typedef TYPE_5__ CGEN_INSN ;
typedef TYPE_5__ CGEN_HW_ENTRY ;
typedef TYPE_5__* CGEN_CPU_DESC ;


 scalar_t__ FUNC_0 (TYPE_5__ const*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3 (CGEN_CPU_DESC VAR_0)
{
  unsigned int VAR_1;
  const CGEN_INSN *VAR_2;

  if (VAR_0->macro_insn_table.init_entries)
    {
      VAR_2 = VAR_0->macro_insn_table.init_entries;
      for (VAR_1 = 0; VAR_1 < VAR_0->macro_insn_table.num_init_entries; ++VAR_1, ++VAR_2)
 if (FUNC_0 ((VAR_2)))
   FUNC_2 (FUNC_0 (VAR_2));
    }

  if (VAR_0->insn_table.init_entries)
    {
      VAR_2 = VAR_0->insn_table.init_entries;
      for (VAR_1 = 0; VAR_1 < VAR_0->insn_table.num_init_entries; ++VAR_1, ++VAR_2)
 if (FUNC_0 (VAR_2))
   FUNC_2 (FUNC_0 (VAR_2));
    }

  if (VAR_0->macro_insn_table.init_entries)
    FUNC_1 ((CGEN_INSN *) VAR_0->macro_insn_table.init_entries);

  if (VAR_0->insn_table.init_entries)
    FUNC_1 ((CGEN_INSN *) VAR_0->insn_table.init_entries);

  if (VAR_0->hw_table.entries)
    FUNC_1 ((CGEN_HW_ENTRY *) VAR_0->hw_table.entries);

  if (VAR_0->operand_table.entries)
    FUNC_1 ((CGEN_HW_ENTRY *) VAR_0->operand_table.entries);

  FUNC_1 (VAR_0);
}
