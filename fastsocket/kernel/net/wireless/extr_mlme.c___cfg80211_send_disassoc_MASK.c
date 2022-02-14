
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {scalar_t__ sme_state; TYPE_3__* current_bss; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {int const* dev_addr; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_6__ {int reason_code; } ;
struct TYPE_7__ {TYPE_1__ disassoc; } ;
struct ieee80211_mgmt {int sa; TYPE_2__ u; int * bssid; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_9__ {int bssid; } ;
struct TYPE_8__ {TYPE_5__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int *,int ,int ,int) ;
 int FUNC_3 (struct wiphy*,TYPE_5__*) ;
 int FUNC_4 (struct net_device*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,int const*,size_t,int ) ;
 int FUNC_9 (struct net_device*) ;
 struct cfg80211_registered_device* FUNC_10 (struct wiphy*) ;

void FUNC_11(struct net_device *VAR_2,
         const u8 *VAR_3, size_t VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_2->ieee80211_ptr;
 struct wiphy *VAR_6 = VAR_5->wiphy;
 struct cfg80211_registered_device *VAR_7 = FUNC_10(VAR_6);
 struct ieee80211_mgmt *VAR_8 = (struct ieee80211_mgmt *)VAR_3;
 const u8 *VAR_9 = VAR_8->bssid;
 u16 VAR_10;
 bool VAR_11;

 FUNC_9(VAR_2);
 FUNC_0(VAR_5);

 FUNC_8(VAR_7, VAR_2, VAR_3, VAR_4, VAR_1);

 if (VAR_5->sme_state != VAR_0)
  return;

 if (VAR_5->current_bss &&
     FUNC_6(VAR_5->current_bss->pub.bssid, VAR_9)) {
  FUNC_4(VAR_2, VAR_5->current_bss);
  FUNC_5(VAR_5->current_bss);
  FUNC_3(VAR_6, &VAR_5->current_bss->pub);
  VAR_5->current_bss = ((void*)0);
 } else
  FUNC_1(1);


 VAR_10 = FUNC_7(VAR_8->u.disassoc.reason_code);

 VAR_11 = !FUNC_6(VAR_8->sa, VAR_2->dev_addr);
 FUNC_2(VAR_2, ((void*)0), 0, VAR_10, VAR_11);
}
