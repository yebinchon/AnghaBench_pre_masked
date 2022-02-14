
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_flags; } ;
struct ieee80211_node {struct ieee80211_tx_ampdu* ni_tx_ampdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_tx_ampdu*) ;
 int FUNC_1 (struct ieee80211_tx_ampdu*) ;

int
FUNC_2(struct ieee80211_node *VAR_2, int VAR_3)
{
 struct ieee80211_tx_ampdu *VAR_4;

 if (VAR_3 < 0 || VAR_3 > 15)
  return (0);
 VAR_4 = &VAR_2->ni_tx_ampdu[VAR_3];


 if ((VAR_4->txa_flags & VAR_1) == 0) {

  FUNC_1(VAR_4);
 }

 VAR_4->txa_flags &= ~VAR_0;
 FUNC_0(VAR_4);
 return (1);
}
