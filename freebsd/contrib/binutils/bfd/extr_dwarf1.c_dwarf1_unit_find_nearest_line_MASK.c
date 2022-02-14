
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwarf1_unit {unsigned long low_pc; unsigned long high_pc; unsigned long line_count; char* name; struct dwarf1_func* func_list; TYPE_1__* linenumber_table; scalar_t__ has_stmt_list; } ;
struct dwarf1_func {unsigned long low_pc; unsigned long high_pc; char* name; struct dwarf1_func* prev; } ;
struct dwarf1_debug {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {unsigned long addr; unsigned int linenumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwarf1_debug*,struct dwarf1_unit*) ;
 int FUNC_1 (struct dwarf1_debug*,struct dwarf1_unit*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct dwarf1_debug* VAR_2,
          struct dwarf1_unit* VAR_3,
          unsigned long VAR_4,
          const char **VAR_5,
          const char **VAR_6,
          unsigned int *VAR_7)
{
  int VAR_8 = VAR_0;
  int VAR_9 = VAR_0;

  if (VAR_3->low_pc <= VAR_4 && VAR_4 < VAR_3->high_pc)
    {
      if (VAR_3->has_stmt_list)
 {
   unsigned long VAR_10;
   struct dwarf1_func* VAR_11;

   if (! VAR_3->linenumber_table)
     {
       if (! FUNC_1 (VAR_2, VAR_3))
  return VAR_0;
     }

   if (! VAR_3->func_list)
     {
       if (! FUNC_0 (VAR_2, VAR_3))
  return VAR_0;
     }

   for (VAR_10 = 0; VAR_10 < VAR_3->line_count; VAR_10++)
     {
       if (VAR_3->linenumber_table[VAR_10].addr <= VAR_4
    && VAR_4 < VAR_3->linenumber_table[VAR_10+1].addr)
  {
    *VAR_5 = VAR_3->name;
    *VAR_7 = VAR_3->linenumber_table[VAR_10].linenumber;
    VAR_8 = VAR_1;
    break;
  }
     }

   for (VAR_11 = VAR_3->func_list;
        VAR_11;
        VAR_11 = VAR_11->prev)
     {
       if (VAR_11->low_pc <= VAR_4
    && VAR_4 < VAR_11->high_pc)
  {
    *VAR_6 = VAR_11->name;
    VAR_9 = VAR_1;
    break;
  }
     }
 }
    }

  return VAR_8 || VAR_9;
}
