
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_cache {int dummy; } ;
struct domain_limit_data {void* below; void* lim; } ;
struct config_str2list {int str2; int str; struct config_str2list* next; } ;
struct config_file {struct config_str2list* ratelimit_below_domain; struct config_str2list* ratelimit_for_domain; } ;


 void* FUNC_0 (int ) ;
 struct domain_limit_data* FUNC_1 (struct infra_cache*,int ) ;

__attribute__((used)) static int FUNC_2(struct infra_cache* VAR_0,
 struct config_file* VAR_1)
{
 struct config_str2list* VAR_2;
 struct domain_limit_data* VAR_3;
 for(VAR_2 = VAR_1->ratelimit_for_domain; VAR_2; VAR_2 = VAR_2->next) {
  VAR_3 = FUNC_1(VAR_0, VAR_2->str);
  if(!VAR_3)
   return 0;
  VAR_3->lim = FUNC_0(VAR_2->str2);
 }
 for(VAR_2 = VAR_1->ratelimit_below_domain; VAR_2; VAR_2 = VAR_2->next) {
  VAR_3 = FUNC_1(VAR_0, VAR_2->str);
  if(!VAR_3)
   return 0;
  VAR_3->below = FUNC_0(VAR_2->str2);
 }
 return 1;
}
