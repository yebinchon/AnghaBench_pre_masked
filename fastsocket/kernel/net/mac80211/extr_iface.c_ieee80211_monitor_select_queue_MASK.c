
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_radiotap_header {int it_len; } ;
struct TYPE_2__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hdr {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sk_buff*,struct ieee80211_hdr*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u16 FUNC_3(struct net_device *VAR_1,
       struct sk_buff *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);
 struct ieee80211_local *VAR_4 = VAR_3->local;
 struct ieee80211_hdr *VAR_5;
 struct ieee80211_radiotap_header *VAR_6 = (void *)VAR_2->data;

 if (VAR_4->hw.queues < VAR_0)
  return 0;

 if (VAR_2->len < 4 ||
     VAR_2->len < FUNC_2(VAR_6->it_len) + 2 )
  return 0;

 VAR_5 = (void *)((u8 *)VAR_2->data + FUNC_2(VAR_6->it_len));

 return FUNC_1(VAR_3, VAR_2, VAR_5);
}
