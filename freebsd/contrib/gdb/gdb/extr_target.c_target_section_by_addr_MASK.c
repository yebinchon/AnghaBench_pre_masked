
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {struct section_table* to_sections_end; struct section_table* to_sections; } ;
struct section_table {scalar_t__ addr; scalar_t__ endaddr; } ;
typedef scalar_t__ CORE_ADDR ;



struct section_table *
FUNC_0 (struct target_ops *VAR_0, CORE_ADDR VAR_1)
{
  struct section_table *VAR_2;
  for (VAR_2 = VAR_0->to_sections;
       VAR_2 < VAR_0->to_sections_end;
       VAR_2++)
    {
      if (VAR_1 >= VAR_2->addr && VAR_1 < VAR_2->endaddr)
 return VAR_2;
    }
  return ((void*)0);
}
