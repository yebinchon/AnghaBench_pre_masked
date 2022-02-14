
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {scalar_t__ ic_curmode; } ;
struct upgt_softc {struct ieee80211com sc_ic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(struct upgt_softc *VAR_2, const int VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_2->sc_ic;
 static const uint8_t VAR_5[4] = { 2, 4, 11, 22 };
 static const uint8_t VAR_6[12] =
     { 2, 4, 11, 22, 12, 18, 24, 36, 48, 72, 96, 108 };

 if (VAR_4->ic_curmode == VAR_0 &&
     !(VAR_3 < 0 || VAR_3 > 3))
  return VAR_5[VAR_3 & 0xf];

 if (VAR_4->ic_curmode == VAR_1 &&
     !(VAR_3 < 0 || VAR_3 > 11))
  return VAR_6[VAR_3 & 0xf];

 return (0);
}
