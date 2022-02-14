
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {int dummy; } ;
struct rtwn_softc {int sc_flags; struct r12a_softc* sc_priv; struct ieee80211com sc_ic; } ;
struct r12a_softc {int tx_bbswing_2g; int tx_bbswing_5g; } ;
struct ieee80211_channel {int ic_flags; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_5 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_6 (struct rtwn_softc*,int ,int *,int *,int *,int) ;
 int FUNC_7 (struct rtwn_softc*,int ) ;
 int FUNC_8 (struct rtwn_softc*,int ) ;
 int FUNC_9 (struct rtwn_softc*,int ) ;

__attribute__((used)) static void
FUNC_10(struct rtwn_softc *VAR_6, struct ieee80211_channel *VAR_7)
{
 struct ieee80211com *VAR_8 = &VAR_6->sc_ic;
 struct r12a_softc *VAR_9 = VAR_6->sc_priv;
 uint32_t VAR_10;
 uint8_t VAR_11;
 int VAR_12;


 if ((VAR_6->sc_flags & (VAR_5 | VAR_4)) !=
     VAR_5 && FUNC_1(VAR_7) ^
     !(FUNC_9(VAR_6, VAR_0) & VAR_1))
  return;

 FUNC_6(VAR_6, FUNC_4(VAR_8, VAR_7), ((void*)0), &VAR_10,
     ((void*)0), 1);
 if (FUNC_0(VAR_7)) {
  FUNC_7(VAR_6, VAR_10);
  VAR_11 = VAR_9->tx_bbswing_2g;
 } else if (FUNC_1(VAR_7)) {
  FUNC_8(VAR_6, VAR_10);
  VAR_11 = VAR_9->tx_bbswing_5g;
 } else {
  FUNC_2(0, ("wrong channel flags %08X\n", VAR_7->ic_flags));
  return;
 }


 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  uint16_t VAR_13 = 0;

  switch ((VAR_11 >> VAR_12 * 2) & 0x3) {
  case 0:
   VAR_13 = 0x200;
   break;
  case 1:
   VAR_13 = 0x16a;
   break;
  case 2:
   VAR_13 = 0x101;
   break;
  case 3:
   VAR_13 = 0xb6;
   break;
  }

  FUNC_5(VAR_6, FUNC_3(VAR_12), VAR_2,
      VAR_13 << VAR_3);
 }
}
