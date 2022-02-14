
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_curchan; } ;
struct bwn_txgain {int member_0; int member_1; int member_2; int member_3; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bwn_mac*,int) ;
 int FUNC_2 (struct bwn_mac*,struct bwn_txgain*) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_0)
{
 struct bwn_txgain VAR_1 = { 4, 12, 12, 0 };
 struct bwn_txgain VAR_2 = { 7, 15, 14, 0 };
 struct bwn_softc *VAR_3 = VAR_0->mac_sc;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 FUNC_2(VAR_0,
     FUNC_0(VAR_4->ic_curchan) ? &VAR_1 : &VAR_2);
 FUNC_1(VAR_0, 150);
}
