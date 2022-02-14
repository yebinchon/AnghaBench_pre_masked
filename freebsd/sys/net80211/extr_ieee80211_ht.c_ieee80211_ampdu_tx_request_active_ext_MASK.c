
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_flags; scalar_t__ txa_attempts; } ;
struct ieee80211_node {struct ieee80211_tx_ampdu* ni_tx_ampdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_tx_ampdu*) ;

int
FUNC_1(struct ieee80211_node *VAR_2, int VAR_3,
    int VAR_4)
{
 struct ieee80211_tx_ampdu *VAR_5;

 if (VAR_3 < 0 || VAR_3 > 15)
  return (0);
 VAR_5 = &VAR_2->ni_tx_ampdu[VAR_3];


 FUNC_0(VAR_5);
 if (VAR_4 == 1) {
  VAR_5->txa_flags |= VAR_1;
  VAR_5->txa_attempts = 0;
 } else {

  VAR_5->txa_flags |= VAR_0;
 }
 return (1);
}
