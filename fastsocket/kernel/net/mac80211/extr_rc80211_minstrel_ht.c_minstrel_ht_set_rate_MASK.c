
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct minstrel_rate_stats {scalar_t__ probability; int retry_count; int retry_count_rtscts; int retry_updated; } ;
struct minstrel_priv {int* cck_rates; } ;
struct minstrel_ht_sta {int dummy; } ;
struct mcs_group {int streams; int flags; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct TYPE_2__ {int count; int count_rts; int count_cts; int idx; int flags; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct minstrel_priv*,struct minstrel_ht_sta*,int) ;
 struct minstrel_rate_stats* FUNC_3 (struct minstrel_ht_sta*,int) ;
 struct mcs_group* VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct minstrel_priv *VAR_5, struct minstrel_ht_sta *VAR_6,
                     struct ieee80211_sta_rates *VAR_7, int VAR_8, int VAR_9)
{
 const struct mcs_group *VAR_10 = &VAR_4[VAR_9 / VAR_2];
 struct minstrel_rate_stats *VAR_11;
 u8 VAR_12;
 u16 VAR_13;

 VAR_11 = FUNC_3(VAR_6, VAR_9);
 if (!VAR_11->retry_updated)
  FUNC_2(VAR_5, VAR_6, VAR_9);

 if (VAR_11->probability < FUNC_1(20, 100) || !VAR_11->retry_count) {
  VAR_7->rate[VAR_8].count = 2;
  VAR_7->rate[VAR_8].count_rts = 2;
  VAR_7->rate[VAR_8].count_cts = 2;
 } else {
  VAR_7->rate[VAR_8].count = VAR_11->retry_count;
  VAR_7->rate[VAR_8].count_cts = VAR_11->retry_count;
  VAR_7->rate[VAR_8].count_rts = VAR_11->retry_count_rtscts;
 }

 if (VAR_9 / VAR_2 == VAR_3) {
  VAR_12 = VAR_5->cck_rates[VAR_9 % FUNC_0(VAR_5->cck_rates)];
  VAR_13 = 0;
 } else {
  VAR_12 = VAR_9 % VAR_2 +
        (VAR_10->streams - 1) * VAR_2;
  VAR_13 = VAR_0 | VAR_10->flags;
 }

 if (VAR_8 > 0) {
  VAR_7->rate[VAR_8].count = VAR_7->rate[VAR_8].count_rts;
  VAR_13 |= VAR_1;
 }

 VAR_7->rate[VAR_8].idx = VAR_12;
 VAR_7->rate[VAR_8].flags = VAR_13;
}
