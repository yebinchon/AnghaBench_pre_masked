
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {char* alpha2; int user_reg_hint_type; int initiator; int wiphy_idx; } ;
typedef enum nl80211_user_reg_hint_type { ____Placeholder_nl80211_user_reg_hint_type } nl80211_user_reg_hint_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 struct regulatory_request* FUNC_1 (int,int ) ;
 int FUNC_2 (struct regulatory_request*) ;

int FUNC_3(const char *VAR_5,
    enum nl80211_user_reg_hint_type VAR_6)
{
 struct regulatory_request *VAR_7;

 if (FUNC_0(!VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_1(sizeof(struct regulatory_request), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->wiphy_idx = VAR_4;
 VAR_7->alpha2[0] = VAR_5[0];
 VAR_7->alpha2[1] = VAR_5[1];
 VAR_7->initiator = VAR_3;
 VAR_7->user_reg_hint_type = VAR_6;

 FUNC_2(VAR_7);

 return 0;
}
