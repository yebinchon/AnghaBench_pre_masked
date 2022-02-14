
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop_p2p_device ) (int *,struct wireless_dev*) ;} ;


 int FUNC_0 (int *,struct wireless_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct wireless_dev*) ;

__attribute__((used)) static inline void FUNC_3(struct cfg80211_registered_device *VAR_0,
     struct wireless_dev *VAR_1)
{
 FUNC_2(&VAR_0->wiphy, VAR_1);
 VAR_0->ops->stop_p2p_device(&VAR_0->wiphy, VAR_1);
 FUNC_1(&VAR_0->wiphy);
}
