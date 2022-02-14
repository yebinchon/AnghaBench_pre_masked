
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_pci_softc {int sc_datain; scalar_t__ sc_dmasize; int sc_active; int sc_xferdmam; int sc_xferdmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct esp_pci_softc*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ncr53c9x_softc *VAR_6)
{
 struct esp_pci_softc *VAR_7 = (struct esp_pci_softc *)VAR_6;
 int VAR_8;

 VAR_8 = VAR_7->sc_datain;


 if (VAR_7->sc_dmasize == 0)
  return;


 FUNC_1(VAR_7->sc_xferdmat, VAR_7->sc_xferdmam, VAR_8 != 0 ?
     VAR_0 : VAR_1);



 FUNC_0(VAR_7, VAR_5, VAR_3 |
     (VAR_8 != 0 ? VAR_2 : 0));


 FUNC_0(VAR_7, VAR_5, VAR_4 |
     (VAR_8 != 0 ? VAR_2 : 0));

 VAR_7->sc_active = 1;
}
