
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_pci_softc {scalar_t__ sc_datain; scalar_t__ sc_active; int sc_xferdmam; int sc_xferdmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct esp_pci_softc*,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ncr53c9x_softc *VAR_3)
{
 struct esp_pci_softc *VAR_4 = (struct esp_pci_softc *)VAR_3;



 FUNC_0(VAR_4, VAR_2,
     VAR_0 | (VAR_4->sc_datain != 0 ? VAR_1 : 0));
 FUNC_1(VAR_4->sc_xferdmat, VAR_4->sc_xferdmam);

 VAR_4->sc_active = 0;
}
