
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_promisc; } ;
struct rtwn_softc {scalar_t__ bcn_vaps; scalar_t__ ap_vaps; scalar_t__ mon_vaps; int rcr; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;

void
FUNC_2(struct rtwn_softc *VAR_7)
{
 struct ieee80211com *VAR_8 = &VAR_7->sc_ic;
 uint32_t VAR_9, VAR_10;

 FUNC_0(VAR_7);

 VAR_9 = VAR_1 | VAR_2 | VAR_3 | VAR_0;
 VAR_10 = VAR_4;

 if (VAR_7->bcn_vaps == 0)
  VAR_10 |= VAR_5;
 if (VAR_7->ap_vaps == 0)
  VAR_10 |= VAR_6;

 if (VAR_8->ic_promisc == 0 && VAR_7->mon_vaps == 0) {
  if (VAR_7->bcn_vaps != 0)
   VAR_9 |= VAR_5;
  if (VAR_7->ap_vaps != 0)
   VAR_9 |= VAR_6;

  VAR_7->rcr &= ~VAR_9;
  VAR_7->rcr |= VAR_10;
 } else {
  VAR_7->rcr &= ~VAR_10;
  VAR_7->rcr |= VAR_9;
 }
 FUNC_1(VAR_7);
}
