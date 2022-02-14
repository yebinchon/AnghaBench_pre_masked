
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int u_int ;
struct ieee80211com {struct ieee80211_channel* ic_curchan; } ;
struct run_softc {int* rssi_5ghz; int* lna; int* rssi_2ghz; struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;
typedef size_t int8_t ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211com*,struct ieee80211_channel*) ;

__attribute__((used)) static int8_t
FUNC_2(struct run_softc *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_0->sc_ic;
 struct ieee80211_channel *VAR_4 = VAR_3->ic_curchan;
 int VAR_5;

 if (FUNC_0(VAR_4)) {
  u_int VAR_6 = FUNC_1(VAR_3, VAR_4);
  VAR_5 = VAR_0->rssi_5ghz[VAR_2];


  if (VAR_6 <= 64)
   VAR_5 -= VAR_0->lna[1];
  else if (VAR_6 <= 128)
   VAR_5 -= VAR_0->lna[2];
  else
   VAR_5 -= VAR_0->lna[3];
 } else
  VAR_5 = VAR_0->rssi_2ghz[VAR_2] - VAR_0->lna[0];

 return (-12 - VAR_5 - VAR_1);
}
