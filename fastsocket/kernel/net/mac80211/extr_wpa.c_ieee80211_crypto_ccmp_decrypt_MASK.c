
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int data; int len; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {int security_idx; struct sk_buff* skb; int sta; struct ieee80211_key* key; } ;
struct TYPE_3__ {int * rx_pn; int tfm; int replays; } ;
struct TYPE_4__ {TYPE_1__ ccmp; } ;
struct ieee80211_key {TYPE_2__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_rx_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct sk_buff*,int *,int *,int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;

ieee80211_rx_result
FUNC_14(struct ieee80211_rx_data *VAR_7)
{
 struct ieee80211_hdr *VAR_8 = (struct ieee80211_hdr *)VAR_7->skb->data;
 int VAR_9;
 struct ieee80211_key *VAR_10 = VAR_7->key;
 struct sk_buff *VAR_11 = VAR_7->skb;
 struct ieee80211_rx_status *VAR_12 = FUNC_0(VAR_11);
 u8 VAR_13[VAR_3];
 int VAR_14;
 int VAR_15;

 VAR_9 = FUNC_4(VAR_8->frame_control);

 if (!FUNC_5(VAR_8->frame_control) &&
     !FUNC_6(VAR_8))
  return VAR_4;

 VAR_14 = VAR_11->len - VAR_9 - VAR_1 - VAR_2;
 if (!VAR_7->sta || VAR_14 < 0)
  return VAR_5;

 if (VAR_12->flag & VAR_6) {
  if (!FUNC_10(VAR_7->skb, VAR_9 + VAR_1))
   return VAR_5;
 } else {
  if (FUNC_12(VAR_7->skb))
   return VAR_5;
 }

 FUNC_1(VAR_13, VAR_11->data + VAR_9);

 VAR_15 = VAR_7->security_idx;

 if (FUNC_7(VAR_13, VAR_10->u.ccmp.rx_pn[VAR_15], VAR_3) <= 0) {
  VAR_10->u.ccmp.replays++;
  return VAR_5;
 }

 if (!(VAR_12->flag & VAR_6)) {
  u8 VAR_16[6 * VAR_0];

  FUNC_2(VAR_11, VAR_13, VAR_16, 1);

  if (FUNC_3(
       VAR_10->u.ccmp.tfm, VAR_16,
       VAR_11->data + VAR_9 + VAR_1, VAR_14,
       VAR_11->data + VAR_11->len - VAR_2,
       VAR_11->data + VAR_9 + VAR_1))
   return VAR_5;
 }

 FUNC_8(VAR_10->u.ccmp.rx_pn[VAR_15], VAR_13, VAR_3);


 if (FUNC_11(VAR_11, VAR_11->len - VAR_2))
  return VAR_5;
 FUNC_9(VAR_11->data + VAR_1, VAR_11->data, VAR_9);
 FUNC_13(VAR_11, VAR_1);

 return VAR_4;
}
