
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u64 ;
struct wiphy {int dummy; } ;
struct TYPE_9__ {int addr; } ;
struct sta_info {TYPE_4__ sta; } ;
struct sk_buff {int priority; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_10__ {int addr; int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; struct ieee80211_local* local; } ;
struct ieee80211_qos_hdr {void* qos_ctrl; scalar_t__ seq_ctrl; int addr3; int addr2; int addr1; scalar_t__ duration_id; void* frame_control; } ;
struct TYPE_8__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
typedef void* __le16 ;
struct TYPE_6__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_11 ;
 void* FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 struct ieee80211_chanctx_conf* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 struct sta_info* FUNC_15 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_16 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_17(struct wiphy *VAR_12, struct net_device *VAR_13,
      const u8 *VAR_14, u64 *VAR_15)
{
 struct ieee80211_sub_if_data *VAR_16 = FUNC_0(VAR_13);
 struct ieee80211_local *VAR_17 = VAR_16->local;
 struct ieee80211_qos_hdr *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20 = sizeof(*VAR_18);
 __le16 VAR_21;
 bool VAR_22;
 struct ieee80211_tx_info *VAR_23;
 struct sta_info *VAR_24;
 struct ieee80211_chanctx_conf *VAR_25;
 enum ieee80211_band VAR_26;

 FUNC_10();
 VAR_25 = FUNC_9(VAR_16->vif.chanctx_conf);
 if (FUNC_2(!VAR_25)) {
  FUNC_11();
  return -VAR_0;
 }
 VAR_26 = VAR_25->def.chan->band;
 VAR_24 = FUNC_15(VAR_16, VAR_14);
 if (VAR_24) {
  VAR_22 = FUNC_16(VAR_24, VAR_11);
 } else {
  FUNC_11();
  return -VAR_1;
 }

 if (VAR_22) {
  VAR_21 = FUNC_3(VAR_6 |
     VAR_8 |
     VAR_5);
 } else {
  VAR_20 -= 2;
  VAR_21 = FUNC_3(VAR_6 |
     VAR_7 |
     VAR_5);
 }

 VAR_19 = FUNC_4(VAR_17->hw.extra_tx_headroom + VAR_20);
 if (!VAR_19) {
  FUNC_11();
  return -VAR_2;
 }

 VAR_19->dev = VAR_13;

 FUNC_13(VAR_19, VAR_17->hw.extra_tx_headroom);

 VAR_18 = (void *) FUNC_12(VAR_19, VAR_20);
 VAR_18->frame_control = VAR_21;
 VAR_18->duration_id = 0;
 FUNC_8(VAR_18->addr1, VAR_24->sta.addr, VAR_3);
 FUNC_8(VAR_18->addr2, VAR_16->vif.addr, VAR_3);
 FUNC_8(VAR_18->addr3, VAR_16->vif.addr, VAR_3);
 VAR_18->seq_ctrl = 0;

 VAR_23 = FUNC_1(VAR_19);

 VAR_23->flags |= VAR_9 |
         VAR_10;

 FUNC_14(VAR_19, VAR_4);
 VAR_19->priority = 7;
 if (VAR_22)
  VAR_18->qos_ctrl = FUNC_3(7);

 FUNC_6();
 FUNC_5(VAR_16, VAR_19, VAR_26);
 FUNC_7();
 FUNC_11();

 *VAR_15 = (unsigned long) VAR_19;
 return 0;
}
