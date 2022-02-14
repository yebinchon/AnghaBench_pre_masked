
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {struct sk_buff* skb; int key; int local; TYPE_1__* sta; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_rx_result ;
typedef int __le16 ;
struct TYPE_2__ {int wep_weak_iv_count; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

ieee80211_rx_result
FUNC_10(struct ieee80211_rx_data *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_6->skb;
 struct ieee80211_rx_status *VAR_8 = FUNC_0(VAR_7);
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)VAR_7->data;
 __le16 VAR_10 = VAR_9->frame_control;

 if (!FUNC_3(VAR_10) && !FUNC_2(VAR_10))
  return VAR_0;

 if (!(VAR_8->flag & VAR_2)) {
  if (FUNC_9(VAR_6->skb))
   return VAR_1;
  if (VAR_6->sta && FUNC_5(VAR_6->skb, VAR_6->key))
   VAR_6->sta->wep_weak_iv_count++;
  if (FUNC_4(VAR_6->local, VAR_6->skb, VAR_6->key))
   return VAR_1;
 } else if (!(VAR_8->flag & VAR_3)) {
  if (!FUNC_7(VAR_6->skb, FUNC_1(VAR_10) + VAR_5))
   return VAR_1;
  if (VAR_6->sta && FUNC_5(VAR_6->skb, VAR_6->key))
   VAR_6->sta->wep_weak_iv_count++;
  FUNC_6(VAR_6->local, VAR_6->skb, VAR_6->key);

  if (FUNC_8(VAR_6->skb, VAR_6->skb->len - VAR_4))
   return VAR_1;
 }

 return VAR_0;
}
