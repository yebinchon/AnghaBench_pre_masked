
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
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {TYPE_2__* dev; struct ieee80211_local* local; } ;
struct TYPE_10__ {int smps_control; int action; } ;
struct TYPE_11__ {TYPE_3__ ht_smps; } ;
struct TYPE_12__ {TYPE_4__ u; int category; } ;
struct TYPE_13__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; int frame_control; int bssid; int sa; int da; } ;
struct TYPE_8__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;
struct TYPE_14__ {int flags; } ;
struct TYPE_9__ {int const* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_5 (int ,int const*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

int FUNC_8(struct ieee80211_sub_if_data *VAR_10,
          enum ieee80211_smps_mode VAR_11, const u8 *VAR_12,
          const u8 *VAR_13)
{
 struct ieee80211_local *VAR_14 = VAR_10->local;
 struct sk_buff *VAR_15;
 struct ieee80211_mgmt *VAR_16;


 VAR_15 = FUNC_3(27 + VAR_14->hw.extra_tx_headroom);
 if (!VAR_15)
  return -VAR_0;

 FUNC_7(VAR_15, VAR_14->hw.extra_tx_headroom);
 VAR_16 = (void *)FUNC_6(VAR_15, 27);
 FUNC_5(VAR_16->da, VAR_12, VAR_1);
 FUNC_5(VAR_16->sa, VAR_10->dev->dev_addr, VAR_1);
 FUNC_5(VAR_16->bssid, VAR_13, VAR_1);
 VAR_16->frame_control = FUNC_2(VAR_2 |
        VAR_3);
 VAR_16->u.action.category = VAR_5;
 VAR_16->u.action.u.ht_smps.action = VAR_6;
 switch (VAR_11) {
 case 132:
 case 130:
  FUNC_1(1);
 case 129:
  VAR_16->u.action.u.ht_smps.smps_control =
    VAR_7;
  break;
 case 128:
  VAR_16->u.action.u.ht_smps.smps_control =
    VAR_9;
  break;
 case 131:
  VAR_16->u.action.u.ht_smps.smps_control =
    VAR_8;
  break;
 }


 FUNC_0(VAR_15)->flags |= VAR_4;
 FUNC_4(VAR_10, VAR_15);

 return 0;
}
