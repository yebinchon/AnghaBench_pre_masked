
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {scalar_t__ regd; } ;
struct regulatory_request {scalar_t__ initiator; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_reg_rule {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_reg_rule const* FUNC_0 (struct wiphy*,int ,struct ieee80211_regdomain const*) ;
 struct ieee80211_regdomain* FUNC_1 () ;
 struct regulatory_request* FUNC_2 () ;
 struct ieee80211_regdomain* FUNC_3 (struct wiphy*) ;

const struct ieee80211_reg_rule *FUNC_4(struct wiphy *VAR_2,
            u32 VAR_3)
{
 const struct ieee80211_regdomain *VAR_4;
 struct regulatory_request *VAR_5 = FUNC_2();





 if (VAR_5->initiator != VAR_0 &&
     VAR_5->initiator != VAR_1 &&
     VAR_2->regd)
  VAR_4 = FUNC_3(VAR_2);
 else
  VAR_4 = FUNC_1();

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
