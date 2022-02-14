
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_deauth_request {int * bssid; scalar_t__ ie_len; int * ie; int reason_code; } ;
typedef int req ;
struct TYPE_6__ {int bssid; } ;
struct TYPE_5__ {TYPE_3__ pub; } ;
struct TYPE_4__ {int deauth; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct cfg80211_deauth_request*,int ,int) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_deauth_request*) ;

void FUNC_6(struct cfg80211_registered_device *VAR_2,
   struct net_device *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_3->ieee80211_ptr;
 struct cfg80211_deauth_request VAR_5;
 u8 VAR_6[VAR_0];

 FUNC_0(VAR_4);

 if (!VAR_2->ops->deauth)
  return;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.reason_code = VAR_1;
 VAR_5.ie = ((void*)0);
 VAR_5.ie_len = 0;

 if (!VAR_4->current_bss)
  return;

 FUNC_3(VAR_6, VAR_4->current_bss->pub.bssid, VAR_0);
 VAR_5.bssid = VAR_6;
 FUNC_5(VAR_2, VAR_3, &VAR_5);

 if (VAR_4->current_bss) {
  FUNC_2(VAR_4->current_bss);
  FUNC_1(&VAR_2->wiphy, &VAR_4->current_bss->pub);
  VAR_4->current_bss = ((void*)0);
 }
}
