
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int entry_size; int num_init_entries; TYPE_2__* init_entries; } ;
struct TYPE_9__ {TYPE_1__ insn_table; } ;
struct TYPE_8__ {int const* base; } ;
typedef TYPE_2__ CGEN_INSN ;
typedef int CGEN_IBASE ;
typedef TYPE_3__ CGEN_CPU_TABLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (CGEN_CPU_TABLE *VAR_2)
{
  int VAR_3;
  const CGEN_IBASE *VAR_4 = & VAR_1[0];
  CGEN_INSN *VAR_5 = FUNC_1 (VAR_0 * sizeof (CGEN_INSN));

  FUNC_0 (VAR_5, 0, VAR_0 * sizeof (CGEN_INSN));
  for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    VAR_5[VAR_3].base = &VAR_4[VAR_3];
  VAR_2->insn_table.init_entries = VAR_5;
  VAR_2->insn_table.entry_size = sizeof (CGEN_IBASE);
  VAR_2->insn_table.num_init_entries = VAR_0;
}
