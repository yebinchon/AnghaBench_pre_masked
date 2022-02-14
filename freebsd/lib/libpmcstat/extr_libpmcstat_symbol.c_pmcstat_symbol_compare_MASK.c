
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_symbol {scalar_t__ ps_end; scalar_t__ ps_start; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct pmcstat_symbol *VAR_2, *VAR_3;

 VAR_2 = (const struct pmcstat_symbol *) VAR_0;
 VAR_3 = (const struct pmcstat_symbol *) VAR_1;

 if (VAR_2->ps_end <= VAR_3->ps_start)
  return (-1);
 if (VAR_2->ps_start >= VAR_3->ps_end)
  return (1);
 return (0);
}
