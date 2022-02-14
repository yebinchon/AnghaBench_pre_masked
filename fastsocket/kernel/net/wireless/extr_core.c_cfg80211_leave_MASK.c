
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int auth_type; } ;
struct TYPE_4__ {TYPE_1__ connect; int ie_len; int * ie; } ;
struct wireless_dev {int iftype; scalar_t__ beacon_interval; TYPE_2__ wext; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int sched_scan_mtx; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (struct wireless_dev*) ;

void FUNC_10(struct cfg80211_registered_device *VAR_2,
     struct wireless_dev *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 switch (VAR_3->iftype) {
 case 133:
  FUNC_2(VAR_2, VAR_4, 1);
  break;
 case 130:
 case 128:
  FUNC_6(&VAR_2->sched_scan_mtx);
  FUNC_1(VAR_2, 0);
  FUNC_7(&VAR_2->sched_scan_mtx);

  FUNC_8(VAR_3);






  FUNC_0(VAR_2, VAR_4,
          VAR_1, 1);
  FUNC_9(VAR_3);
  break;
 case 131:
  FUNC_3(VAR_2, VAR_4);
  break;
 case 132:
 case 129:
  FUNC_4(VAR_2, VAR_4);
  break;
 default:
  break;
 }

 VAR_3->beacon_interval = 0;
}
