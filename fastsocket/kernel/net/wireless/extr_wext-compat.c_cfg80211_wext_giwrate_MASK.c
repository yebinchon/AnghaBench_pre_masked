
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; TYPE_3__* current_bss; int wiphy; } ;
struct station_info {int filled; int txrate; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_5__ {int bssid; } ;
struct TYPE_6__ {TYPE_2__ pub; } ;
struct TYPE_4__ {int get_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int *,struct station_info*) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     struct iw_param *VAR_6, char *VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_5(VAR_8->wiphy);

 static struct station_info VAR_10;
 u8 VAR_11[VAR_1];
 int VAR_12;

 if (VAR_8->iftype != VAR_2)
  return -VAR_0;

 if (!VAR_9->ops->get_station)
  return -VAR_0;

 VAR_12 = 0;
 FUNC_3(VAR_8);
 if (VAR_8->current_bss)
  FUNC_1(VAR_11, VAR_8->current_bss->pub.bssid, VAR_1);
 else
  VAR_12 = -VAR_0;
 FUNC_4(VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_9, VAR_4, VAR_11, &VAR_10);
 if (VAR_12)
  return VAR_12;

 if (!(VAR_10.filled & VAR_3))
  return -VAR_0;

 VAR_6->value = 100000 * FUNC_0(&VAR_10.txrate);

 return 0;
}
