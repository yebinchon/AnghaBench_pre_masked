
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {unsigned int n_reg_rules; char* alpha2; struct ieee80211_reg_rule* reg_rules; } ;
struct ieee80211_reg_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_regdomain*) ;
 struct ieee80211_regdomain* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ieee80211_reg_rule const*,struct ieee80211_reg_rule const*,struct ieee80211_reg_rule*) ;

__attribute__((used)) static struct ieee80211_regdomain *
FUNC_3(const struct ieee80211_regdomain *VAR_1,
   const struct ieee80211_regdomain *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 const struct ieee80211_reg_rule *VAR_9, *VAR_10;
 struct ieee80211_reg_rule *VAR_11;
 struct ieee80211_regdomain *VAR_12;

 struct ieee80211_reg_rule VAR_13;

 if (!VAR_1 || !VAR_2)
  return ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_1->n_reg_rules; VAR_5++) {
  VAR_9 = &VAR_1->reg_rules[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_2->n_reg_rules; VAR_6++) {
   VAR_10 = &VAR_2->reg_rules[VAR_6];
   if (!FUNC_2(VAR_9, VAR_10, &VAR_13))
    VAR_7++;
  }
 }

 if (!VAR_7)
  return ((void*)0);

 VAR_4 = sizeof(struct ieee80211_regdomain) +
         VAR_7 * sizeof(struct ieee80211_reg_rule);

 VAR_12 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_12)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_1->n_reg_rules && VAR_8 < VAR_7; VAR_5++) {
  VAR_9 = &VAR_1->reg_rules[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_2->n_reg_rules && VAR_8 < VAR_7; VAR_6++) {
   VAR_10 = &VAR_2->reg_rules[VAR_6];





   VAR_11 = &VAR_12->reg_rules[VAR_8];
   VAR_3 = FUNC_2(VAR_9, VAR_10, VAR_11);




   if (VAR_3)
    continue;
   VAR_8++;
  }
 }

 if (VAR_8 != VAR_7) {
  FUNC_0(VAR_12);
  return ((void*)0);
 }

 VAR_12->n_reg_rules = VAR_7;
 VAR_12->alpha2[0] = '9';
 VAR_12->alpha2[1] = '8';

 return VAR_12;
}
