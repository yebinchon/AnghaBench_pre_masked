
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_invalid; scalar_t__ sc_eepromdata; int sc_dmat; } ;
struct ath_ahb_softc {int sc_sr; int sc_irq; int sc_ih; struct ath_softc sc_sc; } ;
typedef int device_t ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 struct ath_ahb_softc* FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_3)
{
 struct ath_ahb_softc *VAR_4 = FUNC_11(VAR_3);
 struct ath_softc *VAR_5 = &VAR_4->sc_sc;


 VAR_5->sc_invalid = !FUNC_6(VAR_3);

 FUNC_5(VAR_5);

 FUNC_8(VAR_3);
 FUNC_10(VAR_3, VAR_4->sc_irq, VAR_4->sc_ih);
 FUNC_9(VAR_3, VAR_1, 0, VAR_4->sc_irq);

 FUNC_7(VAR_5->sc_dmat);
 FUNC_9(VAR_3, VAR_2, 0, VAR_4->sc_sr);

 if (VAR_5->sc_eepromdata)
  FUNC_12(VAR_5->sc_eepromdata, VAR_0);

 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
 FUNC_4(VAR_5);
 FUNC_1(VAR_5);
 FUNC_0(VAR_5);

 return (0);
}
