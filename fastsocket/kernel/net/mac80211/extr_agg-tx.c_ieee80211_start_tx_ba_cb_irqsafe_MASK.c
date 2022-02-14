
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int pkt_type; int cb; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int work; int skb_queue; struct ieee80211_local* local; } ;
struct ieee80211_ra_tid {int tid; int ra; } ;
struct ieee80211_local {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 struct ieee80211_sub_if_data* FUNC_5 (struct ieee80211_vif*) ;

void FUNC_6(struct ieee80211_vif *VAR_2,
          const u8 *VAR_3, u16 VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_5(VAR_2);
 struct ieee80211_local *VAR_6 = VAR_5->local;
 struct ieee80211_ra_tid *VAR_7;
 struct sk_buff *VAR_8 = FUNC_0(0);

 if (FUNC_4(!VAR_8))
  return;

 VAR_7 = (struct ieee80211_ra_tid *) &VAR_8->cb;
 FUNC_2(&VAR_7->ra, VAR_3, VAR_0);
 VAR_7->tid = VAR_4;

 VAR_8->pkt_type = VAR_1;
 FUNC_3(&VAR_5->skb_queue, VAR_8);
 FUNC_1(&VAR_6->hw, &VAR_5->work);
}
