
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int entry_size; int num_entries; TYPE_2__ const** entries; TYPE_2__ const* init_entries; } ;
struct TYPE_10__ {int machs; TYPE_1__ hw_table; } ;
struct TYPE_9__ {size_t type; int * name; } ;
typedef TYPE_2__ CGEN_HW_ENTRY ;
typedef TYPE_3__ CGEN_CPU_TABLE ;


 int FUNC_0 (TYPE_2__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__ const**,int ,int) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (CGEN_CPU_TABLE *VAR_3)
{
  int VAR_4;
  int VAR_5 = VAR_3->machs;
  const CGEN_HW_ENTRY *VAR_6 = & VAR_2[0];



  const CGEN_HW_ENTRY **VAR_7 =
    (const CGEN_HW_ENTRY **) FUNC_2 (VAR_1 * sizeof (CGEN_HW_ENTRY *));

  VAR_3->hw_table.init_entries = VAR_6;
  VAR_3->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  FUNC_1 (VAR_7, 0, VAR_1 * sizeof (CGEN_HW_ENTRY *));

  for (VAR_4 = 0; VAR_6[VAR_4].name != ((void*)0); ++VAR_4)
    if (FUNC_0 (&VAR_6[VAR_4], VAR_0)
 & VAR_5)
      VAR_7[VAR_6[VAR_4].type] = &VAR_6[VAR_4];
  VAR_3->hw_table.entries = VAR_7;
  VAR_3->hw_table.num_entries = VAR_1;
}
