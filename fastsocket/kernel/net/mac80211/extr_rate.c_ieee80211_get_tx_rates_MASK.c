
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_rate {scalar_t__ idx; } ;
struct ieee80211_tx_info {size_t band; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct TYPE_5__ {TYPE_3__ hw; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*,struct ieee80211_supported_band*,struct ieee80211_sta*,struct ieee80211_tx_info*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee80211_sta*,struct ieee80211_supported_band*,struct ieee80211_tx_info*,struct ieee80211_tx_rate*,int) ;
 int FUNC_4 (struct ieee80211_sta*,struct ieee80211_tx_info*,struct ieee80211_tx_rate*,int) ;
 int FUNC_5 (struct ieee80211_vif*,struct ieee80211_supported_band*,struct ieee80211_tx_info*,struct ieee80211_tx_rate*,int) ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

void FUNC_7(struct ieee80211_vif *VAR_0,
       struct ieee80211_sta *VAR_1,
       struct sk_buff *VAR_2,
       struct ieee80211_tx_rate *VAR_3,
       int VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5;
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *) VAR_2->data;
 struct ieee80211_tx_info *VAR_7 = FUNC_0(VAR_2);
 struct ieee80211_supported_band *VAR_8;

 FUNC_4(VAR_1, VAR_7, VAR_3, VAR_4);

 if (!VAR_0)
  return;

 VAR_5 = FUNC_6(VAR_0);
 VAR_8 = VAR_5->local->hw.wiphy->bands[VAR_7->band];

 if (FUNC_2(VAR_6->frame_control))
  FUNC_3(VAR_5, VAR_1, VAR_8, VAR_7, VAR_3, VAR_4);

 if (VAR_3[0].idx < 0)
  FUNC_1(&VAR_5->local->hw, VAR_8, VAR_1, VAR_7);

 if (VAR_1)
  FUNC_5(VAR_0, VAR_8, VAR_7, VAR_3, VAR_4);
}
