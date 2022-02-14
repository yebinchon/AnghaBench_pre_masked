
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct minstrel_sta_info {scalar_t__ sample_deferred; scalar_t__ stats_update; int sample_count; TYPE_2__* r; } ;
struct minstrel_priv {int update_interval; } ;
struct ieee80211_tx_rate {scalar_t__ idx; scalar_t__ count; } ;
struct TYPE_3__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ status; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {int success; int attempts; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct minstrel_priv*,struct minstrel_sta_info*) ;
 int FUNC_2 (struct minstrel_sta_info*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5, struct ieee80211_supported_band *VAR_6,
                   struct ieee80211_sta *VAR_7, void *VAR_8,
     struct sk_buff *VAR_9)
{
 struct minstrel_priv *VAR_10 = VAR_5;
 struct minstrel_sta_info *VAR_11 = VAR_8;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_9);
 struct ieee80211_tx_rate *VAR_13 = VAR_12->status.rates;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_16 = !!(VAR_12->flags & VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  if (VAR_13[VAR_14].idx < 0)
   break;

  VAR_15 = FUNC_2(VAR_11, VAR_13[VAR_14].idx);
  if (VAR_15 < 0)
   continue;

  VAR_11->r[VAR_15].attempts += VAR_13[VAR_14].count;

  if ((VAR_14 != VAR_2 - 1) && (VAR_13[VAR_14 + 1].idx < 0))
   VAR_11->r[VAR_15].success += VAR_16;
 }

 if ((VAR_12->flags & VAR_1) && (VAR_14 >= 0))
  VAR_11->sample_count++;

 if (VAR_11->sample_deferred > 0)
  VAR_11->sample_deferred--;

 if (FUNC_3(VAR_4, VAR_11->stats_update +
    (VAR_10->update_interval * VAR_0) / 1000))
  FUNC_1(VAR_10, VAR_11);
}
