
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int chip; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rtwn_softc*,int ,int,int) ;
 int FUNC_3 (struct ieee80211_channel*) ;

void
FUNC_4(struct rtwn_softc *VAR_3, struct ieee80211_channel *VAR_4)
{
 struct r12a_softc *VAR_5 = VAR_3->sc_priv;
 uint16_t VAR_6 = FUNC_3(VAR_4);

 if (VAR_5->chip & VAR_1) {
  if (FUNC_1(VAR_4) && VAR_6 == 11) {
   FUNC_2(VAR_3, VAR_2, 0, 0xc00);
   FUNC_2(VAR_3, VAR_0, 0, 0x40000000);
  } else {
   FUNC_2(VAR_3, VAR_2, 0x400, 0x800);

   if (!FUNC_1(VAR_4) &&
       (VAR_6 == 13 || VAR_6 == 14)) {
    FUNC_2(VAR_3, VAR_2, 0, 0x300);
    FUNC_2(VAR_3, VAR_0,
        0, 0x40000000);
   } else {
    FUNC_2(VAR_3, VAR_2, 0x100, 0x200);
    FUNC_2(VAR_3, VAR_0,
        0x40000000, 0);
   }
  }
 } else {

  if (!FUNC_1(VAR_4) &&
      (VAR_6 == 13 || VAR_6 == 14))
   FUNC_2(VAR_3, VAR_2, 0, 0x300);
  else if (FUNC_0(VAR_4))
   FUNC_2(VAR_3, VAR_2, 0x100, 0x200);
 }
}
