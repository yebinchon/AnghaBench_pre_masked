
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vifparams ;
typedef int u32 ;
struct wireless_dev {int iftype; int wiphy; } ;
struct vif_params {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int,int *,struct vif_params*) ;
 int FUNC_1 (struct cfg80211_registered_device*) ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 int FUNC_3 (struct vif_params*,int ,int) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

int FUNC_5(struct net_device *VAR_5, struct iw_request_info *VAR_6,
     u32 *VAR_7, char *VAR_8)
{
 struct wireless_dev *VAR_9 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_10;
 struct vif_params VAR_11;
 enum nl80211_iftype VAR_12;
 int VAR_13;

 VAR_10 = FUNC_4(VAR_9->wiphy);

 switch (*VAR_7) {
 case 130:
  VAR_12 = VAR_3;
  break;
 case 131:
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = VAR_4;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_12 == VAR_9->iftype)
  return 0;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));

 FUNC_1(VAR_10);
 VAR_13 = FUNC_0(VAR_10, VAR_5, VAR_12, ((void*)0), &VAR_11);
 FUNC_2(VAR_10);

 return VAR_13;
}
