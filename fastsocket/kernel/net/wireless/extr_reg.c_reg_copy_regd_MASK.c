
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct ieee80211_regdomain {int n_reg_rules; struct ieee80211_regdomain const* reg_rules; } const ieee80211_regdomain ;
struct ieee80211_reg_rule {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_regdomain const* FUNC_0 (int ) ;
 int VAR_1 ;
 struct ieee80211_regdomain const* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ieee80211_regdomain const*,struct ieee80211_regdomain const*,int) ;

__attribute__((used)) static const struct ieee80211_regdomain *
FUNC_3(const struct ieee80211_regdomain *VAR_2)
{
 struct ieee80211_regdomain *VAR_3;
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 =
  sizeof(struct ieee80211_regdomain) +
  VAR_2->n_reg_rules * sizeof(struct ieee80211_reg_rule);

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_3, VAR_2, sizeof(struct ieee80211_regdomain));

 for (VAR_5 = 0; VAR_5 < VAR_2->n_reg_rules; VAR_5++)
  FUNC_2(&VAR_3->reg_rules[VAR_5], &VAR_2->reg_rules[VAR_5],
         sizeof(struct ieee80211_reg_rule));

 return VAR_3;
}
