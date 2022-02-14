
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; int addr; } ;
struct ieee80211_if_managed {int bssid; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_1__ u; } ;
struct TYPE_4__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr_3addr {int addr3; int addr2; int addr1; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ieee80211_hdr_3addr*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_5,
           struct ieee80211_vif *VAR_6)
{
 struct ieee80211_hdr_3addr *VAR_7;
 struct ieee80211_sub_if_data *VAR_8;
 struct ieee80211_if_managed *VAR_9;
 struct ieee80211_local *VAR_10;
 struct sk_buff *VAR_11;

 if (FUNC_0(VAR_6->type != VAR_4))
  return ((void*)0);

 VAR_8 = FUNC_7(VAR_6);
 VAR_9 = &VAR_8->u.mgd;
 VAR_10 = VAR_8->local;

 VAR_11 = FUNC_2(VAR_10->hw.extra_tx_headroom + sizeof(*VAR_7));
 if (!VAR_11)
  return ((void*)0);

 FUNC_6(VAR_11, VAR_10->hw.extra_tx_headroom);

 VAR_7 = (struct ieee80211_hdr_3addr *) FUNC_5(VAR_11,
         sizeof(*VAR_7));
 FUNC_4(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->frame_control = FUNC_1(VAR_2 |
           VAR_3 |
           VAR_1);
 FUNC_3(VAR_7->addr1, VAR_9->bssid, VAR_0);
 FUNC_3(VAR_7->addr2, VAR_6->addr, VAR_0);
 FUNC_3(VAR_7->addr3, VAR_9->bssid, VAR_0);

 return VAR_11;
}
