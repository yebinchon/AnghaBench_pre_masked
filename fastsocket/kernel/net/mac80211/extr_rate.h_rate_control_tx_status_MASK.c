
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sta {int dummy; } ;
struct sta_info {void* rate_ctrl_priv; struct ieee80211_sta sta; } ;
struct sk_buff {int dummy; } ;
struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_local {struct rate_control_ref* rate_ctrl; } ;
struct TYPE_2__ {int (* tx_status ) (int ,struct ieee80211_supported_band*,struct ieee80211_sta*,void*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ieee80211_supported_band*,struct ieee80211_sta*,void*,struct sk_buff*) ;
 int FUNC_1 (struct sta_info*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_local *VAR_1,
       struct ieee80211_supported_band *VAR_2,
       struct sta_info *VAR_3,
       struct sk_buff *VAR_4)
{
 struct rate_control_ref *VAR_5 = VAR_1->rate_ctrl;
 struct ieee80211_sta *VAR_6 = &VAR_3->sta;
 void *VAR_7 = VAR_3->rate_ctrl_priv;

 if (!VAR_5 || !FUNC_1(VAR_3, VAR_0))
  return;

 VAR_5->ops->tx_status(VAR_5->priv, VAR_2, VAR_6, VAR_7, VAR_4);
}
