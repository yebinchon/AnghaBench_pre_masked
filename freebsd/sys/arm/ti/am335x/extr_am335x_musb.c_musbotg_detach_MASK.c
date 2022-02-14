
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sc_irq_res; int sc_bus; int * sc_intr_hdl; } ;
struct musbotg_super_softc {TYPE_1__ sc_otg; int sc_irq_rid; scalar_t__* sc_mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (int ) ;
 struct musbotg_super_softc* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct musbotg_super_softc *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;


 FUNC_3(VAR_2);

 if (VAR_3->sc_otg.sc_irq_res && VAR_3->sc_otg.sc_intr_hdl) {



  FUNC_5(&VAR_3->sc_otg);

  VAR_4 = FUNC_2(VAR_2, VAR_3->sc_otg.sc_irq_res,
      VAR_3->sc_otg.sc_intr_hdl);
  VAR_3->sc_otg.sc_intr_hdl = ((void*)0);
 }

 FUNC_6(&VAR_3->sc_otg.sc_bus, ((void*)0));


 if (VAR_3->sc_mem_res[0])
  FUNC_1(VAR_2, VAR_1,
      VAR_3->sc_mem_res);

 if (VAR_3->sc_otg.sc_irq_res)
  FUNC_0(VAR_2, VAR_0, VAR_3->sc_irq_rid,
      VAR_3->sc_otg.sc_irq_res);

 return (0);
}
