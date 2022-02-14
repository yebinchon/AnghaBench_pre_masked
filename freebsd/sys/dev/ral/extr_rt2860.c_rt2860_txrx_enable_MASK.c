
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct rt2860_softc {int sc_dev; struct ieee80211com sc_ic; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rt2860_softc*) ;
 int FUNC_2 (struct rt2860_softc*,int ) ;
 int FUNC_3 (struct rt2860_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct rt2860_softc *VAR_27)
{
 struct ieee80211com *VAR_28 = &VAR_27->sc_ic;
 uint32_t VAR_29;
 int VAR_30;


 FUNC_3(VAR_27, VAR_17, VAR_18);
 FUNC_1(VAR_27);
 for (VAR_30 = 0; VAR_30 < 200; VAR_30++) {
  VAR_29 = FUNC_2(VAR_27, VAR_26);
  if ((VAR_29 & (VAR_22 | VAR_19)) == 0)
   break;
  FUNC_0(1000);
 }
 if (VAR_30 == 200) {
  FUNC_4(VAR_27->sc_dev, "timeout waiting for DMA engine\n");
  return VAR_0;
 }

 FUNC_0(50);

 VAR_29 |= VAR_20 | VAR_23 |
     VAR_24 << VAR_25;
 FUNC_3(VAR_27, VAR_26, VAR_29);


 VAR_29 = VAR_7 | VAR_11;
 if (VAR_28->ic_opmode != VAR_1) {
  VAR_29 |= VAR_14 | VAR_10 |
      VAR_9 | VAR_4 | VAR_3 |
      VAR_15 | VAR_8 |
      VAR_5 | VAR_6;
  if (VAR_28->ic_opmode == VAR_2)
   VAR_29 |= VAR_13 | VAR_12;
 }
 FUNC_3(VAR_27, VAR_21, VAR_29);

 FUNC_3(VAR_27, VAR_17,
     VAR_16 | VAR_18);

 return 0;
}
