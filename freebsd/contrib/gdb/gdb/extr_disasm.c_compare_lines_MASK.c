
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dis_line_entry {int line; int start_pc; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  struct dis_line_entry *VAR_2, *VAR_3;
  int VAR_4;

  VAR_2 = (struct dis_line_entry *) VAR_0;
  VAR_3 = (struct dis_line_entry *) VAR_1;

  VAR_4 = VAR_2->line - VAR_3->line;

  if (VAR_4 != 0)
    return VAR_4;

  return VAR_2->start_pc - VAR_3->start_pc;
}
