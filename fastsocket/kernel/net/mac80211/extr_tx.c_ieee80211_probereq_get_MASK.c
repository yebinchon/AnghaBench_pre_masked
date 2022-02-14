
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int const* addr; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_2__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr_3addr {int addr3; int * addr2; int addr1; int frame_control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (struct ieee80211_hdr_3addr*,int ,int) ;
 int * FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_4,
           struct ieee80211_vif *VAR_5,
           const u8 *VAR_6, size_t VAR_7,
           size_t VAR_8)
{
 struct ieee80211_sub_if_data *VAR_9;
 struct ieee80211_local *VAR_10;
 struct ieee80211_hdr_3addr *VAR_11;
 struct sk_buff *VAR_12;
 size_t VAR_13;
 u8 *VAR_14;

 VAR_9 = FUNC_7(VAR_5);
 VAR_10 = VAR_9->local;
 VAR_13 = 2 + VAR_7;

 VAR_12 = FUNC_1(VAR_10->hw.extra_tx_headroom + sizeof(*VAR_11) +
       VAR_13 + VAR_8);
 if (!VAR_12)
  return ((void*)0);

 FUNC_6(VAR_12, VAR_10->hw.extra_tx_headroom);

 VAR_11 = (struct ieee80211_hdr_3addr *) FUNC_5(VAR_12, sizeof(*VAR_11));
 FUNC_4(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->frame_control = FUNC_0(VAR_1 |
      VAR_2);
 FUNC_2(VAR_11->addr1);
 FUNC_3(VAR_11->addr2, VAR_5->addr, VAR_0);
 FUNC_2(VAR_11->addr3);

 VAR_14 = FUNC_5(VAR_12, VAR_13);
 *VAR_14++ = VAR_3;
 *VAR_14++ = VAR_7;
 if (VAR_7)
  FUNC_3(VAR_14, VAR_6, VAR_7);
 VAR_14 += VAR_7;

 return VAR_12;
}
