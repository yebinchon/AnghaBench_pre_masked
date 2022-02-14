
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_env {size_t edns_known_options_num; TYPE_1__* edns_known_options; } ;
struct edns_option {scalar_t__ opt_code; struct edns_option* next; } ;
struct TYPE_2__ {scalar_t__ opt_code; int bypass_cache_stage; } ;



int
FUNC_0(struct edns_option* VAR_0, struct module_env* VAR_1)
{
 size_t VAR_2;
 for(; VAR_0; VAR_0=VAR_0->next)
  for(VAR_2=0; VAR_2<VAR_1->edns_known_options_num; VAR_2++)
   if(VAR_1->edns_known_options[VAR_2].opt_code == VAR_0->opt_code &&
    VAR_1->edns_known_options[VAR_2].bypass_cache_stage == 1)
     return 1;
 return 0;
}
