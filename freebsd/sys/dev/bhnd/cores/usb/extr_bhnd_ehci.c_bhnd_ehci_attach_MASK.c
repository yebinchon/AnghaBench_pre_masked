
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dma_bits; int bdev; int usbrev; int devices_max; int devices; int parent; } ;
struct TYPE_7__ {TYPE_2__ sc_bus; int sc_vendor_post_reset; int sc_flags; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*,...) ;
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
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int *,TYPE_1__*,int **) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_15)
{
 ehci_softc_t *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_6(VAR_15);

 VAR_16->sc_bus.parent = VAR_15;
 VAR_16->sc_bus.devices = VAR_16->sc_devices;
 VAR_16->sc_bus.devices_max = VAR_1;
 VAR_16->sc_bus.usbrev = VAR_11;
 VAR_16->sc_bus.dma_bits = 32;


 if ((VAR_17 = FUNC_15(&VAR_16->sc_bus, FUNC_1(VAR_15),
     &VAR_14)) != 0) {
  FUNC_0(VAR_15, "can't allocate DMA memory: %d", VAR_17);
  return (VAR_3);
 }

 VAR_18 = 0;
 VAR_16->sc_io_res = FUNC_3(VAR_15, VAR_10, &VAR_18,
     VAR_7);
 if (!VAR_16->sc_io_res) {
  FUNC_0(VAR_15, "Could not map memory");
  goto error;
 }
 VAR_16->sc_io_tag = FUNC_12(VAR_16->sc_io_res);
 VAR_16->sc_io_hdl = FUNC_11(VAR_16->sc_io_res);
 VAR_16->sc_io_size = FUNC_13(VAR_16->sc_io_res);

 VAR_18 = 0;
 VAR_16->sc_irq_res = FUNC_3(VAR_15, VAR_9, &VAR_18,
     VAR_8 | VAR_7);

 if (VAR_16->sc_irq_res == ((void*)0)) {
  FUNC_0(VAR_15, "Could not allocate error irq");
  FUNC_2(VAR_15);
  return (VAR_4);
 }

 VAR_16->sc_bus.bdev = FUNC_5(VAR_15, "usbus", -1);
 if (!VAR_16->sc_bus.bdev) {
  FUNC_0(VAR_15, "Could not add USB device");
  goto error;
 }
 FUNC_9(VAR_16->sc_bus.bdev, &VAR_16->sc_bus);
 FUNC_8(VAR_16->sc_bus.bdev, VAR_0);

  FUNC_14(VAR_16->sc_vendor, "Broadcom");

 VAR_17 = FUNC_4(VAR_15, VAR_16->sc_irq_res, VAR_6 | VAR_5,
     ((void*)0), (driver_intr_t *)VAR_13, VAR_16, &VAR_16->sc_intr_hdl);
 if (VAR_17) {
  FUNC_0(VAR_15, "Could not setup irq, %d", VAR_17);
  VAR_16->sc_intr_hdl = ((void*)0);
  goto error;
 }

 VAR_16->sc_flags |= VAR_2;
 VAR_16->sc_vendor_post_reset = VAR_12;

 VAR_17 = FUNC_10(VAR_16);
 if (!VAR_17) {
  VAR_17 = FUNC_7(VAR_16->sc_bus.bdev);
 }
 if (VAR_17) {
  FUNC_0(VAR_15, "USB init failed err=%d", VAR_17);
  goto error;
 }
 return (0);

error:
 FUNC_2(VAR_15);
 return (VAR_4);
}
