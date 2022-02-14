
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_5__ {TYPE_1__ sc_bus; int ** sc_intr_hdl; int * sc_irq_res; int sc_devices; } ;
struct octusb_octeon_softc {TYPE_2__ sc_dci; } ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_2 (int ,int ,int,int *,struct octusb_octeon_softc*,struct octusb_octeon_softc*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 struct octusb_octeon_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_10)
{
 struct octusb_octeon_softc *VAR_11 = FUNC_5(VAR_10);
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;




 VAR_11->sc_dci.sc_bus.parent = VAR_10;
 VAR_11->sc_dci.sc_bus.devices = VAR_11->sc_dci.sc_devices;
 VAR_11->sc_dci.sc_bus.devices_max = VAR_5;
 VAR_11->sc_dci.sc_bus.dma_bits = 32;


 if (FUNC_11(&VAR_11->sc_dci.sc_bus,
     FUNC_0(VAR_10), ((void*)0))) {
  return (VAR_0);
 }
 VAR_14 = FUNC_3();
 if (VAR_14 > VAR_6)
  FUNC_10("octusb: too many USB ports %d", VAR_14);
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_13 = 0;
  VAR_11->sc_dci.sc_irq_res[VAR_15] =
      FUNC_1(VAR_10, VAR_8, &VAR_13,
          VAR_4 + VAR_15, VAR_4 + VAR_15, 1, VAR_7);
  if (!(VAR_11->sc_dci.sc_irq_res[VAR_15])) {
   goto error;
  }





  VAR_12 = FUNC_2(VAR_10, VAR_11->sc_dci.sc_irq_res[VAR_15], VAR_3 | VAR_2,
      (driver_intr_t *)VAR_9, VAR_11, &VAR_11->sc_dci.sc_intr_hdl[VAR_15]);

  if (VAR_12) {
   VAR_11->sc_dci.sc_intr_hdl[VAR_15] = ((void*)0);
   goto error;
  }
 }

 VAR_11->sc_dci.sc_bus.bdev = FUNC_4(VAR_10, "usbus", -1);
 if (!(VAR_11->sc_dci.sc_bus.bdev)) {
  goto error;
 }
 FUNC_7(VAR_11->sc_dci.sc_bus.bdev, &VAR_11->sc_dci.sc_bus);


 VAR_12 = FUNC_8(&VAR_11->sc_dci);
 if (!VAR_12) {
  VAR_12 = FUNC_6(VAR_11->sc_dci.sc_bus.bdev);
 }
 if (VAR_12) {
  goto error;
 }
 return (0);

error:
 FUNC_9(VAR_10);
 return (VAR_1);
}
