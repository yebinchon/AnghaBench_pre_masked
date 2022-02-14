
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bdev; } ;
struct TYPE_4__ {TYPE_1__ sc_bus; scalar_t__ sc_io_hdl; scalar_t__ sc_io_tag; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
struct jz4780_ohci_softc {int gpio_vbus; TYPE_2__ sc_ohci; int * clk; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 struct jz4780_ohci_softc* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5)
{
 struct jz4780_ohci_softc *VAR_6 = FUNC_7(VAR_5);
 device_t VAR_7;

 if (VAR_6->sc_ohci.sc_bus.bdev) {
  VAR_7 = VAR_6->sc_ohci.sc_bus.bdev;
  FUNC_6(VAR_7);
  FUNC_4(VAR_5, VAR_7);
 }

 FUNC_5(VAR_5);
 if (VAR_6->sc_ohci.sc_io_res != ((void*)0)) {
  FUNC_1(VAR_6->sc_ohci.sc_io_tag, VAR_6->sc_ohci.sc_io_hdl,
      VAR_1, 0);
 }

 if (VAR_6->sc_ohci.sc_intr_hdl) {
  FUNC_2(VAR_5, VAR_6->sc_ohci.sc_irq_res, VAR_6->sc_ohci.sc_intr_hdl);
  VAR_6->sc_ohci.sc_intr_hdl = ((void*)0);
 }

 if (VAR_6->sc_ohci.sc_irq_res && VAR_6->sc_ohci.sc_intr_hdl) {



  FUNC_9(&VAR_6->sc_ohci);

  FUNC_0(VAR_5, VAR_2, 0, VAR_6->sc_ohci.sc_irq_res);
  VAR_6->sc_ohci.sc_irq_res = ((void*)0);
 }
 if (VAR_6->sc_ohci.sc_io_res) {
  FUNC_0(VAR_5, VAR_3, 0, VAR_6->sc_ohci.sc_io_res);
  VAR_6->sc_ohci.sc_io_res = ((void*)0);
  VAR_6->sc_ohci.sc_io_tag = 0;
  VAR_6->sc_ohci.sc_io_hdl = 0;
 }

 if (VAR_6->clk != ((void*)0))
  FUNC_3(VAR_6->clk);

 FUNC_10(&VAR_6->sc_ohci.sc_bus, &VAR_4);
 FUNC_8(VAR_6->gpio_vbus, VAR_0);
 return (0);
}
