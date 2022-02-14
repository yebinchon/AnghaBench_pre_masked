
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bdev; } ;
struct TYPE_6__ {int sc_flags; scalar_t__ sc_io_hdl; scalar_t__ sc_io_tag; int * sc_io_res; int * sc_irq_res; TYPE_1__ sc_bus; int * sc_intr_hdl; } ;
typedef TYPE_2__ ehci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{

 int VAR_5;
 ehci_softc_t *VAR_6;

 VAR_6 = FUNC_5(VAR_4);



 if (VAR_6->sc_flags & VAR_0) {
  FUNC_7(VAR_6);
  VAR_6->sc_flags &= ~VAR_0;
 }


 if (VAR_6->sc_io_tag && VAR_6->sc_io_hdl)
  FUNC_1(VAR_6->sc_io_tag, VAR_6->sc_io_hdl, VAR_1, 0);

 if (VAR_6->sc_irq_res && VAR_6->sc_intr_hdl) {
  VAR_5 = FUNC_2(VAR_4, VAR_6->sc_irq_res, VAR_6->sc_intr_hdl);
  if (VAR_5) {
   FUNC_6(VAR_4, "Could not tear down irq, %d\n",
       VAR_5);
   return (VAR_5);
  }
  VAR_6->sc_intr_hdl = ((void*)0);
 }

 if (VAR_6->sc_bus.bdev) {
  FUNC_3(VAR_4, VAR_6->sc_bus.bdev);
  VAR_6->sc_bus.bdev = ((void*)0);
 }


 FUNC_4(VAR_4);

 if (VAR_6->sc_irq_res) {
  FUNC_0(VAR_4, VAR_2, 0, VAR_6->sc_irq_res);
  VAR_6->sc_irq_res = ((void*)0);
 }

 if (VAR_6->sc_io_res) {
  FUNC_0(VAR_4, VAR_3, 0, VAR_6->sc_io_res);
  VAR_6->sc_io_res = ((void*)0);
  VAR_6->sc_io_tag = 0;
  VAR_6->sc_io_hdl = 0;
 }

 return (0);
}
