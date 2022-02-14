
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_stats {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ get_et_stats; } ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,struct ethtool_stats*,int *) ;
 struct cfg80211_registered_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_0->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_4 = FUNC_1(VAR_3->wiphy);
 if (VAR_4->ops->get_et_stats)
  FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2);
}
