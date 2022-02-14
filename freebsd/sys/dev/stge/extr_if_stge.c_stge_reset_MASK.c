
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct stge_softc {int sc_led; int sc_dev; int sc_usefiber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ) ;
 int FUNC_2 (struct stge_softc*,int ,int) ;
 int FUNC_3 (struct stge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct stge_softc*) ;
 int VAR_17 ;



 int VAR_18 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(struct stge_softc *VAR_19, uint32_t VAR_20)
{
 uint32_t VAR_21;
 uint8_t VAR_22;
 int VAR_23, VAR_24;

 FUNC_5(VAR_19);

 VAR_24 = 5000;
 VAR_21 = FUNC_1(VAR_19, VAR_16);
 switch (VAR_20) {
 case 128:
  VAR_21 |= VAR_12 | VAR_2;
  VAR_24 = 100;
  break;
 case 129:
  VAR_21 |= VAR_11 | VAR_2;
  VAR_24 = 100;
  break;
 case 130:
 default:





  VAR_21 |= VAR_3 | VAR_11 | VAR_12 |
      VAR_1 | VAR_2 | VAR_8 | VAR_4 | VAR_0 |
      (VAR_19->sc_usefiber ? VAR_10 : 0);
  break;
 }

 FUNC_3(VAR_19, VAR_16, VAR_21);


 FUNC_4(VAR_24);

 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
  if ((FUNC_1(VAR_19, VAR_16) & VAR_9) == 0)
   break;
  FUNC_4(VAR_24);
 }

 if (VAR_23 == VAR_18)
  FUNC_6(VAR_19->sc_dev, "reset failed to complete\n");


 VAR_21 = FUNC_1(VAR_19, VAR_16);
 VAR_21 &= ~(VAR_5 | VAR_7 | VAR_6);
 if ((VAR_19->sc_led & 0x01) != 0)
  VAR_21 |= VAR_5;
 if ((VAR_19->sc_led & 0x03) != 0)
  VAR_21 |= VAR_6;
 if ((VAR_19->sc_led & 0x08) != 0)
  VAR_21 |= VAR_7;
 FUNC_3(VAR_19, VAR_16, VAR_21);


 VAR_22 = FUNC_0(VAR_19, VAR_17);
 VAR_22 &= ~(VAR_14 | VAR_13 | VAR_15);
 VAR_22 |= ((VAR_19->sc_led & 0x70) >> 4);
 FUNC_2(VAR_19, VAR_17, VAR_22);
}
