
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct ieee80211_regdomain {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ieee80211_regdomain const* FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static const struct ieee80211_regdomain *FUNC_2(struct wiphy *VAR_1)
{
 return FUNC_1(VAR_1->regd,
      FUNC_0(&VAR_0));
}
