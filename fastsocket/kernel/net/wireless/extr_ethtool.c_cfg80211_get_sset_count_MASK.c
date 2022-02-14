
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ get_et_sset_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int) ;
 struct cfg80211_registered_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_1->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_4 = FUNC_1(VAR_3->wiphy);
 if (VAR_4->ops->get_et_sset_count)
  return FUNC_0(VAR_4, VAR_1, VAR_2);
 return -VAR_0;
}
