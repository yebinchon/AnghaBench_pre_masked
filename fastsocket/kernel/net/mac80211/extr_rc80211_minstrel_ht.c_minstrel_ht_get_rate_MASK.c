
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct minstrel_priv {int fixed_rate_idx; int* cck_rates; TYPE_2__* hw; } ;
struct minstrel_ht_sta {int max_tp_rate; int max_tp_rate2; int max_prob_rate; scalar_t__ sample_packets; int total_packets; int tx_flags; } ;
struct minstrel_ht_sta_priv {int legacy; int is_ht; struct minstrel_ht_sta ht; } ;
struct mcs_group {int streams; int flags; } ;
struct ieee80211_tx_rate_control {TYPE_4__* skb; int short_preamble; } ;
struct ieee80211_tx_rate {int count; int idx; int flags; } ;
struct TYPE_5__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ status; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_8__ {scalar_t__ protocol; } ;
struct TYPE_7__ {void (* get_rate ) (void*,struct ieee80211_sta*,int *,struct ieee80211_tx_rate_control*) ;} ;
struct TYPE_6__ {int max_rates; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 int FUNC_4 (struct minstrel_priv*,struct minstrel_ht_sta*,int ) ;
 struct mcs_group* VAR_6 ;
 scalar_t__ FUNC_5 (struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;
 void FUNC_6 (void*,struct ieee80211_sta*,int *,struct ieee80211_tx_rate_control*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_7, struct ieee80211_sta *VAR_8, void *VAR_9,
                     struct ieee80211_tx_rate_control *VAR_10)
{
 const struct mcs_group *VAR_11;
 struct ieee80211_tx_info *VAR_12 = FUNC_1(VAR_10->skb);
 struct ieee80211_tx_rate *VAR_13 = &VAR_12->status.rates[0];
 struct minstrel_ht_sta_priv *VAR_14 = VAR_9;
 struct minstrel_ht_sta *VAR_15 = &VAR_14->ht;
 struct minstrel_priv *VAR_16 = VAR_7;
 int VAR_17;

 if (FUNC_5(VAR_8, VAR_9, VAR_10))
  return;

 if (!VAR_14->is_ht)
  return VAR_5.get_rate(VAR_7, VAR_8, &VAR_14->legacy, VAR_10);

 VAR_12->flags |= VAR_15->tx_flags;
 FUNC_4(VAR_16, VAR_15, VAR_10->short_preamble);


 if (VAR_16->hw->max_rates == 1 &&
     VAR_10->skb->protocol == FUNC_2(VAR_0))
  VAR_17 = -1;
 else
  VAR_17 = FUNC_3(VAR_16, VAR_15);
 VAR_15->total_packets++;


 if (VAR_15->total_packets == ~0) {
  VAR_15->total_packets = 0;
  VAR_15->sample_packets = 0;
 }

 if (VAR_17 < 0)
  return;

 VAR_11 = &VAR_6[VAR_17 / VAR_3];
 VAR_12->flags |= VAR_1;
 VAR_13->count = 1;

 if (VAR_17 / VAR_3 == VAR_4) {
  int VAR_18 = VAR_17 % FUNC_0(VAR_16->cck_rates);
  VAR_13->idx = VAR_16->cck_rates[VAR_18];
  VAR_13->flags = 0;
  return;
 }

 VAR_13->idx = VAR_17 % VAR_3 +
      (VAR_11->streams - 1) * VAR_3;
 VAR_13->flags = VAR_2 | VAR_11->flags;
}
