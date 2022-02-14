
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {unsigned int n_reg_rules; struct ieee80211_reg_rule* reg_rules; } ;
struct ieee80211_reg_rule {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_reg_rule const*) ;

__attribute__((used)) static bool FUNC_2(const struct ieee80211_regdomain *VAR_1)
{
 const struct ieee80211_reg_rule *VAR_2 = ((void*)0);
 unsigned int VAR_3;

 if (!VAR_1->n_reg_rules)
  return 0;

 if (FUNC_0(VAR_1->n_reg_rules > VAR_0))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_reg_rules; VAR_3++) {
  VAR_2 = &VAR_1->reg_rules[VAR_3];
  if (!FUNC_1(VAR_2))
   return 0;
 }

 return 1;
}
