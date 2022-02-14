
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dma_bits; int bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_6__ {TYPE_2__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; void* sc_io_res; int sc_io_size; int sc_io_tag; int sc_io_hdl; int sc_vendor; int sc_devices; } ;
struct omap_ehci_softc {void* sc_dev; TYPE_1__ base; } ;
typedef int phandle_t ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int ,int*,int ) ;
 int FUNC_3 (void*,int *,int,int *,int *,TYPE_1__*,int **) ;
 int FUNC_4 (void*,char*,int) ;
 struct omap_ehci_softc* FUNC_5 (void*) ;
 int FUNC_6 (void*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ,char*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct omap_ehci_softc*) ;
 int FUNC_14 () ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int ,char*) ;
 scalar_t__ FUNC_19 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_11)
{
 struct omap_ehci_softc *VAR_12 = FUNC_5(VAR_11);
 ehci_softc_t *VAR_13 = &VAR_12->base;



 int VAR_14;
 int VAR_15;
 VAR_13->sc_bus.parent = VAR_11;
 VAR_13->sc_bus.devices = VAR_13->sc_devices;
 VAR_13->sc_bus.devices_max = VAR_0;
 VAR_13->sc_bus.dma_bits = 32;

 FUNC_18(VAR_13->sc_vendor, "Texas Instruments");


 VAR_12->sc_dev = VAR_11;


 if (FUNC_19(&VAR_13->sc_bus, FUNC_1(VAR_11),
                           &VAR_10)) {
  return (VAR_1);
 }


 VAR_15 = 0;
 VAR_13->sc_io_res = FUNC_2(VAR_11, VAR_8, &VAR_15, VAR_6);
 if (!VAR_13->sc_io_res) {
  FUNC_6(VAR_11, "Error: Could not map EHCI memory\n");
  goto error;
 }

 VAR_15 = 0;
 VAR_13->sc_irq_res = FUNC_2(VAR_11, VAR_7, &VAR_15, VAR_6);
 if (VAR_13->sc_irq_res == ((void*)0)) {
  FUNC_6(VAR_11, "Error: could not allocate irq\n");
  goto error;
 }


 VAR_13->sc_bus.bdev = FUNC_4(VAR_11, "usbus", -1);
 if (!VAR_13->sc_bus.bdev) {
  FUNC_6(VAR_11, "Error: could not add USB device\n");
  goto error;
 }

 FUNC_9(VAR_13->sc_bus.bdev, &VAR_13->sc_bus);
 FUNC_8(VAR_13->sc_bus.bdev, VAR_5);


 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14) {
  FUNC_6(VAR_11, "Error: could not setup OMAP EHCI, %d\n", VAR_14);
  goto error;
 }


 VAR_13->sc_io_hdl = FUNC_15(VAR_13->sc_io_res);
 VAR_13->sc_io_tag = FUNC_16(VAR_13->sc_io_res);
 VAR_13->sc_io_size = FUNC_17(VAR_13->sc_io_res);


 VAR_14 = FUNC_3(VAR_11, VAR_13->sc_irq_res, VAR_4 | VAR_3,
       ((void*)0), (driver_intr_t *)VAR_9, VAR_13, &VAR_13->sc_intr_hdl);
 if (VAR_14) {
  FUNC_6(VAR_11, "Error: could not setup irq, %d\n", VAR_14);
  VAR_13->sc_intr_hdl = ((void*)0);
  goto error;
 }


 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14 == 0) {
  VAR_14 = FUNC_7(VAR_13->sc_bus.bdev);
 }
 if (VAR_14) {
  FUNC_6(VAR_11, "Error: USB init failed err=%d\n", VAR_14);
  goto error;
 }

 return (0);

error:
 FUNC_12(VAR_11);
 return (VAR_2);
}
