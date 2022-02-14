
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_opmode; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct bwn_mac {int mac_flags; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;

 if (VAR_5->ic_opmode != VAR_1)
  FUNC_0(VAR_3, 0);
 if (VAR_5->ic_opmode == VAR_2)
  VAR_3->mac_flags |= VAR_0;
}
