
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_2__ {int ie_len; char* ie; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ sme_state; TYPE_1__ wext; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct cfg80211_registered_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct wireless_dev*) ;
 int FUNC_5 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

int FUNC_7(struct net_device *VAR_6,
      struct iw_request_info *VAR_7,
      struct iw_point *VAR_8, char *VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_6->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_6(VAR_10->wiphy);
 u8 *VAR_12 = VAR_9;
 int VAR_13 = VAR_8->length, VAR_14;

 if (VAR_10->iftype != VAR_4)
  return -VAR_2;

 if (!VAR_13)
  VAR_12 = ((void*)0);

 FUNC_4(VAR_10);


 VAR_14 = 0;
 if (VAR_10->wext.ie_len == VAR_13 &&
     FUNC_3(VAR_10->wext.ie, VAR_12, VAR_13) == 0)
  goto out;

 if (VAR_13) {
  VAR_12 = FUNC_2(VAR_9, VAR_13, VAR_3);
  if (!VAR_12) {
   VAR_14 = -VAR_1;
   goto out;
  }
 } else
  VAR_12 = ((void*)0);

 FUNC_1(VAR_10->wext.ie);
 VAR_10->wext.ie = VAR_12;
 VAR_10->wext.ie_len = VAR_13;

 if (VAR_10->sme_state != VAR_0) {
  VAR_14 = FUNC_0(VAR_11, VAR_6,
         VAR_5, 0);
  if (VAR_14)
   goto out;
 }


 VAR_14 = 0;
 out:
 FUNC_5(VAR_10);
 return VAR_14;
}
