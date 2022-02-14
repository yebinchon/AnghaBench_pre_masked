
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int fixed; int value; int disabled; } ;
union iwreq_data {TYPE_2__ txpower; } ;
struct wireless_dev {int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {int rfkill; TYPE_1__* ops; } ;
struct TYPE_3__ {int get_tx_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct wireless_dev*,int*) ;
 int FUNC_1 (int ) ;
 struct cfg80211_registered_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 struct wireless_dev *VAR_9 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_10 = FUNC_2(VAR_9->wiphy);
 int VAR_11, VAR_12;

 if ((VAR_7->txpower.flags & VAR_4) != VAR_2)
  return -VAR_0;
 if (VAR_7->txpower.flags & VAR_3)
  return -VAR_0;

 if (!VAR_10->ops->get_tx_power)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_10, VAR_9, &VAR_12);
 if (VAR_11)
  return VAR_11;


 VAR_7->txpower.fixed = 1;
 VAR_7->txpower.disabled = FUNC_1(VAR_10->rfkill);
 VAR_7->txpower.value = VAR_12;
 VAR_7->txpower.flags = VAR_2;

 return 0;
}
