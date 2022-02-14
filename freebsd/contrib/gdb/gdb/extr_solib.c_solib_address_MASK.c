
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_list {char* so_name; struct section_table* sections_end; struct section_table* sections; struct so_list* next; } ;
struct section_table {scalar_t__ addr; scalar_t__ endaddr; } ;
typedef scalar_t__ CORE_ADDR ;


 struct so_list* VAR_0 ;

char *
FUNC_0 (CORE_ADDR VAR_1)
{
  struct so_list *VAR_2 = 0;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    {
      struct section_table *VAR_3;

      for (VAR_3 = VAR_2->sections; VAR_3 < VAR_2->sections_end; VAR_3++)
 {
   if (VAR_3->addr <= VAR_1 && VAR_1 < VAR_3->endaddr)
     return (VAR_2->so_name);
 }
    }

  return (0);
}
