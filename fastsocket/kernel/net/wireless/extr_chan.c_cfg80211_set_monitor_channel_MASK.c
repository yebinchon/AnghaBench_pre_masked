
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int set_monitor_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct cfg80211_chan_def*) ;

int FUNC_2(struct cfg80211_registered_device *VAR_2,
     struct cfg80211_chan_def *VAR_3)
{
 if (!VAR_2->ops->set_monitor_channel)
  return -VAR_1;
 if (!FUNC_0(VAR_2))
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3);
}
