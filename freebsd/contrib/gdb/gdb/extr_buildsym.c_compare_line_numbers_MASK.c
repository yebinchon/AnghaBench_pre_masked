
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linetable_entry {scalar_t__ pc; int line; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  struct linetable_entry *VAR_2 = (struct linetable_entry *) VAR_0;
  struct linetable_entry *VAR_3 = (struct linetable_entry *) VAR_1;



  if (VAR_2->pc < VAR_3->pc)
    return -1;

  if (VAR_2->pc > VAR_3->pc)
    return 1;



  return VAR_2->line - VAR_3->line;
}
