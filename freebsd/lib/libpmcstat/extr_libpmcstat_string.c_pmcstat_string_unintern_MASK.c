
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_string {char* ps_string; } ;
typedef scalar_t__ pmcstat_interned_string ;



const char *
FUNC_0(pmcstat_interned_string VAR_0)
{
 const char *VAR_1;

 VAR_1 = ((const struct pmcstat_string *) VAR_0)->ps_string;
 return (VAR_1);
}
