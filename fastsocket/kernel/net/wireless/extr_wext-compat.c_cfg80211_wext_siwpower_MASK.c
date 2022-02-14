
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int ps; int ps_timeout; scalar_t__ iftype; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int set_power_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int,int) ;
 struct cfg80211_registered_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
      struct iw_request_info *VAR_5,
      struct iw_param *VAR_6, char *VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_1(VAR_8->wiphy);
 bool VAR_10 = VAR_8->ps;
 int VAR_11 = VAR_8->ps_timeout;
 int VAR_12;

 if (VAR_8->iftype != VAR_3)
  return -VAR_0;

 if (!VAR_9->ops->set_power_mgmt)
  return -VAR_1;

 if (VAR_6->disabled) {
  VAR_10 = 0;
 } else {
  switch (VAR_6->flags & 129) {
  case 128:
  case 129:
  case 130:
   VAR_10 = 1;
   break;
  default:
   return -VAR_0;
  }

  if (VAR_6->flags & ~(129 | VAR_2))
   return -VAR_0;

  if (VAR_6->flags & VAR_2)
   VAR_11 = VAR_6->value / 1000;
 }

 VAR_12 = FUNC_0(VAR_9, VAR_4, VAR_10, VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_8->ps = VAR_10;
 VAR_8->ps_timeout = VAR_11;

 return 0;

}
