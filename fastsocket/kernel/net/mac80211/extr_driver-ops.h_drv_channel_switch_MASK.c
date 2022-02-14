
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_channel_switch {int dummy; } ;
struct TYPE_2__ {int (* channel_switch ) (int *,struct ieee80211_channel_switch*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct ieee80211_channel_switch*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_channel_switch*) ;
 int FUNC_3 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_4(struct ieee80211_local *VAR_0,
         struct ieee80211_channel_switch *VAR_1)
{
 FUNC_0();

 FUNC_2(VAR_0, VAR_1);
 VAR_0->ops->channel_switch(&VAR_0->hw, VAR_1);
 FUNC_3(VAR_0);
}
