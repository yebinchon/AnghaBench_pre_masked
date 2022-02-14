
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct run_softc {struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (struct run_softc*,int) ;
 int FUNC_3 (struct run_softc*,int ,int*) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct run_softc *VAR_30)
{
 struct ieee80211com *VAR_31 = &VAR_30->sc_ic;
 uint32_t VAR_32;
 int VAR_33, VAR_34;

 FUNC_4(VAR_30, VAR_17, VAR_18);
 for (VAR_34 = 0; VAR_34 < 200; VAR_34++) {
  if ((VAR_33 = FUNC_3(VAR_30, VAR_29, &VAR_32)) != 0)
   return (VAR_33);
  if ((VAR_32 & (VAR_22 | VAR_19)) == 0)
   break;
  FUNC_2(VAR_30, 50);
 }
 if (VAR_34 == 200)
  return (VAR_0);

 FUNC_2(VAR_30, 50);

 VAR_32 |= VAR_20 | VAR_23 | VAR_24;
 FUNC_4(VAR_30, VAR_29, VAR_32);


 VAR_32 = VAR_28 | VAR_27 | VAR_26 |
     FUNC_1(128) | FUNC_0(2);
 FUNC_4(VAR_30, VAR_25, VAR_32);


 VAR_32 = VAR_7 | VAR_11;
 if (VAR_31->ic_opmode != VAR_1) {
  VAR_32 |= VAR_14 | VAR_10 |
      VAR_9 | VAR_4 | VAR_3 |
      VAR_15 | VAR_8 |
      VAR_5 | VAR_6;
  if (VAR_31->ic_opmode == VAR_2)
   VAR_32 |= VAR_13 | VAR_12;
 }
 FUNC_4(VAR_30, VAR_21, VAR_32);

 FUNC_4(VAR_30, VAR_17,
     VAR_16 | VAR_18);

 return (0);
}
