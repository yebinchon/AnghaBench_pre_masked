
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bdev; } ;
struct TYPE_5__ {TYPE_2__ sc_bus; int * sc_io_res; int * sc_irq_res; int * sc_intr_hdl; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 ehci_softc_t *VAR_4;
 device_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_3);

 if (VAR_4->sc_bus.bdev) {
  VAR_5 = VAR_4->sc_bus.bdev;
  FUNC_4(VAR_5);
  FUNC_2(VAR_3, VAR_5);
 }

 FUNC_3(VAR_3);

 if (VAR_4->sc_irq_res && VAR_4->sc_intr_hdl) {

  FUNC_7(VAR_4);

  VAR_6 = FUNC_1(VAR_3, VAR_4->sc_irq_res, VAR_4->sc_intr_hdl);
  if (VAR_6)
   FUNC_6(VAR_3, "Could not tear down irq, %d\n",
       VAR_6);
  VAR_4->sc_intr_hdl = ((void*)0);
 }

 if (VAR_4->sc_irq_res) {
  FUNC_0(VAR_3, VAR_0, 0, VAR_4->sc_irq_res);
  VAR_4->sc_irq_res = ((void*)0);
 }
 if (VAR_4->sc_io_res) {
  FUNC_0(VAR_3, VAR_1, 0,
      VAR_4->sc_io_res);
  VAR_4->sc_io_res = ((void*)0);
 }

 FUNC_8(&VAR_4->sc_bus, &VAR_2);

 return (0);
}
