
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {int tkip_iv16; int tkip_iv32; int security_idx; TYPE_3__* sta; TYPE_1__* local; struct sk_buff* skb; struct ieee80211_key* key; } ;
struct ieee80211_key {int dummy; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int ieee80211_rx_result ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {int wep_rx_tfm; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ieee80211_key*,scalar_t__,int,int ,int ,int,int ,int *,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

ieee80211_rx_result
FUNC_8(struct ieee80211_rx_data *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *) VAR_6->skb->data;
 int VAR_8, VAR_9, VAR_10 = 0;
 struct ieee80211_key *VAR_11 = VAR_6->key;
 struct sk_buff *VAR_12 = VAR_6->skb;
 struct ieee80211_rx_status *VAR_13 = FUNC_0(VAR_12);

 VAR_8 = FUNC_1(VAR_7->frame_control);

 if (!FUNC_2(VAR_7->frame_control))
  return VAR_0;

 if (!VAR_6->sta || VAR_12->len - VAR_8 < 12)
  return VAR_1;


 if (FUNC_5(VAR_6->skb))
  return VAR_1;
 VAR_7 = (void *)VAR_12->data;






 if (VAR_13->flag & VAR_2)
  VAR_10 = 1;

 VAR_9 = FUNC_3(VAR_6->local->wep_rx_tfm,
       VAR_11, VAR_12->data + VAR_8,
       VAR_12->len - VAR_8, VAR_6->sta->sta.addr,
       VAR_7->addr1, VAR_10, VAR_6->security_idx,
       &VAR_6->tkip_iv32,
       &VAR_6->tkip_iv16);
 if (VAR_9 != VAR_3)
  return VAR_1;


 FUNC_7(VAR_12, VAR_12->len - VAR_4);


 FUNC_4(VAR_12->data + VAR_5, VAR_12->data, VAR_8);
 FUNC_6(VAR_12, VAR_5);

 return VAR_0;
}
