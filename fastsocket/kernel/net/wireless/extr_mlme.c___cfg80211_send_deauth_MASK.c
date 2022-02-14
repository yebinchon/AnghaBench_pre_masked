
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {scalar_t__ sme_state; TYPE_3__* current_bss; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {int const* dev_addr; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_5__ {int reason_code; } ;
struct TYPE_6__ {TYPE_1__ deauth; } ;
struct ieee80211_mgmt {int * bssid; int sa; TYPE_2__ u; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_8__ {int bssid; } ;
struct TYPE_7__ {TYPE_4__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,int *,int *,int ,int *,int ,int ,int,int *) ;
 int FUNC_2 (struct net_device*,int *,int ,int ,int) ;
 int FUNC_3 (struct wiphy*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,int const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct net_device*,int const*,size_t,int ) ;
 int FUNC_8 (struct net_device*) ;
 struct cfg80211_registered_device* FUNC_9 (struct wiphy*) ;

void FUNC_10(struct net_device *VAR_4,
       const u8 *VAR_5, size_t VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_4->ieee80211_ptr;
 struct wiphy *VAR_8 = VAR_7->wiphy;
 struct cfg80211_registered_device *VAR_9 = FUNC_9(VAR_8);
 struct ieee80211_mgmt *VAR_10 = (struct ieee80211_mgmt *)VAR_5;
 const u8 *VAR_11 = VAR_10->bssid;
 bool VAR_12 = 0;

 FUNC_8(VAR_4);
 FUNC_0(VAR_7);

 if (VAR_7->current_bss &&
     FUNC_5(VAR_7->current_bss->pub.bssid, VAR_11)) {
  FUNC_4(VAR_7->current_bss);
  FUNC_3(VAR_8, &VAR_7->current_bss->pub);
  VAR_7->current_bss = ((void*)0);
  VAR_12 = 1;
 }

 FUNC_7(VAR_9, VAR_4, VAR_5, VAR_6, VAR_2);

 if (VAR_7->sme_state == VAR_0 && VAR_12) {
  u16 VAR_13;
  bool VAR_14;

  VAR_13 = FUNC_6(VAR_10->u.deauth.reason_code);

  VAR_14 = !FUNC_5(VAR_10->sa, VAR_4->dev_addr);
  FUNC_2(VAR_4, ((void*)0), 0, VAR_13, VAR_14);
 } else if (VAR_7->sme_state == VAR_1) {
  FUNC_1(VAR_4, VAR_10->bssid, ((void*)0), 0, ((void*)0), 0,
       VAR_3,
       0, ((void*)0));
 }
}
