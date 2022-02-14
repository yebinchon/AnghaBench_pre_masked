
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_ringparam {int rx_max_pending; int rx_pending; int tx_max_pending; int tx_pending; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ get_ringparam; } ;


 int FUNC_0 (struct ethtool_ringparam*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,int *,int *,int *,int *) ;
 struct cfg80211_registered_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
       struct ethtool_ringparam *VAR_1)
{
 struct wireless_dev *VAR_2 = VAR_0->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_3 = FUNC_2(VAR_2->wiphy);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 if (VAR_3->ops->get_ringparam)
  FUNC_1(VAR_3, &VAR_1->tx_pending, &VAR_1->tx_max_pending,
       &VAR_1->rx_pending, &VAR_1->rx_max_pending);
}
