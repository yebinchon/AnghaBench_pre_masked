
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {int dummy; } ;
struct ath_tx_status {int ts_status; } ;
struct ath_softc {int dummy; } ;
struct ath_rc_series {int dummy; } ;
struct ath_node {int dummy; } ;


 struct ath_node* FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ath_node*) ;
 int FUNC_2 (struct ath_node*) ;
 int FUNC_3 (struct ath_node*) ;
 int VAR_0 ;
 int FUNC_4 (struct ath_softc*,struct ath_node*,struct ath_rc_series*,struct ath_tx_status*,int,int,int) ;

void
FUNC_5(struct ath_softc *VAR_1, struct ieee80211_node *VAR_2,
    struct ath_rc_series *VAR_3, struct ath_tx_status *VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 struct ath_node *VAR_8;


 if (VAR_2 == ((void*)0))
  return;

 VAR_8 = FUNC_0(VAR_2);
 FUNC_3(VAR_8);

 if ((VAR_4->ts_status & VAR_0) == 0) {
  FUNC_1(VAR_8);
  FUNC_4(VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_2(VAR_8);
 }
}
