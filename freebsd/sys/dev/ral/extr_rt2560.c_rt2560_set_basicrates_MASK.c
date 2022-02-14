
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211com {int ic_rt; } ;
struct rt2560_softc {struct ieee80211com sc_ic; } ;
struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;


 int FUNC_0 (struct rt2560_softc*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2560_softc*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct rt2560_softc *VAR_2,
    const struct ieee80211_rateset *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_2->sc_ic;
 uint32_t VAR_5 = 0;
 uint8_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->rs_nrates; VAR_7++) {
  VAR_6 = VAR_3->rs_rates[VAR_7];

  if (!(VAR_6 & VAR_0))
   continue;

  VAR_5 |= 1 << FUNC_3(VAR_4->ic_rt,
      FUNC_1(VAR_6));
 }

 FUNC_2(VAR_2, VAR_1, VAR_5);

 FUNC_0(VAR_2, "Setting basic rate mask to 0x%x\n", VAR_5);
}
