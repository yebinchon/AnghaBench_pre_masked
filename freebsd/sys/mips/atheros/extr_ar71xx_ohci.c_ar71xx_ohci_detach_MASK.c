
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_bus; scalar_t__ sc_io_hdl; scalar_t__ sc_io_tag; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
struct ar71xx_ohci_softc {TYPE_1__ sc_ohci; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;
 struct ar71xx_ohci_softc* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 struct ar71xx_ohci_softc *VAR_5 = FUNC_4(VAR_4);


 FUNC_3(VAR_4);
 FUNC_1(VAR_5->sc_ohci.sc_io_tag, VAR_5->sc_ohci.sc_io_hdl,
     VAR_0, 0);

 if (VAR_5->sc_ohci.sc_intr_hdl) {
  FUNC_2(VAR_4, VAR_5->sc_ohci.sc_irq_res, VAR_5->sc_ohci.sc_intr_hdl);
  VAR_5->sc_ohci.sc_intr_hdl = ((void*)0);
 }

 if (VAR_5->sc_ohci.sc_irq_res && VAR_5->sc_ohci.sc_intr_hdl) {



  FUNC_5(&VAR_5->sc_ohci);

  FUNC_0(VAR_4, VAR_1, 0, VAR_5->sc_ohci.sc_irq_res);
  VAR_5->sc_ohci.sc_irq_res = ((void*)0);
 }
 if (VAR_5->sc_ohci.sc_io_res) {
  FUNC_0(VAR_4, VAR_2, 0, VAR_5->sc_ohci.sc_io_res);
  VAR_5->sc_ohci.sc_io_res = ((void*)0);
  VAR_5->sc_ohci.sc_io_tag = 0;
  VAR_5->sc_ohci.sc_io_hdl = 0;
 }
 FUNC_6(&VAR_5->sc_ohci.sc_bus, &VAR_3);

 return (0);
}
