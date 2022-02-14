
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int sc_invalid; int sc_mem_res; int sc_irq_res; int sc_irq_handle; } ;
struct bwi_pci_softc {struct bwi_softc sc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct bwi_softc*) ;
 struct bwi_pci_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct bwi_pci_softc *VAR_4 = FUNC_5(VAR_3);
 struct bwi_softc *VAR_5 = &VAR_4->sc_sc;


 VAR_5->sc_invalid = !FUNC_0(VAR_3);

 FUNC_4(VAR_5);

 FUNC_1(VAR_3);
 FUNC_3(VAR_3, VAR_5->sc_irq_res, VAR_5->sc_irq_handle);
 FUNC_2(VAR_3, VAR_1, 0, VAR_5->sc_irq_res);

 FUNC_2(VAR_3, VAR_2, VAR_0, VAR_5->sc_mem_res);

 return (0);
}
