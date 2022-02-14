
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_priv {TYPE_2__* hw; } ;
struct minstrel_ht_sta {int sta; int max_prob_rate; int max_tp_rate2; int max_tp_rate; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct TYPE_4__ {int max_rates; } ;
struct TYPE_3__ {int idx; } ;


 int VAR_0 ;
 struct ieee80211_sta_rates* FUNC_0 (int,int ) ;
 int FUNC_1 (struct minstrel_priv*,struct minstrel_ht_sta*,struct ieee80211_sta_rates*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,struct ieee80211_sta_rates*) ;

__attribute__((used)) static void
FUNC_3(struct minstrel_priv *VAR_1, struct minstrel_ht_sta *VAR_2)
{
 struct ieee80211_sta_rates *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;


 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4++, VAR_2->max_tp_rate);

 if (VAR_1->hw->max_rates >= 3) {

  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4++, VAR_2->max_tp_rate2);
 }

 if (VAR_1->hw->max_rates >= 2) {


  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4++, VAR_2->max_prob_rate);
 }

 VAR_3->rate[VAR_4].idx = -1;
 FUNC_2(VAR_1->hw, VAR_2->sta, VAR_3);
}
