
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;
struct iw_mlme {int cmd; int reason_code; TYPE_1__ addr; } ;
struct cfg80211_registered_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_3 (int ) ;

int FUNC_4(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     struct iw_point *VAR_6, char *VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_4->ieee80211_ptr;
 struct iw_mlme *VAR_9 = (struct iw_mlme *)VAR_7;
 struct cfg80211_registered_device *VAR_10;
 int VAR_11;

 if (!VAR_8)
  return -VAR_2;

 VAR_10 = FUNC_3(VAR_8->wiphy);

 if (VAR_8->iftype != VAR_3)
  return -VAR_1;

 if (VAR_9->addr.sa_family != VAR_0)
  return -VAR_1;

 FUNC_1(VAR_8);
 switch (VAR_9->cmd) {
 case 129:
 case 128:
  VAR_11 = FUNC_0(VAR_10, VAR_4, VAR_9->reason_code,
         1);
  break;
 default:
  VAR_11 = -VAR_2;
  break;
 }
 FUNC_2(VAR_8);

 return VAR_11;
}
