
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {struct ieee80211_channel* ic_curchan; } ;
struct ieee80211_channel {scalar_t__ ic_freq; } ;
struct ath_softc {int sc_ah; struct ieee80211com sc_ic; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel*) ;
 int FUNC_4 (int*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static void
FUNC_6(struct ath_softc *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 struct ieee80211_channel *VAR_5 = VAR_4->ic_curchan;
 uint32_t VAR_6[4] =
     { 0x00000000, 0xffffffff, 0xffffffff, 0x7fffffff };
 int32_t VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 79;


 if (FUNC_1(VAR_5)) {
  VAR_7 = VAR_5->ic_freq - 2402;
  if (FUNC_3(VAR_5)) {
   VAR_9 = VAR_7 - 10;
   VAR_10 = VAR_7 + 30;
  } else if (FUNC_2(VAR_5)) {
   VAR_9 = VAR_7 - 30;
   VAR_10 = VAR_7 + 10;
  } else {

   VAR_9 = VAR_7 - 10;
   VAR_10 = VAR_7 + 10;
  }

  VAR_9 -= 7;
  VAR_10 += 7;

  if (VAR_9 < 0) {
   VAR_9 = 0;
  }
  if (VAR_10 > VAR_2) {
   VAR_10 = VAR_2;
  }
  FUNC_0(VAR_3, VAR_0, "(MCI) WLAN use channel %d\n",
      VAR_5->ic_freq);
  FUNC_0(VAR_3, VAR_0,
      "(MCI) mask BT channel %d - %d\n", VAR_9, VAR_10);
  for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8++) {
   FUNC_4(&VAR_6[0], VAR_8);
  }
 } else {
  FUNC_0(VAR_3, VAR_0,
      "(MCI) WLAN not use any 2G channel, unmask all for BT\n");
 }
 FUNC_5(VAR_3->sc_ah, VAR_1,
     &VAR_6[0]);
}
