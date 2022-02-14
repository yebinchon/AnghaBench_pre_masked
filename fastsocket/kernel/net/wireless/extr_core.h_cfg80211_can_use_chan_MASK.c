
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef enum cfg80211_chan_mode { ____Placeholder_cfg80211_chan_mode } cfg80211_chan_mode ;


 int FUNC_0 (struct cfg80211_registered_device*,struct wireless_dev*,int ,struct ieee80211_channel*,int,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct cfg80211_registered_device *VAR_0,
        struct wireless_dev *VAR_1,
        struct ieee80211_channel *VAR_2,
        enum cfg80211_chan_mode VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->iftype,
         VAR_2, VAR_3, 0);
}
