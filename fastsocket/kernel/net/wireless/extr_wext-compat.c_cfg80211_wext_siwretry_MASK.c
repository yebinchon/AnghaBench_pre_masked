
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; void* value; scalar_t__ disabled; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_2__ {void* retry_long; void* retry_short; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ) ;
 struct cfg80211_registered_device* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_7,
      struct iw_request_info *VAR_8,
      struct iw_param *VAR_9, char *VAR_10)
{
 struct wireless_dev *VAR_11 = VAR_7->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_12 = FUNC_1(VAR_11->wiphy);
 u32 VAR_13 = 0;
 u8 VAR_14 = VAR_11->wiphy->retry_long;
 u8 VAR_15 = VAR_11->wiphy->retry_short;
 int VAR_16;

 if (VAR_9->disabled ||
     (VAR_9->flags & VAR_4) != VAR_1)
  return -VAR_0;

 if (VAR_9->flags & VAR_2) {
  VAR_11->wiphy->retry_long = VAR_9->value;
  VAR_13 |= VAR_5;
 } else if (VAR_9->flags & VAR_3) {
  VAR_11->wiphy->retry_short = VAR_9->value;
  VAR_13 |= VAR_6;
 } else {
  VAR_11->wiphy->retry_short = VAR_9->value;
  VAR_11->wiphy->retry_long = VAR_9->value;
  VAR_13 |= VAR_5;
  VAR_13 |= VAR_6;
 }

 if (!VAR_13)
  return 0;

 VAR_16 = FUNC_0(VAR_12, VAR_13);
 if (VAR_16) {
  VAR_11->wiphy->retry_short = VAR_15;
  VAR_11->wiphy->retry_long = VAR_14;
 }

 return VAR_16;
}
