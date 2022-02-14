
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_key_conf {int dummy; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {int (* set_key ) (int *,int,int *,struct ieee80211_sta*,struct ieee80211_key_conf*) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int *,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_4 (struct ieee80211_local*,int) ;
 int FUNC_5 (struct ieee80211_local*,int,struct ieee80211_sub_if_data*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;

__attribute__((used)) static inline int FUNC_6(struct ieee80211_local *VAR_0,
         enum set_key_cmd VAR_1,
         struct ieee80211_sub_if_data *VAR_2,
         struct ieee80211_sta *VAR_3,
         struct ieee80211_key_conf *VAR_4)
{
 int VAR_5;

 FUNC_2();

 VAR_2 = FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = VAR_0->ops->set_key(&VAR_0->hw, VAR_1, &VAR_2->vif, VAR_3, VAR_4);
 FUNC_4(VAR_0, VAR_5);
 return VAR_5;
}
