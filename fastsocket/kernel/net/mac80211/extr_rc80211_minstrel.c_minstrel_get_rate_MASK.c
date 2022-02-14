
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct minstrel_sta_info {int packet_count; int sample_count; int sample_deferred; int prev_sample; int n_rates; size_t* max_tp_rate; struct minstrel_rate* r; } ;
struct minstrel_rate {scalar_t__ perfect_tx_time; int sample_skipped; scalar_t__ sample_limit; scalar_t__ probability; int rix; } ;
struct minstrel_priv {int lookaround_rate_mrr; int lookaround_rate; scalar_t__ has_mrr; } ;
struct ieee80211_tx_rate_control {TYPE_2__* bss_conf; int rts; struct sk_buff* skb; } ;
struct ieee80211_tx_rate {int count; int idx; } ;
struct TYPE_3__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {int use_cts_prot; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 unsigned int FUNC_2 (struct minstrel_sta_info*) ;
 int FUNC_3 (struct minstrel_rate*,struct ieee80211_tx_info*) ;
 scalar_t__ FUNC_4 (struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, struct ieee80211_sta *VAR_2,
    void *VAR_3, struct ieee80211_tx_rate_control *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4->skb;
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_5);
 struct minstrel_sta_info *VAR_7 = VAR_3;
 struct minstrel_priv *VAR_8 = VAR_1;
 struct ieee80211_tx_rate *VAR_9 = &VAR_6->control.rates[0];
 struct minstrel_rate *VAR_10, *VAR_11;
 unsigned int VAR_12;
 bool VAR_13;
 bool VAR_14;
 int VAR_15;
 int VAR_16;


 if (FUNC_4(VAR_2, VAR_3, VAR_4))
  return;


 VAR_13 = VAR_8->has_mrr &&
        !VAR_4->rts &&
        !VAR_4->bss_conf->use_cts_prot;
 if (VAR_13)
  VAR_16 = VAR_8->lookaround_rate_mrr;
 else
  VAR_16 = VAR_8->lookaround_rate;


 VAR_7->packet_count++;

 VAR_15 = (VAR_7->packet_count * VAR_16 / 100) -
   (VAR_7->sample_count + VAR_7->sample_deferred / 2);


 VAR_14 = VAR_7->prev_sample;
 VAR_7->prev_sample = 0;
 if (VAR_15 < 0 || (!VAR_13 && VAR_14))
  return;

 if (VAR_7->packet_count >= 10000) {
  VAR_7->sample_deferred = 0;
  VAR_7->sample_count = 0;
  VAR_7->packet_count = 0;
 } else if (VAR_15 > VAR_7->n_rates * 2) {
  VAR_7->sample_count += (VAR_15 - VAR_7->n_rates * 2);
 }


 VAR_12 = FUNC_2(VAR_7);
 VAR_10 = &VAR_7->r[VAR_12];
 VAR_11 = &VAR_7->r[VAR_7->max_tp_rate[0]];





 if (VAR_13 &&
     VAR_10->perfect_tx_time > VAR_11->perfect_tx_time &&
     VAR_10->sample_skipped < 20) {






  VAR_6->flags |= VAR_0;
  VAR_9++;
  VAR_7->sample_deferred++;
 } else {
  if (!(VAR_10->sample_limit != 0))
   return;

  VAR_7->sample_count++;
  if (VAR_10->sample_limit > 0)
   VAR_10->sample_limit--;
 }




 if (!VAR_13 &&
    (VAR_7->r[VAR_12].probability > FUNC_1(95, 100)))
  return;

 VAR_7->prev_sample = 1;

 VAR_9->idx = VAR_7->r[VAR_12].rix;
 VAR_9->count = FUNC_3(&VAR_7->r[VAR_12], VAR_6);
}
