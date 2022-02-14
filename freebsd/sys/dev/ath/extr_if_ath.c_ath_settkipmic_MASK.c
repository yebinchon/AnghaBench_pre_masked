
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_cryptocaps; int ic_flags; } ;
struct ath_softc {int sc_ah; int sc_wmetkipmic; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_5)
{
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;

 if ((VAR_6->ic_cryptocaps & VAR_2) && !VAR_5->sc_wmetkipmic) {
  if (VAR_6->ic_flags & VAR_4) {
   FUNC_0(VAR_5->sc_ah, VAR_0);
   VAR_6->ic_cryptocaps &= ~VAR_3;
  } else {
   FUNC_0(VAR_5->sc_ah, VAR_1);
   VAR_6->ic_cryptocaps |= VAR_3;
  }
 }
}
