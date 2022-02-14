
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_bus; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
struct dwc_otg_fdt_softc {TYPE_1__ sc_otg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 struct dwc_otg_fdt_softc* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;

int
FUNC_6(device_t VAR_2)
{
 struct dwc_otg_fdt_softc *VAR_3 = FUNC_3(VAR_2);


 FUNC_2(VAR_2);

 if (VAR_3->sc_otg.sc_irq_res && VAR_3->sc_otg.sc_intr_hdl) {



  FUNC_4(&VAR_3->sc_otg);

  FUNC_1(VAR_2, VAR_3->sc_otg.sc_irq_res,
      VAR_3->sc_otg.sc_intr_hdl);
  VAR_3->sc_otg.sc_intr_hdl = ((void*)0);
 }

 if (VAR_3->sc_otg.sc_irq_res) {
  FUNC_0(VAR_2, VAR_0, 0,
      VAR_3->sc_otg.sc_irq_res);
  VAR_3->sc_otg.sc_irq_res = ((void*)0);
 }

 if (VAR_3->sc_otg.sc_io_res) {
  FUNC_0(VAR_2, VAR_1, 0,
      VAR_3->sc_otg.sc_io_res);
  VAR_3->sc_otg.sc_io_res = ((void*)0);
 }
 FUNC_5(&VAR_3->sc_otg.sc_bus, ((void*)0));

 return (0);
}
