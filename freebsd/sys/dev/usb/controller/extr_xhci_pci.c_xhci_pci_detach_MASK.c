
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_softc {int * sc_msix_res; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; int sc_callout; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 struct xhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xhci_softc*) ;
 int FUNC_9 (struct xhci_softc*) ;
 int FUNC_10 (struct xhci_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct xhci_softc *VAR_4 = FUNC_3(VAR_3);


 FUNC_2(VAR_3);

 FUNC_7(&VAR_4->sc_callout);
 FUNC_8(VAR_4);
 FUNC_9(VAR_4);

 FUNC_4(VAR_3);

 if (VAR_4->sc_irq_res && VAR_4->sc_intr_hdl) {
  FUNC_1(VAR_3, VAR_4->sc_irq_res, VAR_4->sc_intr_hdl);
  VAR_4->sc_intr_hdl = ((void*)0);
 }
 if (VAR_4->sc_irq_res) {
  FUNC_0(VAR_3, VAR_1,
      FUNC_6(VAR_4->sc_irq_res), VAR_4->sc_irq_res);
  VAR_4->sc_irq_res = ((void*)0);
  FUNC_5(VAR_3);
 }
 if (VAR_4->sc_io_res) {
  FUNC_0(VAR_3, VAR_2, VAR_0,
      VAR_4->sc_io_res);
  VAR_4->sc_io_res = ((void*)0);
 }
 if (VAR_4->sc_msix_res) {
  FUNC_0(VAR_3, VAR_2,
      FUNC_6(VAR_4->sc_msix_res), VAR_4->sc_msix_res);
  VAR_4->sc_msix_res = ((void*)0);
 }

 FUNC_10(VAR_4);

 return (0);
}
