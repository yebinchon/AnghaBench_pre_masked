
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


typedef int u8 ;
struct tid_ampdu_tx {int dummy; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_data {int flags; TYPE_9__* sta; struct sk_buff* skb; struct ieee80211_sub_if_data* sdata; int skbs; struct ieee80211_local* local; } ;
struct TYPE_13__ {int sta; } ;
struct TYPE_14__ {TYPE_2__ vlan; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {scalar_t__ control_port_protocol; TYPE_5__* dev; TYPE_3__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_19__ {int flags; TYPE_7__* wiphy; } ;
struct ieee80211_local {TYPE_8__ hw; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_17__ {int * tid_tx; } ;
struct TYPE_20__ {TYPE_6__ ampdu_mlme; } ;
struct TYPE_18__ {scalar_t__ frag_threshold; } ;
struct TYPE_16__ {TYPE_4__* ieee80211_ptr; } ;
struct TYPE_15__ {scalar_t__ use_4addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_tx_data*,struct sk_buff*,struct ieee80211_tx_info*,struct tid_ampdu_tx*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_tx_data*,int ,int) ;
 void* FUNC_8 (int ) ;
 TYPE_9__* FUNC_9 (struct ieee80211_sub_if_data*,int ) ;
 TYPE_9__* FUNC_10 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_11 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_13(struct ieee80211_sub_if_data *VAR_17,
       struct ieee80211_tx_data *VAR_18,
       struct sk_buff *VAR_19)
{
 struct ieee80211_local *VAR_20 = VAR_17->local;
 struct ieee80211_hdr *VAR_21;
 struct ieee80211_tx_info *VAR_22 = FUNC_0(VAR_19);
 int VAR_23;
 u8 *VAR_24;

 FUNC_7(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->skb = VAR_19;
 VAR_18->local = VAR_20;
 VAR_18->sdata = VAR_17;
 FUNC_1(&VAR_18->skbs);






 VAR_22->flags &= ~VAR_10;

 VAR_21 = (struct ieee80211_hdr *) VAR_19->data;

 if (VAR_17->vif.type == VAR_12) {
  VAR_18->sta = FUNC_8(VAR_17->u.vlan.sta);
  if (!VAR_18->sta && VAR_17->dev->ieee80211_ptr->use_4addr)
   return VAR_14;
 } else if (VAR_22->flags & VAR_8 ||
     VAR_18->sdata->control_port_protocol == VAR_18->skb->protocol) {
  VAR_18->sta = FUNC_10(VAR_17, VAR_21->addr1);
 }
 if (!VAR_18->sta)
  VAR_18->sta = FUNC_9(VAR_17, VAR_21->addr1);

 if (VAR_18->sta && FUNC_3(VAR_21->frame_control) &&
     !FUNC_4(VAR_21->frame_control) &&
     (VAR_20->hw.flags & VAR_1) &&
     !(VAR_20->hw.flags & VAR_2)) {
  struct tid_ampdu_tx *VAR_25;

  VAR_24 = FUNC_2(VAR_21);
  VAR_23 = *VAR_24 & VAR_3;

  VAR_25 = FUNC_8(VAR_18->sta->ampdu_mlme.tid_tx[VAR_23]);
  if (VAR_25) {
   bool VAR_26;

   VAR_26 = FUNC_5(VAR_18, VAR_19, VAR_22,
             VAR_25, VAR_23);

   if (FUNC_12(VAR_26))
    return VAR_15;
  }
 }

 if (FUNC_6(VAR_21->addr1)) {
  VAR_18->flags &= ~VAR_11;
  VAR_22->flags |= VAR_9;
 } else
  VAR_18->flags |= VAR_11;

 if (!(VAR_22->flags & VAR_6)) {
  if (!(VAR_18->flags & VAR_11) ||
      VAR_19->len + VAR_0 <= VAR_20->hw.wiphy->frag_threshold ||
      VAR_22->flags & VAR_4)
   VAR_22->flags |= VAR_6;
 }

 if (!VAR_18->sta)
  VAR_22->flags |= VAR_5;
 else if (FUNC_11(VAR_18->sta, VAR_16))
  VAR_22->flags |= VAR_5;

 VAR_22->flags |= VAR_7;

 return VAR_13;
}
