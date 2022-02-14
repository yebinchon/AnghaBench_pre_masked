
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211_ratectl_tx_stats {int flags; int ni; } ;
struct TYPE_2__ {int ic_sta; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_ratectl_tx_stats*,int ) ;
 int FUNC_1 (int *,struct ieee80211vap*,int (*) (struct ieee80211_ratectl_tx_stats*,int ),struct ieee80211_ratectl_tx_stats*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_1,
    struct ieee80211_ratectl_tx_stats *VAR_2)
{

 if (VAR_2->flags & VAR_0)
  FUNC_0(VAR_2, VAR_2->ni);
 else {
  FUNC_1(&VAR_1->iv_ic->ic_sta, VAR_1,
      FUNC_0, VAR_2);
 }
}
