
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_et_stats ) (int *,struct net_device*,struct ethtool_stats*,int *) ;} ;


 int FUNC_0 (int *,struct net_device*,struct ethtool_stats*,int *) ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cfg80211_registered_device *VAR_0,
         struct net_device *VAR_1,
         struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 FUNC_1(&VAR_0->wiphy, VAR_1);
 VAR_0->ops->get_et_stats(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->wiphy);
}
