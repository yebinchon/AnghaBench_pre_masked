
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; scalar_t__ disabled; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_2__ {int frag_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ) ;
 struct cfg80211_registered_device* FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_param *VAR_4, char *VAR_5)
{
 struct wireless_dev *VAR_6 = VAR_2->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_7 = FUNC_1(VAR_6->wiphy);
 u32 VAR_8 = VAR_6->wiphy->frag_threshold;
 int VAR_9;

 if (VAR_4->disabled || !VAR_4->fixed)
  VAR_6->wiphy->frag_threshold = (u32) -1;
 else if (VAR_4->value < 256)
  return -VAR_0;
 else {

  VAR_6->wiphy->frag_threshold = VAR_4->value & ~0x1;
 }

 VAR_9 = FUNC_0(VAR_7, VAR_1);
 if (VAR_9)
  VAR_6->wiphy->frag_threshold = VAR_8;

 return VAR_9;
}
