
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct module_env {size_t edns_known_options_num; struct edns_known_option* edns_known_options; } ;
struct edns_known_option {scalar_t__ opt_code; } ;



struct edns_known_option*
FUNC_0(uint16_t VAR_0, struct module_env* VAR_1)
{
 size_t VAR_2;
 for(VAR_2=0; VAR_2<VAR_1->edns_known_options_num; VAR_2++)
  if(VAR_1->edns_known_options[VAR_2].opt_code == VAR_0)
   return VAR_1->edns_known_options + VAR_2;
 return ((void*)0);
}
