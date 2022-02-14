
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_ringparam {scalar_t__ rx_mini_pending; scalar_t__ rx_jumbo_pending; int rx_pending; int tx_pending; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ set_ringparam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ,int ) ;
 struct cfg80211_registered_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
      struct ethtool_ringparam *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_2->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_5 = FUNC_1(VAR_4->wiphy);

 if (VAR_3->rx_mini_pending != 0 || VAR_3->rx_jumbo_pending != 0)
  return -VAR_0;

 if (VAR_5->ops->set_ringparam)
  return FUNC_0(VAR_5, VAR_3->tx_pending, VAR_3->rx_pending);

 return -VAR_1;
}
