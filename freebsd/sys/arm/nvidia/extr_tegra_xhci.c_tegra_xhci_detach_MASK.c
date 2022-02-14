
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_softc {int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; int sc_callout; } ;
struct tegra_xhci_softc {scalar_t__ fw_vaddr; int fw_size; int * irq_hdl_mbox; int * irq_res_mbox; scalar_t__ xhci_inited; struct xhci_softc xhci_softc; } ;
typedef int device_t ;


 int FUNC_0 (struct tegra_xhci_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;
 struct tegra_xhci_softc* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xhci_softc*) ;
 int FUNC_9 (struct xhci_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct tegra_xhci_softc *VAR_3;
 struct xhci_softc *VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 VAR_4 = &VAR_3->xhci_softc;


 FUNC_3(VAR_2);
 if (VAR_3->xhci_inited) {
  FUNC_7(&VAR_4->sc_callout);
  FUNC_8(VAR_4);
 }

 if (VAR_4->sc_irq_res && VAR_4->sc_intr_hdl) {
  FUNC_2(VAR_2, VAR_4->sc_irq_res, VAR_4->sc_intr_hdl);
  VAR_4->sc_intr_hdl = ((void*)0);
 }
 if (VAR_4->sc_irq_res) {
  FUNC_1(VAR_2, VAR_0,
      FUNC_6(VAR_4->sc_irq_res), VAR_4->sc_irq_res);
  VAR_4->sc_irq_res = ((void*)0);
 }
 if (VAR_4->sc_io_res != ((void*)0)) {
  FUNC_1(VAR_2, VAR_1,
      FUNC_6(VAR_4->sc_io_res), VAR_4->sc_io_res);
  VAR_4->sc_io_res = ((void*)0);
 }
 if (VAR_3->xhci_inited)
  FUNC_9(VAR_4);
 if (VAR_3->irq_hdl_mbox != ((void*)0))
  FUNC_2(VAR_2, VAR_3->irq_res_mbox, VAR_3->irq_hdl_mbox);
 if (VAR_3->fw_vaddr != 0)
  FUNC_5(VAR_3->fw_vaddr, VAR_3->fw_size);
 FUNC_0(VAR_3);
 return (0);
}
