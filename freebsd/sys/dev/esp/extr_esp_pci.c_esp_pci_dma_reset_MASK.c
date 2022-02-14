
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_pci_softc {scalar_t__ sc_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esp_pci_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ncr53c9x_softc *VAR_2)
{
 struct esp_pci_softc *VAR_3 = (struct esp_pci_softc *)VAR_2;

 FUNC_0(VAR_3, VAR_1, VAR_0);

 VAR_3->sc_active = 0;
}
