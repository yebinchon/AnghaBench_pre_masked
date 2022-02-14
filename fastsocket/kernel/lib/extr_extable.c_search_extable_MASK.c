
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {unsigned long insn; } ;



const struct exception_table_entry *
FUNC_0(const struct exception_table_entry *VAR_0,
        const struct exception_table_entry *VAR_1,
        unsigned long VAR_2)
{
 while (VAR_0 <= VAR_1) {
  const struct exception_table_entry *VAR_3;

  VAR_3 = ((VAR_1 - VAR_0) >> 1) + VAR_0;




  if (VAR_3->insn < VAR_2)
   VAR_0 = VAR_3 + 1;
  else if (VAR_3->insn > VAR_2)
   VAR_1 = VAR_3 - 1;
  else
   return VAR_3;
        }
        return ((void*)0);
}
