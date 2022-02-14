
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef unsigned long u64 ;
typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct sta_info {int dummy; } ;
struct sk_buff {int dev; } ;
struct TYPE_14__ {int ibss_joined; } ;
struct TYPE_12__ {int type; int chanctx_conf; TYPE_1__ bss_conf; } ;
struct TYPE_19__ {int associated; } ;
struct TYPE_15__ {int mesh_id_len; } ;
struct TYPE_20__ {TYPE_6__ mgd; TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {int dev; TYPE_10__ vif; TYPE_7__ u; TYPE_3__* bss; struct ieee80211_local* local; } ;
struct TYPE_17__ {int category; } ;
struct TYPE_18__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {int da; TYPE_5__ u; int frame_control; } ;
struct TYPE_22__ {int flags; int offchannel_tx_hw_queue; scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {int mtx; TYPE_9__ hw; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_21__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_8__ def; } ;
struct TYPE_16__ {int beacon; } ;
struct TYPE_13__ {int flags; int hw_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_11__* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ieee80211_sub_if_data* FUNC_1 (struct wireless_dev*) ;
 int VAR_12 ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_channel*,unsigned int,unsigned long*,struct sk_buff*,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int const*,size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 struct ieee80211_chanctx_conf* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,size_t) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 struct sta_info* FUNC_17 (struct ieee80211_sub_if_data*,int ) ;

__attribute__((used)) static int FUNC_18(struct wiphy *VAR_13, struct wireless_dev *VAR_14,
        struct ieee80211_channel *VAR_15, bool VAR_16,
        unsigned int VAR_17, const u8 *VAR_18, size_t VAR_19,
        bool VAR_20, bool VAR_21, u64 *VAR_22)
{
 struct ieee80211_sub_if_data *VAR_23 = FUNC_1(VAR_14);
 struct ieee80211_local *VAR_24 = VAR_23->local;
 struct sk_buff *VAR_25;
 struct sta_info *VAR_26;
 const struct ieee80211_mgmt *VAR_27 = (void *)VAR_18;
 bool VAR_28 = 0;
 u32 VAR_29;
 int VAR_30;

 if (VAR_21)
  VAR_29 = VAR_6;
 else
  VAR_29 = VAR_10 |
   VAR_8;

 if (VAR_20)
  VAR_29 |= VAR_7;

 switch (VAR_23->vif.type) {
 case 135:
  if (!VAR_23->vif.bss_conf.ibss_joined)
   VAR_28 = 1;
 case 134:
 case 133:
 case 129:
  if (VAR_23->vif.type != 135 &&
      !FUNC_6(&VAR_23->vif) &&
      !FUNC_11(VAR_23->bss->beacon))
   VAR_28 = 1;
  if (!FUNC_3(VAR_27->frame_control) ||
      VAR_27->u.action.category == VAR_12)
   break;
  FUNC_13();
  VAR_26 = FUNC_17(VAR_23, VAR_27->da);
  FUNC_14();
  if (!VAR_26)
   return -VAR_1;
  break;
 case 128:
 case 131:
  if (!VAR_23->u.mgd.associated)
   VAR_28 = 1;
  break;
 case 130:
  VAR_28 = 1;
  break;
 default:
  return -VAR_3;
 }

 FUNC_9(&VAR_24->mtx);


 if (!VAR_28) {
  struct ieee80211_chanctx_conf *VAR_31;

  FUNC_13();
  VAR_31 = FUNC_12(VAR_23->vif.chanctx_conf);

  if (VAR_31)
   VAR_28 = VAR_15 != VAR_31->def.chan;
  else
   VAR_28 = 1;
  FUNC_14();
 }

 if (VAR_28 && !VAR_16) {
  VAR_30 = -VAR_0;
  goto out_unlock;
 }

 VAR_25 = FUNC_2(VAR_24->hw.extra_tx_headroom + VAR_19);
 if (!VAR_25) {
  VAR_30 = -VAR_2;
  goto out_unlock;
 }
 FUNC_16(VAR_25, VAR_24->hw.extra_tx_headroom);

 FUNC_8(FUNC_15(VAR_25, VAR_19), VAR_18, VAR_19);

 FUNC_0(VAR_25)->flags = VAR_29;

 VAR_25->dev = VAR_23->dev;

 if (!VAR_28) {
  *VAR_22 = (unsigned long) VAR_25;
  FUNC_5(VAR_23, VAR_25);
  VAR_30 = 0;
  goto out_unlock;
 }

 FUNC_0(VAR_25)->flags |= VAR_9 |
     VAR_11;
 if (VAR_24->hw.flags & VAR_4)
  FUNC_0(VAR_25)->hw_queue =
   VAR_24->hw.offchannel_tx_hw_queue;


 VAR_30 = FUNC_4(VAR_24, VAR_23, VAR_15,
           VAR_17, VAR_22, VAR_25,
           VAR_5);
 if (VAR_30)
  FUNC_7(VAR_25);
 out_unlock:
 FUNC_10(&VAR_24->mtx);
 return VAR_30;
}
