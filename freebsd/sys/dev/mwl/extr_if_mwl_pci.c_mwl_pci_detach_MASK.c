
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_invalid; int sc_dmat; } ;
struct mwl_pci_softc {int sc_sr0; int sc_sr1; int sc_irq; int sc_ih; struct mwl_softc sc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwl_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct mwl_pci_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct mwl_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct mwl_pci_softc *VAR_5 = FUNC_6(VAR_4);
 struct mwl_softc *VAR_6 = &VAR_5->sc_sc;


 VAR_6->sc_invalid = !FUNC_1(VAR_4);

 FUNC_7(VAR_6);

 FUNC_3(VAR_4);
 FUNC_5(VAR_4, VAR_5->sc_irq, VAR_5->sc_ih);
 FUNC_4(VAR_4, VAR_2, 0, VAR_5->sc_irq);

 FUNC_2(VAR_6->sc_dmat);
 FUNC_4(VAR_4, VAR_3, VAR_1, VAR_5->sc_sr1);
 FUNC_4(VAR_4, VAR_3, VAR_0, VAR_5->sc_sr0);

 FUNC_0(VAR_6);

 return (0);
}
