
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dma_bits; int bdev; int usbrev; int devices_max; int devices; int parent; } ;
struct TYPE_7__ {TYPE_2__ sc_bus; int sc_flags; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int,int *,int *,TYPE_1__*,int **) ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,char*,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ,int *) ;

int
FUNC_15(device_t VAR_13)
{
 ehci_softc_t *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;
 int VAR_16;


 VAR_14->sc_bus.parent = VAR_13;
 VAR_14->sc_bus.devices = VAR_14->sc_devices;
 VAR_14->sc_bus.devices_max = VAR_0;
 VAR_14->sc_bus.dma_bits = 32;


 if (FUNC_14(&VAR_14->sc_bus,
     FUNC_0(VAR_13), &VAR_12)) {
  return (VAR_2);
 }

 VAR_14->sc_bus.usbrev = VAR_10;

 VAR_16 = 0;
 VAR_14->sc_io_res = FUNC_1(VAR_13, VAR_9, &VAR_16,
     VAR_6);
 if (!VAR_14->sc_io_res) {
  FUNC_5(VAR_13, "Could not map memory\n");
  goto error;
 }

 VAR_14->sc_io_tag = FUNC_11(VAR_14->sc_io_res);
 VAR_14->sc_io_hdl = FUNC_10(VAR_14->sc_io_res);
 VAR_14->sc_io_size = FUNC_12(VAR_14->sc_io_res);

 VAR_16 = 0;
 VAR_14->sc_irq_res = FUNC_1(VAR_13, VAR_8, &VAR_16,
     VAR_7 | VAR_6);
 if (VAR_14->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_13, "Could not allocate irq\n");
  goto error;
 }
 VAR_14->sc_bus.bdev = FUNC_3(VAR_13, "usbus", -1);
 if (!VAR_14->sc_bus.bdev) {
  FUNC_5(VAR_13, "Could not add USB device\n");
  goto error;
 }
 FUNC_7(VAR_14->sc_bus.bdev, &VAR_14->sc_bus);

 FUNC_13(VAR_14->sc_vendor, "Generic", sizeof(VAR_14->sc_vendor));

 VAR_15 = FUNC_2(VAR_13, VAR_14->sc_irq_res, VAR_5 | VAR_4,
     ((void*)0), (driver_intr_t *)VAR_11, VAR_14, &VAR_14->sc_intr_hdl);
 if (VAR_15) {
  FUNC_5(VAR_13, "Could not setup irq, %d\n", VAR_15);
  VAR_14->sc_intr_hdl = ((void*)0);
  goto error;
 }

 VAR_14->sc_flags |= VAR_1;

 VAR_15 = FUNC_8(VAR_14);
 if (!VAR_15)
  VAR_15 = FUNC_6(VAR_14->sc_bus.bdev);
 if (VAR_15)
  goto error;

 return (0);

error:
 FUNC_9(VAR_13);
 return (VAR_3);
}
