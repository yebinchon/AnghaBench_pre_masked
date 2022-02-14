
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* mgmt_tx ) (int *,struct wireless_dev*,struct ieee80211_channel*,int,unsigned int,int const*,size_t,int,int,int *) ;} ;


 int FUNC_0 (int *,struct wireless_dev*,struct ieee80211_channel*,int,unsigned int,int const*,size_t,int,int,int *) ;
 int FUNC_1 (int *,struct wireless_dev*,struct ieee80211_channel*,int,unsigned int,int,int) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
          struct wireless_dev *VAR_1,
          struct ieee80211_channel *VAR_2, bool VAR_3,
          unsigned int VAR_4, const u8 *VAR_5, size_t VAR_6,
          bool VAR_7, bool VAR_8, u64 *VAR_9)
{
 int VAR_10;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_7, VAR_8);
 VAR_10 = VAR_0->ops->mgmt_tx(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9);
 FUNC_2(&VAR_0->wiphy, VAR_10, *VAR_9);
 return VAR_10;
}
