
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int* bssid; } ;
struct TYPE_10__ {TYPE_2__ mgd; } ;
struct TYPE_8__ {int* addr; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct TYPE_11__ {int action_code; int dialog_token; void* capability; } ;
struct TYPE_12__ {TYPE_4__ tdls_discover_resp; } ;
struct TYPE_13__ {TYPE_5__ u; int category; } ;
struct TYPE_14__ {TYPE_6__ action; } ;
struct ieee80211_mgmt {TYPE_7__ u; void* frame_control; int bssid; int sa; int da; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 void* FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int*,int ) ;
 int FUNC_8 (struct ieee80211_mgmt*,int ,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_10(struct wiphy *VAR_5, struct net_device *VAR_6,
      u8 *VAR_7, u8 VAR_8, u8 VAR_9,
      u16 VAR_10, struct sk_buff *VAR_11)
{
 struct ieee80211_sub_if_data *VAR_12 = FUNC_0(VAR_6);
 enum ieee80211_band VAR_13 = FUNC_4(VAR_12);
 struct ieee80211_mgmt *VAR_14;

 VAR_14 = (void *)FUNC_9(VAR_11, 24);
 FUNC_8(VAR_14, 0, 24);
 FUNC_7(VAR_14->da, VAR_7, VAR_1);
 FUNC_7(VAR_14->sa, VAR_12->vif.addr, VAR_1);
 FUNC_7(VAR_14->bssid, VAR_12->u.mgd.bssid, VAR_1);

 VAR_14->frame_control = FUNC_1(VAR_2 |
       VAR_3);

 switch (VAR_8) {
 case 128:
  FUNC_9(VAR_11, 1 + sizeof(VAR_14->u.action.u.tdls_discover_resp));
  VAR_14->u.action.category = VAR_4;
  VAR_14->u.action.u.tdls_discover_resp.action_code =
   128;
  VAR_14->u.action.u.tdls_discover_resp.dialog_token =
   VAR_9;
  VAR_14->u.action.u.tdls_discover_resp.capability =
   FUNC_1(FUNC_5(VAR_12));

  FUNC_3(VAR_12, VAR_11, 0, VAR_13);
  FUNC_2(VAR_12, VAR_11, 0, VAR_13);
  FUNC_6(VAR_11);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
