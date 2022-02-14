
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_tx_power_setting { ____Placeholder_nl80211_tx_power_setting } nl80211_tx_power_setting ;
struct TYPE_2__ {int (* set_tx_power ) (int *,struct wireless_dev*,int,int) ;} ;


 int FUNC_0 (int *,struct wireless_dev*,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct wireless_dev*,int,int) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
        struct wireless_dev *VAR_1,
        enum nl80211_tx_power_setting VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_0->ops->set_tx_power(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->wiphy, VAR_4);
 return VAR_4;
}
