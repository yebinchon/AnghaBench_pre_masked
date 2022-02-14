
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bdev; } ;
struct TYPE_4__ {TYPE_2__ sc_bus; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
struct jz4780_ehci_softc {int gpio_vbus; scalar_t__ clk; TYPE_1__ base; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct jz4780_ehci_softc* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 struct jz4780_ehci_softc *VAR_5;
 ehci_softc_t *VAR_6;
 device_t VAR_7;
 int VAR_8;

 VAR_5 = FUNC_6(VAR_4);
 VAR_6 = &VAR_5->base;

 if (VAR_6->sc_bus.bdev) {
  VAR_7 = VAR_6->sc_bus.bdev;
  FUNC_5(VAR_7);
  FUNC_3(VAR_4, VAR_7);
 }

 FUNC_4(VAR_4);

 if (VAR_6->sc_irq_res && VAR_6->sc_intr_hdl) {



  FUNC_8(VAR_6);

  VAR_8 = FUNC_1(VAR_4, VAR_6->sc_irq_res, VAR_6->sc_intr_hdl);

  if (VAR_8)

   FUNC_7(VAR_4, "Could not tear down irq, %d\n",
       VAR_8);
  VAR_6->sc_intr_hdl = ((void*)0);
 }

 if (VAR_6->sc_irq_res) {
  FUNC_0(VAR_4, VAR_1, 0, VAR_6->sc_irq_res);
  VAR_6->sc_irq_res = ((void*)0);
 }
 if (VAR_6->sc_io_res) {
  FUNC_0(VAR_4, VAR_2, 0,
      VAR_6->sc_io_res);
  VAR_6->sc_io_res = ((void*)0);
 }

 if (VAR_5->clk)
  FUNC_2(VAR_5->clk);

 FUNC_10(&VAR_6->sc_bus, &VAR_3);
 FUNC_9(VAR_5->gpio_vbus, VAR_0);
 return (0);
}
