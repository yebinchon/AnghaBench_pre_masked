
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample_node {int static_rix; } ;
struct ieee80211_txparam {scalar_t__ ucastrate; } ;
struct ieee80211_node {struct ieee80211_txparam* ni_txparms; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int dummy; } ;


 struct ath_node* FUNC_0 (struct ieee80211_node*) ;
 struct sample_node* FUNC_1 (struct ath_node*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_3(struct ath_softc *VAR_1, struct ieee80211_node *VAR_2)
{
 struct ath_node *VAR_3 = FUNC_0(VAR_2);
 const struct ieee80211_txparam *VAR_4 = VAR_2->ni_txparms;
 struct sample_node *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 != ((void*)0) && VAR_4->ucastrate != VAR_0) {







  VAR_5->static_rix = FUNC_2(VAR_1, VAR_2);
 } else {
  VAR_5->static_rix = -1;
 }
}
