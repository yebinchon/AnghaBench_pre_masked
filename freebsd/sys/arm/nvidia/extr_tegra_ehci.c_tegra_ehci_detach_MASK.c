
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * bdev; } ;
struct TYPE_4__ {int sc_flags; TYPE_2__ sc_bus; int * sc_intr_hdl; int sc_irq_res; } ;
struct tegra_ehci_softc {scalar_t__ usb_alloc_called; int * ehci_mem_res; int * ehci_irq_res; int * clk; TYPE_1__ ehci_softc; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 struct tegra_ehci_softc* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct tegra_ehci_softc *VAR_5;
 ehci_softc_t *VAR_6;

 VAR_5 = FUNC_5(VAR_4);

 VAR_6 = &VAR_5->ehci_softc;
 if (VAR_5->clk != ((void*)0))
  FUNC_2(VAR_5->clk);
 if (VAR_6->sc_bus.bdev != ((void*)0))
  FUNC_3(VAR_4, VAR_6->sc_bus.bdev);
 if (VAR_6->sc_flags & VAR_0)
  FUNC_6(VAR_6);
 if (VAR_6->sc_intr_hdl != ((void*)0))
  FUNC_1(VAR_4, VAR_6->sc_irq_res,
      VAR_6->sc_intr_hdl);
 if (VAR_5->ehci_irq_res != ((void*)0))
  FUNC_0(VAR_4, VAR_1, 0,
      VAR_5->ehci_irq_res);
 if (VAR_5->ehci_mem_res != ((void*)0))
  FUNC_0(VAR_4, VAR_2, 0,
      VAR_5->ehci_mem_res);
 if (VAR_5->usb_alloc_called)
  FUNC_7(&VAR_6->sc_bus, &VAR_3);


 FUNC_4(VAR_4);

 return (0);
}
