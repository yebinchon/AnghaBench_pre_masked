
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_flags; int sc_bus; int * sc_intr_hdl; int sc_irq_res; } ;
struct imx_ehci_softc {int * ehci_mem_res; int * ehci_irq_res; TYPE_1__ ehci_softc; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 struct imx_ehci_softc* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct imx_ehci_softc *VAR_5;
 ehci_softc_t *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_4);

 VAR_6 = &VAR_5->ehci_softc;


 if ((VAR_7 = FUNC_2(VAR_4)) != 0)
  return (VAR_7);

 if (VAR_6->sc_flags & VAR_0)
  FUNC_4(VAR_6);
 if (VAR_6->sc_intr_hdl != ((void*)0))
  FUNC_1(VAR_4, VAR_6->sc_irq_res,
      VAR_6->sc_intr_hdl);
 if (VAR_5->ehci_irq_res != ((void*)0))
  FUNC_0(VAR_4, VAR_1, 0,
      VAR_5->ehci_irq_res);
 if (VAR_5->ehci_mem_res != ((void*)0))
  FUNC_0(VAR_4, VAR_2, 0,
      VAR_5->ehci_mem_res);

 FUNC_5(&VAR_6->sc_bus, &VAR_3);

 return (0);
}
