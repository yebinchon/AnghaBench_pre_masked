
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_ampdu {int rxa_flags; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_rx_ampdu*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_node *VAR_3, struct ieee80211_rx_ampdu *VAR_4)
{

 FUNC_0(VAR_4);
 VAR_4->rxa_flags &= ~(VAR_0
     | VAR_2
     | VAR_1);
}
