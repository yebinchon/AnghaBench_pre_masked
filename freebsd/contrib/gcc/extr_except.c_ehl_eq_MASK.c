
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehl_map_entry {scalar_t__ label; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  struct ehl_map_entry *VAR_2 = (struct ehl_map_entry *) VAR_0;
  struct ehl_map_entry *VAR_3 = (struct ehl_map_entry *) VAR_1;

  return VAR_2->label == VAR_3->label;
}
