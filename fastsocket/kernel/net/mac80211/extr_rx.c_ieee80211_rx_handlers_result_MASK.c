
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ieee80211_supported_band {struct ieee80211_rate* bitrates; } ;
struct ieee80211_rx_status {size_t band; int flag; size_t rate_idx; } ;
struct ieee80211_rx_data {TYPE_6__* sdata; int skb; TYPE_4__* sta; TYPE_3__* local; } ;
struct ieee80211_rate {int dummy; } ;
typedef int ieee80211_rx_result ;
struct TYPE_12__ {TYPE_5__* local; } ;
struct TYPE_11__ {int rx_handlers_queued; int rx_handlers_drop; } ;
struct TYPE_10__ {int rx_dropped; } ;
struct TYPE_8__ {TYPE_1__* wiphy; } ;
struct TYPE_9__ {TYPE_2__ hw; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int ) ;
 struct ieee80211_rx_status* FUNC_1 (int ) ;



 int VAR_0 ;
 int VAR_1 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_rx_data*,struct ieee80211_rate*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_rx_data *VAR_2,
      ieee80211_rx_result VAR_3)
{
 switch (VAR_3) {
 case 130:
  FUNC_0(VAR_2->sdata->local->rx_handlers_drop);
  if (VAR_2->sta)
   VAR_2->sta->rx_dropped++;

 case 131: {
  struct ieee80211_rate *VAR_4 = ((void*)0);
  struct ieee80211_supported_band *VAR_5;
  struct ieee80211_rx_status *VAR_6;

  VAR_6 = FUNC_1((VAR_2->skb));

  VAR_5 = VAR_2->local->hw.wiphy->bands[VAR_6->band];
  if (!(VAR_6->flag & VAR_0) &&
      !(VAR_6->flag & VAR_1))
   VAR_4 = &VAR_5->bitrates[VAR_6->rate_idx];

  FUNC_3(VAR_2, VAR_4);
  break;
  }
 case 129:
  FUNC_0(VAR_2->sdata->local->rx_handlers_drop);
  if (VAR_2->sta)
   VAR_2->sta->rx_dropped++;
  FUNC_2(VAR_2->skb);
  break;
 case 128:
  FUNC_0(VAR_2->sdata->local->rx_handlers_queued);
  break;
 }
}
