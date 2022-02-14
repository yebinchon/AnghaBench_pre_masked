
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_opmode; } ;
struct rtwn_softc {scalar_t__ bcn_vaps; scalar_t__ ap_vaps; scalar_t__ nvaps; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtwn_softc*) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;

 FUNC_0(VAR_4);


 if (VAR_4->bcn_vaps - VAR_4->ap_vaps > 0)
  VAR_5->ic_opmode = VAR_1;
 else if (VAR_4->ap_vaps > 0)
  VAR_5->ic_opmode = VAR_0;
 else if (VAR_4->nvaps > 0)
  VAR_5->ic_opmode = VAR_3;
 else
  VAR_5->ic_opmode = VAR_2;
}
