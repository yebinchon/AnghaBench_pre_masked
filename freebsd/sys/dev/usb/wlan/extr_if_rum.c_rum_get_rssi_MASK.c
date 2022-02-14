
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_curchan; } ;
struct rum_softc {int ext_5ghz_lna; scalar_t__ rssi_5ghz_corr; scalar_t__ rssi_2ghz_corr; struct ieee80211com sc_ic; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct rum_softc *VAR_1, uint8_t VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_1->sc_ic;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_2 >> 5) & 0x3;
 VAR_5 = VAR_2 & 0x1f;

 if (VAR_4 == 0) {






  return -1;
 }

 VAR_6 = (2 * VAR_5) - VAR_0;

 if (FUNC_0(VAR_3->ic_curchan)) {
  VAR_6 += VAR_1->rssi_2ghz_corr;

  if (VAR_4 == 1)
   VAR_6 -= 64;
  else if (VAR_4 == 2)
   VAR_6 -= 74;
  else if (VAR_4 == 3)
   VAR_6 -= 90;
 } else {
  VAR_6 += VAR_1->rssi_5ghz_corr;

  if (!VAR_1->ext_5ghz_lna && VAR_4 != 1)
   VAR_6 += 4;

  if (VAR_4 == 1)
   VAR_6 -= 64;
  else if (VAR_4 == 2)
   VAR_6 -= 86;
  else if (VAR_4 == 3)
   VAR_6 -= 100;
 }
 return VAR_6;
}
