
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u16 ;
typedef int txrc ;
struct sk_buff {scalar_t__ data; scalar_t__ len; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_19__ {int idx; } ;
struct ieee80211_tx_rate_control {int rate_idx_mask; int max_rate_idx; int bss; TYPE_9__* sband; TYPE_8__ reported_rate; struct sk_buff* skb; int * bss_conf; struct ieee80211_hw* hw; } ;
struct TYPE_12__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {int flags; int band; TYPE_1__ control; } ;
struct TYPE_11__ {scalar_t__ type; int bss_conf; int chanctx_conf; } ;
struct ieee80211_if_mesh {int ps; TYPE_3__* sync_ops; int beacon; } ;
struct ieee80211_if_ibss {int presp; } ;
struct ieee80211_if_ap {int ps; int beacon; } ;
struct TYPE_13__ {struct ieee80211_if_mesh mesh; struct ieee80211_if_ibss ibss; struct ieee80211_if_ap ap; } ;
struct ieee80211_sub_if_data {int* rc_rateidx_mask; TYPE_10__ vif; TYPE_2__ u; } ;
struct TYPE_18__ {TYPE_6__* wiphy; } ;
struct ieee80211_local {TYPE_7__ hw; scalar_t__ tx_headroom; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_16__ {TYPE_4__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_5__ def; } ;
struct beacon_data {scalar_t__ tail_len; scalar_t__ tail; scalar_t__ head_len; scalar_t__ head; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_20__ {int n_bitrates; } ;
struct TYPE_17__ {TYPE_9__** bands; } ;
struct TYPE_15__ {int band; } ;
struct TYPE_14__ {int (* adjust_tbtt ) (struct ieee80211_sub_if_data*) ;} ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 struct ieee80211_local* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int *,struct sk_buff*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct ieee80211_tx_rate_control*,int ,int) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,int *,struct ieee80211_tx_rate_control*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 int FUNC_17 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_18 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_19(struct ieee80211_hw *VAR_9,
      struct ieee80211_vif *VAR_10,
      u16 *VAR_11, u16 *VAR_12)
{
 struct ieee80211_local *VAR_13 = FUNC_5(VAR_9);
 struct sk_buff *VAR_14 = ((void*)0);
 struct ieee80211_tx_info *VAR_15;
 struct ieee80211_sub_if_data *VAR_16 = ((void*)0);
 enum ieee80211_band VAR_17;
 struct ieee80211_tx_rate_control VAR_18;
 struct ieee80211_chanctx_conf *VAR_19;

 FUNC_13();

 VAR_16 = FUNC_18(VAR_10);
 VAR_19 = FUNC_12(VAR_16->vif.chanctx_conf);

 if (!FUNC_7(VAR_16) || !VAR_19)
  goto out;

 if (VAR_11)
  *VAR_11 = 0;
 if (VAR_12)
  *VAR_12 = 0;

 if (VAR_16->vif.type == VAR_8) {
  struct ieee80211_if_ap *VAR_20 = &VAR_16->u.ap;
  struct beacon_data *VAR_21 = FUNC_12(VAR_20->beacon);

  if (VAR_21) {




   VAR_14 = FUNC_3(VAR_13->tx_headroom +
         VAR_21->head_len +
         VAR_21->tail_len + 256);
   if (!VAR_14)
    goto out;

   FUNC_16(VAR_14, VAR_13->tx_headroom);
   FUNC_9(FUNC_15(VAR_14, VAR_21->head_len), VAR_21->head,
          VAR_21->head_len);

   FUNC_6(VAR_16, &VAR_20->ps, VAR_14);

   if (VAR_11)
    *VAR_11 = VAR_21->head_len;
   if (VAR_12)
    *VAR_12 = VAR_14->len - VAR_21->head_len;

   if (VAR_21->tail)
    FUNC_9(FUNC_15(VAR_14, VAR_21->tail_len),
           VAR_21->tail, VAR_21->tail_len);
  } else
   goto out;
 } else if (VAR_16->vif.type == VAR_7) {
  struct ieee80211_if_ibss *VAR_22 = &VAR_16->u.ibss;
  struct ieee80211_hdr *VAR_23;
  struct beacon_data *VAR_24 = FUNC_12(VAR_22->presp);

  if (!VAR_24)
   goto out;

  VAR_14 = FUNC_3(VAR_13->tx_headroom + VAR_24->head_len);
  if (!VAR_14)
   goto out;
  FUNC_16(VAR_14, VAR_13->tx_headroom);
  FUNC_9(FUNC_15(VAR_14, VAR_24->head_len), VAR_24->head,
         VAR_24->head_len);

  VAR_23 = (struct ieee80211_hdr *) VAR_14->data;
  VAR_23->frame_control = FUNC_2(VAR_0 |
       VAR_1);
 } else if (FUNC_8(&VAR_16->vif)) {
  struct ieee80211_if_mesh *VAR_25 = &VAR_16->u.mesh;
  struct beacon_data *VAR_26 = FUNC_12(VAR_25->beacon);

  if (!VAR_26)
   goto out;

  if (VAR_25->sync_ops)
   VAR_25->sync_ops->adjust_tbtt(
      VAR_16);

  VAR_14 = FUNC_3(VAR_13->tx_headroom +
        VAR_26->head_len +
        256 +
        VAR_26->tail_len);
  if (!VAR_14)
   goto out;
  FUNC_16(VAR_14, VAR_13->tx_headroom);
  FUNC_9(FUNC_15(VAR_14, VAR_26->head_len), VAR_26->head, VAR_26->head_len);
  FUNC_6(VAR_16, &VAR_25->ps, VAR_14);
  FUNC_9(FUNC_15(VAR_14, VAR_26->tail_len), VAR_26->tail, VAR_26->tail_len);
 } else {
  FUNC_1(1);
  goto out;
 }

 VAR_17 = VAR_19->def.chan->band;

 VAR_15 = FUNC_0(VAR_14);

 VAR_15->flags |= VAR_6;
 VAR_15->flags |= VAR_5;
 VAR_15->band = VAR_17;

 FUNC_10(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.hw = VAR_9;
 VAR_18.sband = VAR_13->hw.wiphy->bands[VAR_17];
 VAR_18.bss_conf = &VAR_16->vif.bss_conf;
 VAR_18.skb = VAR_14;
 VAR_18.reported_rate.idx = -1;
 VAR_18.rate_idx_mask = VAR_16->rc_rateidx_mask[VAR_17];
 if (VAR_18.rate_idx_mask == (1 << VAR_18.sband->n_bitrates) - 1)
  VAR_18.max_rate_idx = -1;
 else
  VAR_18.max_rate_idx = FUNC_4(VAR_18.rate_idx_mask) - 1;
 VAR_18.bss = 1;
 FUNC_11(VAR_16, ((void*)0), &VAR_18);

 VAR_15->control.vif = VAR_10;

 VAR_15->flags |= VAR_3 |
   VAR_2 |
   VAR_4;
 out:
 FUNC_14();
 return VAR_14;
}
