
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_bus; int ** sc_irq_res; int ** sc_intr_hdl; } ;
struct octusb_octeon_softc {TYPE_1__ sc_dci; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct octusb_octeon_softc* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct octusb_octeon_softc *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 int VAR_5;
 int VAR_6;


 FUNC_3(VAR_2);

 if (VAR_3->sc_dci.sc_irq_res[0] && VAR_3->sc_dci.sc_intr_hdl[0])



  FUNC_5(&VAR_3->sc_dci);

 VAR_5 = FUNC_2();
 if (VAR_5 > VAR_0)
  FUNC_6("octusb: too many USB ports %d", VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_3->sc_dci.sc_irq_res[VAR_6] && VAR_3->sc_dci.sc_intr_hdl[VAR_6]) {
   VAR_4 = FUNC_1(VAR_2, VAR_3->sc_dci.sc_irq_res[VAR_6],
       VAR_3->sc_dci.sc_intr_hdl[VAR_6]);
   VAR_3->sc_dci.sc_intr_hdl[VAR_6] = ((void*)0);
  }
  if (VAR_3->sc_dci.sc_irq_res[VAR_6]) {
   FUNC_0(VAR_2, VAR_1, 0,
       VAR_3->sc_dci.sc_irq_res[VAR_6]);
   VAR_3->sc_dci.sc_irq_res[VAR_6] = ((void*)0);
  }
 }
 FUNC_7(&VAR_3->sc_dci.sc_bus, ((void*)0));

 return (0);
}
