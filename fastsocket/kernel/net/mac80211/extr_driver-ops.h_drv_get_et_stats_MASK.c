
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ieee80211_sub_if_data {int vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int (* get_et_stats ) (int *,int *,struct ethtool_stats*,int *) ;} ;


 int FUNC_0 (int *,int *,struct ethtool_stats*,int *) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_sub_if_data *VAR_0,
        struct ethtool_stats *VAR_1,
        u64 *VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_0->local;
 if (VAR_3->ops->get_et_stats) {
  FUNC_1(VAR_3);
  VAR_3->ops->get_et_stats(&VAR_3->hw, &VAR_0->vif, VAR_1, VAR_2);
  FUNC_2(VAR_3);
 }
}
