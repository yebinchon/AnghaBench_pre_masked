
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_flags; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_ampdu* FUNC_0 (struct ath_node*,int) ;

__attribute__((used)) static int
FUNC_1(struct ath_softc *VAR_2, struct ath_node *VAR_3, int VAR_4)
{
 struct ieee80211_tx_ampdu *VAR_5;

 if (VAR_4 == VAR_1)
  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
  return 0;

 return !! (VAR_5->txa_flags & VAR_0);
}
