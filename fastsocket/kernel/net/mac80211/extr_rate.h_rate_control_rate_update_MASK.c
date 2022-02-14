
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_sta {int dummy; } ;
struct sta_info {struct ieee80211_sta sta; int sdata; void* rate_ctrl_priv; } ;
struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_local {struct rate_control_ref* rate_ctrl; } ;
struct TYPE_2__ {int (* rate_update ) (int ,struct ieee80211_supported_band*,struct ieee80211_sta*,void*,int ) ;} ;


 int FUNC_0 (struct ieee80211_local*,int ,struct ieee80211_sta*,int ) ;
 int FUNC_1 (int ,struct ieee80211_supported_band*,struct ieee80211_sta*,void*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_local *VAR_0,
        struct ieee80211_supported_band *VAR_1,
        struct sta_info *VAR_2, u32 VAR_3)
{
 struct rate_control_ref *VAR_4 = VAR_0->rate_ctrl;
 struct ieee80211_sta *VAR_5 = &VAR_2->sta;
 void *VAR_6 = VAR_2->rate_ctrl_priv;

 if (VAR_4 && VAR_4->ops->rate_update)
  VAR_4->ops->rate_update(VAR_4->priv, VAR_1, VAR_5,
          VAR_6, VAR_3);
 FUNC_0(VAR_0, VAR_2->sdata, &VAR_2->sta, VAR_3);
}
