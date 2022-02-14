
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_priv {scalar_t__* cck_rates; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int flags; int count; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct minstrel_priv *VAR_1, struct ieee80211_tx_rate *VAR_2)
{
 if (VAR_2->idx < 0)
  return 0;

 if (!VAR_2->count)
  return 0;

 if (VAR_2->flags & VAR_0)
  return 1;

 return VAR_2->idx == VAR_1->cck_rates[0] ||
        VAR_2->idx == VAR_1->cck_rates[1] ||
        VAR_2->idx == VAR_1->cck_rates[2] ||
        VAR_2->idx == VAR_1->cck_rates[3];
}
