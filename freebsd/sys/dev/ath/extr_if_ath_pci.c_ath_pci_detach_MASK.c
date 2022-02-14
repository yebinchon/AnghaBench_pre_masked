
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_invalid; scalar_t__ sc_eepromdata; int sc_dmat; } ;
struct ath_pci_softc {int sc_sr; int sc_irq; int sc_ih; struct ath_softc sc_sc; } ;
typedef int device_t ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 struct ath_pci_softc* FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_5)
{
 struct ath_pci_softc *VAR_6 = FUNC_11(VAR_5);
 struct ath_softc *VAR_7 = &VAR_6->sc_sc;


 VAR_7->sc_invalid = !FUNC_6(VAR_5);




 (void) FUNC_13(VAR_5, VAR_2, 4);

 FUNC_5(VAR_7);

 FUNC_8(VAR_5);
 FUNC_10(VAR_5, VAR_6->sc_irq, VAR_6->sc_ih);
 FUNC_9(VAR_5, VAR_3, 0, VAR_6->sc_irq);

 FUNC_7(VAR_7->sc_dmat);
 FUNC_9(VAR_5, VAR_4, VAR_0, VAR_6->sc_sr);

 if (VAR_7->sc_eepromdata)
  FUNC_12(VAR_7->sc_eepromdata, VAR_1);

 FUNC_3(VAR_7);
 FUNC_1(VAR_7);
 FUNC_2(VAR_7);
 FUNC_4(VAR_7);
 FUNC_0(VAR_7);

 return (0);
}
