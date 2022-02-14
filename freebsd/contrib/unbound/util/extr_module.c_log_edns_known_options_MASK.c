
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_env {size_t edns_known_options_num; TYPE_1__* edns_known_options; } ;
typedef int str ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;
struct TYPE_2__ {scalar_t__ no_aggregation; scalar_t__ bypass_cache_stage; int opt_code; } ;


 int FUNC_0 (char**,size_t*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;

void
FUNC_2(enum verbosity_value VAR_1, struct module_env* VAR_2)
{
 size_t VAR_3;
 char VAR_4[32], *VAR_5;
 size_t VAR_6;
 if(VAR_2->edns_known_options_num > 0 && VAR_0 >= VAR_1) {
  FUNC_1(VAR_1, "EDNS known options:");
  FUNC_1(VAR_1, "  Code:    Bypass_cache_stage: Aggregate_mesh:");
  for(VAR_3=0; VAR_3<VAR_2->edns_known_options_num; VAR_3++) {
   VAR_5 = VAR_4;
   VAR_6 = sizeof(VAR_4);
   (void)FUNC_0(&VAR_5, &VAR_6,
    VAR_2->edns_known_options[VAR_3].opt_code);
   FUNC_1(VAR_1, "  %-8.8s %-19s %-15s", VAR_4,
    VAR_2->edns_known_options[VAR_3].bypass_cache_stage?"YES":"NO",
    VAR_2->edns_known_options[VAR_3].no_aggregation?"NO":"YES");
  }
 }
}
