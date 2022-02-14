
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_addba_response_timeout ) (struct ieee80211_node*,struct ieee80211_tx_ampdu*) ;} ;
struct ieee80211_tx_ampdu {int txa_attempts; int txa_flags; struct ieee80211_node* txa_ni; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_node*,struct ieee80211_tx_ampdu*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct ieee80211_tx_ampdu *VAR_2 = VAR_1;
 struct ieee80211_node *VAR_3 = VAR_2->txa_ni;
 struct ieee80211com *VAR_4 = VAR_3->ni_ic;


 VAR_2->txa_flags &= ~VAR_0;
 VAR_2->txa_attempts++;
 VAR_4->ic_addba_response_timeout(VAR_3, VAR_2);
}
