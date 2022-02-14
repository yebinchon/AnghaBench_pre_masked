
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;
struct TYPE_2__ {int (* sta_notify ) (int *,int *,int,struct ieee80211_sta*) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *,int *,int,struct ieee80211_sta*) ;
 int FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,struct ieee80211_sta*) ;

__attribute__((used)) static inline void FUNC_5(struct ieee80211_local *VAR_0,
      struct ieee80211_sub_if_data *VAR_1,
      enum sta_notify_cmd VAR_2,
      struct ieee80211_sta *VAR_3)
{
 VAR_1 = FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_0->ops->sta_notify)
  VAR_0->ops->sta_notify(&VAR_0->hw, &VAR_1->vif, VAR_2, VAR_3);
 FUNC_3(VAR_0);
}
