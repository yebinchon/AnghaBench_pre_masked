
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* remain_on_channel ) (int *,struct wireless_dev*,struct ieee80211_channel*,unsigned int,int *) ;} ;


 int FUNC_0 (int *,struct wireless_dev*,struct ieee80211_channel*,unsigned int,int *) ;
 int FUNC_1 (int *,struct wireless_dev*,struct ieee80211_channel*,unsigned int) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
         struct wireless_dev *VAR_1,
         struct ieee80211_channel *VAR_2,
         unsigned int VAR_3, u64 *VAR_4)
{
 int VAR_5;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 VAR_5 = VAR_0->ops->remain_on_channel(&VAR_0->wiphy, VAR_1, VAR_2,
        VAR_3, VAR_4);
 FUNC_2(&VAR_0->wiphy, VAR_5, *VAR_4);
 return VAR_5;
}
