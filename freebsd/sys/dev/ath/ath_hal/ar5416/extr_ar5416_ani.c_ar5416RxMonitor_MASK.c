
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct TYPE_5__ {int ns_avgbrssi; } ;
struct TYPE_6__ {TYPE_1__ ast_nodestats; } ;
struct ath_hal_5212 {TYPE_2__ ah_stats; } ;
struct ath_hal {int dummy; } ;
struct TYPE_7__ {int ns_avgbrssi; } ;
typedef TYPE_3__ HAL_NODE_STATS ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;

void
FUNC_1(struct ath_hal *VAR_0, const HAL_NODE_STATS *VAR_1,
  const struct ieee80211_channel *VAR_2)
{
 struct ath_hal_5212 *VAR_3 = FUNC_0(VAR_0);
 VAR_3->ah_stats.ast_nodestats.ns_avgbrssi = VAR_1->ns_avgbrssi;
}
