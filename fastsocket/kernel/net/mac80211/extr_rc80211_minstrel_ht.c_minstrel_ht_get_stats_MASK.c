
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_rate_stats {int dummy; } ;
struct minstrel_priv {int* cck_rates; } ;
struct minstrel_ht_sta {TYPE_1__* groups; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct TYPE_2__ {int supported; struct minstrel_rate_stats* rates; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211_tx_rate*) ;

__attribute__((used)) static struct minstrel_rate_stats *
FUNC_3(struct minstrel_priv *VAR_3, struct minstrel_ht_sta *VAR_4,
        struct ieee80211_tx_rate *VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_5->flags & VAR_0) {
  VAR_6 = FUNC_2(VAR_5);
  VAR_7 = VAR_5->idx % VAR_1;
 } else {
  VAR_6 = VAR_2;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3->cck_rates); VAR_7++)
   if (VAR_5->idx == VAR_3->cck_rates[VAR_7])
    break;


  if (!(VAR_4->groups[VAR_6].supported & FUNC_1(VAR_7)))
   VAR_7 += 4;
 }
 return &VAR_4->groups[VAR_6].rates[VAR_7];
}
