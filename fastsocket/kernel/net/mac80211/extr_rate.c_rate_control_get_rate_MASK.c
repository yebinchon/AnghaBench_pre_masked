
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ieee80211_sta {int dummy; } ;
struct sta_info {void* rate_ctrl_priv; struct ieee80211_sta sta; } ;
struct rate_control_ref {int priv; TYPE_1__* ops; } ;
struct ieee80211_tx_rate_control {int skb; } ;
struct TYPE_10__ {TYPE_5__* rates; } ;
struct ieee80211_tx_info {TYPE_4__ control; } ;
struct ieee80211_sub_if_data {int vif; TYPE_3__* local; } ;
struct TYPE_11__ {int idx; scalar_t__ count; scalar_t__ flags; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_2__ hw; struct rate_control_ref* rate_ctrl; } ;
struct TYPE_7__ {int (* get_rate ) (int ,struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;} ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct ieee80211_sta*,int ,TYPE_5__*,int ) ;
 int FUNC_3 (int ,struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;
 scalar_t__ FUNC_4 (struct sta_info*,int ) ;

void FUNC_5(struct ieee80211_sub_if_data *VAR_4,
      struct sta_info *VAR_5,
      struct ieee80211_tx_rate_control *VAR_6)
{
 struct rate_control_ref *VAR_7 = VAR_4->local->rate_ctrl;
 void *VAR_8 = ((void*)0);
 struct ieee80211_sta *VAR_9 = ((void*)0);
 struct ieee80211_tx_info *VAR_10 = FUNC_1(VAR_6->skb);
 int VAR_11;

 if (VAR_5 && FUNC_4(VAR_5, VAR_3)) {
  VAR_9 = &VAR_5->sta;
  VAR_8 = VAR_5->rate_ctrl_priv;
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_10->control.rates[VAR_11].idx = -1;
  VAR_10->control.rates[VAR_11].flags = 0;
  VAR_10->control.rates[VAR_11].count = 0;
 }

 if (VAR_4->local->hw.flags & VAR_0)
  return;

 VAR_7->ops->get_rate(VAR_7->priv, VAR_9, VAR_8, VAR_6);

 if (VAR_4->local->hw.flags & VAR_1)
  return;

 FUNC_2(&VAR_4->vif, VAR_9, VAR_6->skb,
          VAR_10->control.rates,
          FUNC_0(VAR_10->control.rates));
}
