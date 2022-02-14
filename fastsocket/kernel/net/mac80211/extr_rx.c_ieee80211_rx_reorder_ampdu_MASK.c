
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct tid_ampdu_rx {int last_rx; scalar_t__ timeout; } ;
struct TYPE_3__ {int * tid_rx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int pkt_type; scalar_t__ data; } ;
struct ieee80211_rx_status {int rx_flags; } ;
struct ieee80211_rx_data {TYPE_2__* sdata; struct sta_info* sta; struct ieee80211_local* local; struct sk_buff* skb; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
struct TYPE_4__ {int work; int skb_queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 size_t* FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct tid_ampdu_rx*,struct sk_buff*,struct sk_buff_head*) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 struct tid_ampdu_rx* FUNC_8 (int ) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_rx_data *VAR_9,
           struct sk_buff_head *VAR_10)
{
 struct sk_buff *VAR_11 = VAR_9->skb;
 struct ieee80211_local *VAR_12 = VAR_9->local;
 struct ieee80211_hdr *VAR_13 = (struct ieee80211_hdr *) VAR_11->data;
 struct ieee80211_rx_status *VAR_14 = FUNC_0(VAR_11);
 struct sta_info *VAR_15 = VAR_9->sta;
 struct tid_ampdu_rx *VAR_16;
 u16 VAR_17;
 u8 VAR_18, VAR_19;

 if (!FUNC_4(VAR_13->frame_control))
  goto dont_reorder;






 if (!VAR_15)
  goto dont_reorder;

 VAR_19 = *FUNC_3(VAR_13) &
       VAR_1;
 VAR_18 = *FUNC_3(VAR_13) & VAR_3;

 VAR_16 = FUNC_8(VAR_15->ampdu_mlme.tid_rx[VAR_18]);
 if (!VAR_16)
  goto dont_reorder;


 if (FUNC_10(VAR_13->frame_control & FUNC_2(VAR_7)))
  goto dont_reorder;


 if (VAR_19 != VAR_0 &&
     VAR_19 != VAR_2)
  goto dont_reorder;


 if (!(VAR_14->rx_flags & VAR_4))
  goto dont_reorder;




 if (VAR_16->timeout)
  VAR_16->last_rx = VAR_8;


 VAR_17 = FUNC_7(VAR_13->seq_ctrl);
 if (VAR_17 & VAR_5) {
  VAR_11->pkt_type = VAR_6;
  FUNC_9(&VAR_9->sdata->skb_queue, VAR_11);
  FUNC_5(&VAR_12->hw, &VAR_9->sdata->work);
  return;
 }
 if (FUNC_6(VAR_9->sdata, VAR_16, VAR_11,
          VAR_10))
  return;

 dont_reorder:
 FUNC_1(VAR_10, VAR_11);
}
