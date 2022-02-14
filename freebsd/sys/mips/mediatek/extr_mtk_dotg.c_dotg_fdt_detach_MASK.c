
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc_otg_softc {int sc_bus; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 struct dwc_otg_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct dwc_otg_softc*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct dwc_otg_softc *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;


 FUNC_2(VAR_2);

 if (VAR_3->sc_irq_res && VAR_3->sc_intr_hdl) {



  FUNC_4(VAR_3);

  VAR_4 = FUNC_1(VAR_2, VAR_3->sc_irq_res,
      VAR_3->sc_intr_hdl);
  VAR_3->sc_intr_hdl = ((void*)0);
 }
 if (VAR_3->sc_irq_res) {
  FUNC_0(VAR_2, VAR_0, 0,
      VAR_3->sc_irq_res);
  VAR_3->sc_irq_res = ((void*)0);
 }
 if (VAR_3->sc_io_res) {
  FUNC_0(VAR_2, VAR_1, 0,
      VAR_3->sc_io_res);
  VAR_3->sc_io_res = ((void*)0);
 }
 FUNC_5(&VAR_3->sc_bus, ((void*)0));

 return (0);
}
