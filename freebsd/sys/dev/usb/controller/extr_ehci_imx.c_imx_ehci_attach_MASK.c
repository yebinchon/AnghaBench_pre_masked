
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dma_bits; int * bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_6__ {int sc_flags; TYPE_2__ sc_bus; int sc_vendor_get_port_speed; int sc_vendor_post_reset; int sc_vendor; int sc_id_vendor; int sc_intr_hdl; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
struct imx_ehci_softc {void* dev; int * ehci_irq_res; int * ehci_mem_res; TYPE_1__ ehci_softc; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef void* device_t ;


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
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (void*) ;
 int VAR_13 ;
 void* FUNC_2 (void*,int ,int*,int ) ;
 int FUNC_3 (void*,int *,int,int *,int *,TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int *) ;
 int * FUNC_5 (void*,char*,int) ;
 struct imx_ehci_softc* FUNC_6 (void*) ;
 int FUNC_7 (void*,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct imx_ehci_softc*) ;
 int VAR_17 ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_18)
{
 struct imx_ehci_softc *VAR_19;
 ehci_softc_t *VAR_20;
 int VAR_21, VAR_22;

 VAR_19 = FUNC_6(VAR_18);
 VAR_19->dev = VAR_18;
 VAR_20 = &VAR_19->ehci_softc;
 VAR_21 = 0;


 VAR_22 = 0;
 VAR_19->ehci_mem_res = FUNC_2(VAR_18, VAR_12, &VAR_22,
     VAR_10);
 if (VAR_19->ehci_mem_res == ((void*)0)) {
  FUNC_7(VAR_18, "Cannot allocate memory resources\n");
  VAR_21 = VAR_5;
  goto out;
 }

 VAR_22 = 0;
 VAR_19->ehci_irq_res = FUNC_2(VAR_18, VAR_11, &VAR_22,
     VAR_10);
 if (VAR_19->ehci_irq_res == ((void*)0)) {
  FUNC_7(VAR_18, "Cannot allocate IRQ resources\n");
  VAR_21 = VAR_5;
  goto out;
 }

 VAR_20->sc_io_tag = FUNC_16(VAR_19->ehci_mem_res);
 VAR_20->sc_bus.parent = VAR_18;
 VAR_20->sc_bus.devices = VAR_20->sc_devices;
 VAR_20->sc_bus.devices_max = VAR_0;
 VAR_20->sc_bus.dma_bits = 32;


 if (FUNC_18(&VAR_20->sc_bus, FUNC_1(VAR_18),
     &VAR_16) != 0) {
  FUNC_7(VAR_18, "usb_bus_mem_alloc_all() failed\n");
  VAR_21 = VAR_4;
  goto out;
 }





 VAR_21 = FUNC_4(VAR_20->sc_io_tag,
     FUNC_15(VAR_19->ehci_mem_res),
     VAR_6, VAR_7, &VAR_20->sc_io_hdl);
 if (VAR_21 != 0) {
  FUNC_7(VAR_18, "bus_space_subregion() failed\n");
  VAR_21 = VAR_5;
  goto out;
 }


 VAR_21 = FUNC_3(VAR_18, VAR_19->ehci_irq_res, VAR_9 | VAR_8,
     ((void*)0), (driver_intr_t *)VAR_15, VAR_20, &VAR_20->sc_intr_hdl);
 if (VAR_21 != 0) {
  FUNC_7(VAR_18, "Could not setup IRQ\n");
  goto out;
 }


 FUNC_11(VAR_18);


 if (FUNC_0(FUNC_14(VAR_19->dev), "disable-over-current"))
  FUNC_13(VAR_19);


 VAR_20->sc_bus.bdev = FUNC_5(VAR_18, "usbus", -1);
 if (VAR_20->sc_bus.bdev == ((void*)0)) {
  FUNC_7(VAR_18, "Could not add USB device\n");
  goto out;
 }
 FUNC_9(VAR_20->sc_bus.bdev, &VAR_20->sc_bus);

 VAR_20->sc_id_vendor = VAR_13;
 FUNC_17(VAR_20->sc_vendor, "Freescale", sizeof(VAR_20->sc_vendor));





 VAR_20->sc_flags |= VAR_2 | VAR_3;
 VAR_20->sc_vendor_post_reset = VAR_17;
 VAR_20->sc_vendor_get_port_speed = VAR_14;

 VAR_21 = FUNC_10(VAR_20);
 if (VAR_21 != 0) {
  FUNC_7(VAR_18, "USB init failed, usb_err_t=%d\n",
      VAR_21);
  goto out;
 }
 VAR_20->sc_flags |= VAR_1;


 VAR_21 = FUNC_8(VAR_20->sc_bus.bdev);
 if (VAR_21 != 0) {
  FUNC_7(VAR_18,
      "device_probe_and_attach() failed\n");
  goto out;
 }

 VAR_21 = 0;

out:

 if (VAR_21 != 0)
  FUNC_12(VAR_18);

 return (VAR_21);
}
