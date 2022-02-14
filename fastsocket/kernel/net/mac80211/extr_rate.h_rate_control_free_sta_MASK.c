
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sta {int dummy; } ;
struct sta_info {void* rate_ctrl_priv; struct ieee80211_sta sta; struct rate_control_ref* rate_ctrl; } ;
struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free_sta ) (int ,struct ieee80211_sta*,void*) ;} ;


 int FUNC_0 (int ,struct ieee80211_sta*,void*) ;

__attribute__((used)) static inline void FUNC_1(struct sta_info *VAR_0)
{
 struct rate_control_ref *VAR_1 = VAR_0->rate_ctrl;
 struct ieee80211_sta *VAR_2 = &VAR_0->sta;
 void *VAR_3 = VAR_0->rate_ctrl_priv;

 VAR_1->ops->free_sta(VAR_1->priv, VAR_2, VAR_3);
}
