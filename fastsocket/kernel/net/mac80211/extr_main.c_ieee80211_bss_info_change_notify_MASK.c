
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int *,int ) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0,
          u32 VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_0->local;

 if (!VAR_1)
  return;

 FUNC_0(VAR_2, VAR_0, &VAR_0->vif.bss_conf, VAR_1);
}
