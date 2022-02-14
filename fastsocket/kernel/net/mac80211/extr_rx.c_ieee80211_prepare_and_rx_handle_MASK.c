
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sub_if_data {int name; } ;
struct ieee80211_rx_status {int rx_flags; } ;
struct ieee80211_rx_data {struct sk_buff* skb; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct TYPE_2__ {int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_rx_data*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ieee80211_rx_data*,struct ieee80211_hdr*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_rx_data *VAR_2,
         struct sk_buff *VAR_3, bool VAR_4)
{
 struct ieee80211_local *VAR_5 = VAR_2->local;
 struct ieee80211_sub_if_data *VAR_6 = VAR_2->sdata;
 struct ieee80211_rx_status *VAR_7 = FUNC_0(VAR_3);
 struct ieee80211_hdr *VAR_8 = (void *)VAR_3->data;
 int VAR_9;

 VAR_2->skb = VAR_3;
 VAR_7->rx_flags |= VAR_1;
 VAR_9 = FUNC_3(VAR_2, VAR_8);

 if (!VAR_9)
  return 0;

 if (!VAR_4) {
  VAR_3 = FUNC_4(VAR_3, VAR_0);
  if (!VAR_3) {
   if (FUNC_2())
    FUNC_5(VAR_5->hw.wiphy,
     "failed to copy skb for %s\n",
     VAR_6->name);
   return 1;
  }

  VAR_2->skb = VAR_3;
 }

 FUNC_1(VAR_2);
 return 1;
}
