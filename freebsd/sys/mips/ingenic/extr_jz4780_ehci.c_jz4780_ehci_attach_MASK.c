
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int dma_bits; int bdev; int usbrev; int devices_max; int devices; int parent; } ;
struct TYPE_8__ {TYPE_2__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
struct jz4780_ehci_softc {TYPE_1__ base; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int ,TYPE_1__*,int **) ;
 int FUNC_5 (int ,char*,int) ;
 struct jz4780_ehci_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 () ;
 int VAR_15 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_16)
{
 struct jz4780_ehci_softc *VAR_17;
 ehci_softc_t *VAR_18;
 int VAR_19;
 int VAR_20;
 uint32_t VAR_21;

 VAR_17 = FUNC_6(VAR_16);
 VAR_18 = &VAR_17->base;


 VAR_18->sc_bus.parent = VAR_16;
 VAR_18->sc_bus.devices = VAR_18->sc_devices;
 VAR_18->sc_bus.devices_max = VAR_1;
 VAR_18->sc_bus.dma_bits = 32;


 if (FUNC_20(&VAR_18->sc_bus,
     FUNC_2(VAR_16), &VAR_14)) {
  return (VAR_3);
 }

 VAR_18->sc_bus.usbrev = VAR_12;

 VAR_19 = FUNC_15(VAR_16);
 if (VAR_19)
  goto error;

 VAR_20 = 0;
 VAR_18->sc_io_res = FUNC_3(VAR_16, VAR_11, &VAR_20, VAR_8);
 if (!VAR_18->sc_io_res) {
  FUNC_7(VAR_16, "Could not map memory\n");
  goto error;
 }





 VAR_18->sc_io_tag = FUNC_17(VAR_18->sc_io_res);
 VAR_18->sc_io_hdl = FUNC_16(VAR_18->sc_io_res);
 VAR_18->sc_io_size = FUNC_18(VAR_18->sc_io_res);

 VAR_19 = FUNC_12(VAR_16);
 if (VAR_19)
  goto error;

 if (FUNC_14() != 0) {
  FUNC_7(VAR_16, "CGU failed to enable EHCI\n");
  VAR_19 = VAR_4;
  goto error;
 }

 FUNC_1(VAR_18, VAR_2, 0);

 VAR_20 = 0;
 VAR_18->sc_irq_res = FUNC_3(VAR_16, VAR_10, &VAR_20,
     VAR_8 | VAR_9);
 if (VAR_18->sc_irq_res == ((void*)0)) {
  FUNC_7(VAR_16, "Could not allocate irq\n");
  goto error;
 }
 VAR_18->sc_bus.bdev = FUNC_5(VAR_16, "usbus", -1);
 if (!VAR_18->sc_bus.bdev) {
  FUNC_7(VAR_16, "Could not add USB device\n");
  goto error;
 }
 FUNC_10(VAR_18->sc_bus.bdev, &VAR_18->sc_bus);
 FUNC_9(VAR_18->sc_bus.bdev, VAR_0);

 FUNC_19(VAR_18->sc_vendor, "Ingenic");

 VAR_19 = FUNC_4(VAR_16, VAR_18->sc_irq_res, VAR_6 | VAR_5,
     ((void*)0), VAR_15, VAR_18, &VAR_18->sc_intr_hdl);
 if (VAR_19) {
  FUNC_7(VAR_16, "Could not setup irq, %d\n", VAR_19);
  VAR_18->sc_intr_hdl = ((void*)0);
  goto error;
 }

 VAR_19 = FUNC_11(VAR_18);
 if (!VAR_19) {

  VAR_21 = FUNC_0(VAR_18, VAR_7);
  VAR_21 |= VAR_13;
  FUNC_1(VAR_18, VAR_7, VAR_21);

  VAR_19 = FUNC_8(VAR_18->sc_bus.bdev);
 }
 if (VAR_19) {
  FUNC_7(VAR_16, "USB init failed err=%d\n", VAR_19);
  goto error;
 }
 return (0);

error:
 FUNC_13(VAR_16);
 return (VAR_4);
}
