
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_ampdu {int dummy; } ;
struct ieee80211_node {struct ieee80211_rx_ampdu* ni_rx_ampdu; } ;


 int FUNC_0 (struct ieee80211_node*,struct ieee80211_rx_ampdu*) ;

void
FUNC_1(struct ieee80211_node *VAR_0, int VAR_1)
{
 struct ieee80211_rx_ampdu *VAR_2;


 VAR_2 = &VAR_0->ni_rx_ampdu[VAR_1];
 FUNC_0(VAR_0, VAR_2);
}
