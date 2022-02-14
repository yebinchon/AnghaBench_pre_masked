
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwarf2_debug {int dwarf_ranges_buffer; int dwarf_line_buffer; int dwarf_abbrev_buffer; struct comp_unit* all_comp_units; } ;
struct comp_unit {TYPE_1__* line_table; struct abbrev_info** abbrevs; struct comp_unit* next_unit; } ;
struct abbrev_info {struct abbrev_info* next; int attrs; } ;
typedef int bfd ;
struct TYPE_4__ {struct dwarf2_debug* dwarf2_find_line_info; } ;
struct TYPE_3__ {int files; int dirs; } ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (bfd *VAR_1)
{
  struct comp_unit *VAR_2;
  struct dwarf2_debug *VAR_3;

  if (VAR_1 == ((void*)0) || FUNC_0 (VAR_1) == ((void*)0))
    return;

  VAR_3 = FUNC_0 (VAR_1)->dwarf2_find_line_info;

  if (VAR_3 == ((void*)0))
    return;

  for (VAR_2 = VAR_3->all_comp_units; VAR_2; VAR_2 = VAR_2->next_unit)
    {
      struct abbrev_info **VAR_4 = VAR_2->abbrevs;
      size_t VAR_5;

      for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
   struct abbrev_info *VAR_6 = VAR_4[VAR_5];

   while (VAR_6)
     {
       FUNC_1 (VAR_6->attrs);
       VAR_6 = VAR_6->next;
     }
 }

      if (VAR_2->line_table)
 {
   FUNC_1 (VAR_2->line_table->dirs);
   FUNC_1 (VAR_2->line_table->files);
 }
    }

  FUNC_1 (VAR_3->dwarf_abbrev_buffer);
  FUNC_1 (VAR_3->dwarf_line_buffer);
  FUNC_1 (VAR_3->dwarf_ranges_buffer);
}
