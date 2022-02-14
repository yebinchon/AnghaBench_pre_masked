
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_string {int ps_hash; } ;
typedef scalar_t__ pmcstat_interned_string ;



int
FUNC_0(pmcstat_interned_string VAR_0)
{
 const struct pmcstat_string *VAR_1;

 VAR_1 = (const struct pmcstat_string *) VAR_0;
 return (VAR_1->ps_hash);
}
