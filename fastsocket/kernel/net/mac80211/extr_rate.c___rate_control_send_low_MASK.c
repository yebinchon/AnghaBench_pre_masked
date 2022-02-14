
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int skip_table; TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_supported_band {scalar_t__ band; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int max_rate_tries; } ;
struct TYPE_3__ {int count; int idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_supported_band*,struct ieee80211_sta*) ;
 int FUNC_1 (struct ieee80211_supported_band*,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
        struct ieee80211_supported_band *VAR_4,
        struct ieee80211_sta *VAR_5,
        struct ieee80211_tx_info *VAR_6)
{
 if ((VAR_4->band != VAR_0) ||
     !(VAR_6->flags & VAR_2))
  VAR_6->control.rates[0].idx = FUNC_0(VAR_4, VAR_5);
 else
  VAR_6->control.rates[0].idx =
   FUNC_1(VAR_4, VAR_5);

 VAR_6->control.rates[0].count =
  (VAR_6->flags & VAR_1) ?
  1 : VAR_3->max_rate_tries;

 VAR_6->control.skip_table = 1;
}
