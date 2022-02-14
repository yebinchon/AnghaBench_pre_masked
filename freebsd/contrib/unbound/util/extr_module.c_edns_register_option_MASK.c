
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct module_env {size_t edns_known_options_num; TYPE_1__* edns_known_options; scalar_t__ worker; } ;
struct TYPE_2__ {scalar_t__ opt_code; int bypass_cache_stage; int no_aggregation; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;

int
FUNC_1(uint16_t VAR_1, int VAR_2,
 int VAR_3, struct module_env* VAR_4)
{
 size_t VAR_5;
 if(VAR_4->worker) {
  FUNC_0("invalid edns registration: "
   "trying to register option after module init phase");
  return 0;
 }







 for(VAR_5=0; VAR_5<VAR_4->edns_known_options_num; VAR_5++)
  if(VAR_4->edns_known_options[VAR_5].opt_code == VAR_1)
   break;

 if(VAR_5 == VAR_4->edns_known_options_num) {
  if(VAR_4->edns_known_options_num >= VAR_0) {
   FUNC_0("invalid edns registration: maximum options reached");
   return 0;
  }
  VAR_4->edns_known_options_num++;
 }
 VAR_4->edns_known_options[VAR_5].opt_code = VAR_1;
 VAR_4->edns_known_options[VAR_5].bypass_cache_stage = VAR_2;
 VAR_4->edns_known_options[VAR_5].no_aggregation = VAR_3;
 return 1;
}
