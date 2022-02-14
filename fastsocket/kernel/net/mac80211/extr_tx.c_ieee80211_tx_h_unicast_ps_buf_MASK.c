
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int addr; int aid; } ;
struct sta_info {TYPE_2__ sta; int * ps_tx_buf; int sdata; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int * vif; scalar_t__ jiffies; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_tx_data {TYPE_5__* sdata; TYPE_3__* skb; struct ieee80211_local* local; struct sta_info* sta; } ;
struct ieee80211_local {scalar_t__ total_ps_buffered; int sta_cleanup; int hw; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_10__ {int vif; } ;
struct TYPE_9__ {scalar_t__ data; } ;


 struct ieee80211_tx_info* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_5__*,char*,int ,...) ;
 int FUNC_8 (struct ieee80211_local*) ;
 int FUNC_9 (scalar_t__) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (struct sta_info*) ;
 int FUNC_15 (struct sta_info*,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_18(struct ieee80211_tx_data *VAR_10)
{
 struct sta_info *VAR_11 = VAR_10->sta;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_10->skb);
 struct ieee80211_hdr *VAR_13 = (struct ieee80211_hdr *)VAR_10->skb->data;
 struct ieee80211_local *VAR_14 = VAR_10->local;

 if (FUNC_17(!VAR_11))
  return VAR_5;

 if (FUNC_17((FUNC_15(VAR_11, VAR_8) ||
        FUNC_15(VAR_11, VAR_7)) &&
       !(VAR_12->flags & VAR_0))) {
  int VAR_15 = FUNC_11(VAR_10->skb);


  if (FUNC_5(VAR_13->frame_control) &&
      !FUNC_3(VAR_13->frame_control) &&
      !FUNC_4(VAR_13->frame_control) &&
      !FUNC_2(VAR_13->frame_control)) {
   VAR_12->flags |= VAR_0;
   return VAR_5;
  }

  FUNC_7(VAR_11->sdata, "STA %pM aid %d: PS buffer for AC %d\n",
         VAR_11->sta.addr, VAR_11->sta.aid, VAR_15);
  if (VAR_10->local->total_ps_buffered >= VAR_4)
   FUNC_8(VAR_10->local);
  if (FUNC_12(&VAR_11->ps_tx_buf[VAR_15]) >= VAR_3) {
   struct sk_buff *VAR_16 = FUNC_10(&VAR_11->ps_tx_buf[VAR_15]);
   FUNC_7(VAR_10->sdata,
          "STA %pM TX buffer for AC %d full - dropping oldest frame\n",
          VAR_11->sta.addr, VAR_15);
   FUNC_1(&VAR_14->hw, VAR_16);
  } else
   VAR_10->local->total_ps_buffered++;

  VAR_12->control.jiffies = VAR_9;
  VAR_12->control.vif = &VAR_10->sdata->vif;
  VAR_12->flags |= VAR_1;
  FUNC_13(&VAR_11->ps_tx_buf[VAR_15], VAR_10->skb);

  if (!FUNC_16(&VAR_14->sta_cleanup))
   FUNC_6(&VAR_14->sta_cleanup,
      FUNC_9(VAR_9 +
      VAR_2));





  FUNC_14(VAR_11);

  return VAR_6;
 } else if (FUNC_17(FUNC_15(VAR_11, VAR_8))) {
  FUNC_7(VAR_10->sdata,
         "STA %pM in PS mode, but polling/in SP -> send frame\n",
         VAR_11->sta.addr);
 }

 return VAR_5;
}
