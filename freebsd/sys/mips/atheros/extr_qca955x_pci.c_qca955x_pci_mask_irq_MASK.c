
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ar71xx_pci_softc {scalar_t__ sc_pci_ctrl_base; } ;
struct ar71xx_pci_irq {scalar_t__ irq; struct ar71xx_pci_softc* sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(void *VAR_4)
{
 uint32_t VAR_5;
 struct ar71xx_pci_irq *VAR_6 = VAR_4;
 struct ar71xx_pci_softc *VAR_7 = VAR_6->sc;


 if (VAR_6->irq != VAR_0)
  return;


 VAR_5 = FUNC_0(VAR_7->sc_pci_ctrl_base + VAR_2);
 FUNC_1(VAR_7->sc_pci_ctrl_base + VAR_2,
     VAR_5 & ~VAR_1);


 VAR_5 = FUNC_0(VAR_7->sc_pci_ctrl_base + VAR_3);
 FUNC_1(VAR_7->sc_pci_ctrl_base + VAR_3,
     VAR_5 | VAR_1);
}
