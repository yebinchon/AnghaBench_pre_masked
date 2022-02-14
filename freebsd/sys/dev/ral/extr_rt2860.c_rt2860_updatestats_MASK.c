
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_curmode; } ;
struct rt2860_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct rt2860_softc*) ;
 int FUNC_3 (struct rt2860_softc*,int ) ;
 int FUNC_4 (struct rt2860_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct rt2860_softc *VAR_6)
{
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;







 if (VAR_7->ic_curmode != VAR_0) {

  uint32_t VAR_8 = FUNC_3(VAR_6, VAR_1);
  if ((VAR_8 & (1 << 29)) && (VAR_8 & (1 << 7 | 1 << 5))) {

   FUNC_1(("CTS-to-self livelock detected\n"));
   FUNC_4(VAR_6, VAR_4, VAR_3);
   FUNC_2(VAR_6);
   FUNC_0(1);
   FUNC_4(VAR_6, VAR_4,
       VAR_2 | VAR_5);
  }
 }
}
