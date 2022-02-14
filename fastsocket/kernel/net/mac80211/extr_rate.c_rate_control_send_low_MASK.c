
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_tx_rate_control {TYPE_3__* bss_conf; scalar_t__ bss; int hw; struct ieee80211_supported_band* sband; int skb; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_supported_band {size_t band; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int* mcast_rate; int basic_rates; } ;
struct TYPE_4__ {int idx; } ;


 struct ieee80211_tx_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ieee80211_supported_band*,struct ieee80211_sta*,struct ieee80211_tx_info*) ;
 scalar_t__ FUNC_2 (struct ieee80211_tx_rate_control*) ;
 int FUNC_3 (int*,int ,struct ieee80211_supported_band*) ;

bool FUNC_4(struct ieee80211_sta *VAR_0,
      void *VAR_1,
      struct ieee80211_tx_rate_control *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_0(VAR_2->skb);
 struct ieee80211_supported_band *VAR_4 = VAR_2->sband;
 int VAR_5;

 if (!VAR_0 || !VAR_1 || FUNC_2(VAR_2)) {
  FUNC_1(VAR_2->hw, VAR_4, VAR_0, VAR_3);

  if (!VAR_0 && VAR_2->bss) {
   VAR_5 = VAR_2->bss_conf->mcast_rate[VAR_4->band];
   if (VAR_5 > 0) {
    VAR_3->control.rates[0].idx = VAR_5 - 1;
    return 1;
   }

   FUNC_3(&VAR_3->control.rates[0].idx,
           VAR_2->bss_conf->basic_rates,
           VAR_4);
  }
  return 1;
 }
 return 0;
}
