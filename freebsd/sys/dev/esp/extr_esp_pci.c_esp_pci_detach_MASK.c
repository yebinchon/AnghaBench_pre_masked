
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_pci_softc {int * sc_res; int sc_pdmat; int sc_xferdmat; int sc_xferdmam; int sc_ih; int sc_dev; struct ncr53c9x_softc sc_ncr53c9x; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ncr53c9x_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 struct esp_pci_softc* FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (struct ncr53c9x_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct ncr53c9x_softc *VAR_3;
 struct esp_pci_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2);
 VAR_3 = &VAR_4->sc_ncr53c9x;

 FUNC_4(VAR_4->sc_dev, VAR_4->sc_res[VAR_0],
     VAR_4->sc_ih);
 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);
 FUNC_2(VAR_4->sc_xferdmat, VAR_4->sc_xferdmam);
 FUNC_1(VAR_4->sc_xferdmat);
 FUNC_1(VAR_4->sc_pdmat);
 FUNC_3(VAR_2, VAR_1, VAR_4->sc_res);
 FUNC_0(VAR_3);

 return (0);
}
