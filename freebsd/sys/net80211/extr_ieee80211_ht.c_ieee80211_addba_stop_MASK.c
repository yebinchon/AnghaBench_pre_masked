
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_flags; scalar_t__ txa_attempts; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_tx_ampdu*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_node *VAR_1, struct ieee80211_tx_ampdu *VAR_2)
{

 FUNC_0(VAR_2);
 if (VAR_2->txa_flags & VAR_0) {

  VAR_2->txa_flags &= ~VAR_0;
 }
 VAR_2->txa_attempts = 0;
}
