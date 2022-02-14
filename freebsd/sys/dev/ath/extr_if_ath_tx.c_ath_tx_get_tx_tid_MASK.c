
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int dummy; } ;
struct ieee80211_node {struct ieee80211_tx_ampdu* ni_tx_ampdu; } ;
struct ath_node {struct ieee80211_node an_node; } ;


 int VAR_0 ;

struct ieee80211_tx_ampdu *
FUNC_0(struct ath_node *VAR_1, int VAR_2)
{
 struct ieee80211_node *VAR_3 = &VAR_1->an_node;
 struct ieee80211_tx_ampdu *VAR_4;

 if (VAR_2 == VAR_0)
  return ((void*)0);

 VAR_4 = &VAR_3->ni_tx_ampdu[VAR_2];
 return VAR_4;
}
