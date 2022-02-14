
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct otus_softc {int dummy; } ;
struct ieee80211_channel {int ic_freq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel*) ;
 int FUNC_4 (struct otus_softc*) ;
 int FUNC_5 (struct otus_softc*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct otus_softc*,int ,int) ;
 int FUNC_8 (struct otus_softc*) ;

int
FUNC_9(struct otus_softc *VAR_2, struct ieee80211_channel *VAR_3)
{
 uint8_t VAR_4, VAR_5, VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 FUNC_4(VAR_2);

 VAR_5 = 0;
 if (FUNC_3(VAR_3)) {
  VAR_4 = (VAR_3->ic_freq - 4800) / 5;
  if (VAR_4 & 1)
   VAR_5 |= FUNC_1(2);
  else
   VAR_5 |= FUNC_1(1);
 } else {
  VAR_5 |= FUNC_1(2);
  if (VAR_3->ic_freq == 2484) {
   VAR_5 |= VAR_0;
   VAR_4 = 10 + (VAR_3->ic_freq - 2274) / 5;
  } else
   VAR_4 = 16 + (VAR_3->ic_freq - 2272) / 5;
  VAR_4 <<= 2;
 }
 VAR_5 |= FUNC_0(1) | VAR_1;
 VAR_6 = FUNC_6(VAR_4);


 VAR_7 = (VAR_6 & 0x1f) << 5 | (VAR_5 & 0x1f);
 FUNC_7(VAR_2, FUNC_2(44), VAR_7);

 VAR_7 = (VAR_6 >> 5) << 5 | (VAR_5 >> 5);
 FUNC_7(VAR_2, FUNC_2(58), VAR_7);

 if ((VAR_8 = FUNC_8(VAR_2)) == 0)
  FUNC_5(VAR_2, 10);
 return VAR_8;
}
