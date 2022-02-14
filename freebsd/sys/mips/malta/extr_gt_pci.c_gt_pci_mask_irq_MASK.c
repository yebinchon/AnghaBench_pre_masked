
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gt_pci_softc {int sc_imask; int sc_elcr; } ;
struct gt_pci_intr_cookie {int irq; struct gt_pci_softc* sc; } ;


 int FUNC_0 (struct gt_pci_softc*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct gt_pci_intr_cookie *VAR_1 = VAR_0;
 struct gt_pci_softc *VAR_2 = VAR_1->sc;
 int VAR_3 = VAR_1->irq;

 VAR_2->sc_imask |= (1 << VAR_3);
 VAR_2->sc_elcr |= (1 << VAR_3);

 FUNC_0(VAR_2);
}
