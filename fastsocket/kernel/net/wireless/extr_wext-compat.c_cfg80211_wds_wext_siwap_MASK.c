
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int bssid; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ wext; int wiphy; } ;
struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_3__ {int set_wds_peer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int *) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       struct sockaddr *VAR_8, char *VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_6->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_4(VAR_10->wiphy);
 int VAR_12;

 if (FUNC_0(VAR_10->iftype != VAR_5))
  return -VAR_2;

 if (VAR_8->sa_family != VAR_0)
  return -VAR_2;

 if (FUNC_2(VAR_6))
  return -VAR_1;

 if (!VAR_11->ops->set_wds_peer)
  return -VAR_3;

 VAR_12 = FUNC_3(VAR_11, VAR_6, (u8 *)&VAR_8->sa_data);
 if (VAR_12)
  return VAR_12;

 FUNC_1(&VAR_10->wext.bssid, (u8 *) &VAR_8->sa_data, VAR_4);

 return 0;
}
