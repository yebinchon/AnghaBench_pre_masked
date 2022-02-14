
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int dma_bits; int * bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_6__ {TYPE_2__ sc_bus; int sc_flags; int sc_vendor; int sc_id_vendor; int sc_intr_hdl; int sc_io_hdl; int sc_io_tag; int sc_devices; int sc_vendor_post_reset; int sc_vendor_get_port_speed; } ;
struct tegra_ehci_softc {void* dev; int usb_alloc_called; int * ehci_irq_res; int * ehci_mem_res; int phy; int reset; int clk; TYPE_1__ ehci_softc; } ;
typedef int phandle_t ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (void*) ;
 int VAR_14 ;
 void* FUNC_1 (void*,int ,int*,int) ;
 int FUNC_2 (void*,int *,int,int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,int ,int *) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int * FUNC_7 (void*,char*,int) ;
 struct tegra_ehci_softc* FUNC_8 (void*) ;
 int FUNC_9 (void*,char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int VAR_15 ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (void*,int ,char*,int *) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (void*,int ,char*,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,char*,int) ;
 int FUNC_21 (void*) ;
 int VAR_18 ;
 int FUNC_22 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_19)
{
 struct tegra_ehci_softc *VAR_20;
 ehci_softc_t *VAR_21;
 int VAR_22, VAR_23;
 uint64_t VAR_24;
 phandle_t VAR_25;

 VAR_20 = FUNC_8(VAR_19);
 VAR_20->dev = VAR_19;
 VAR_25 = FUNC_15(VAR_19);
 VAR_21 = &VAR_20->ehci_softc;


 VAR_23 = 0;
 VAR_20->ehci_mem_res = FUNC_1(VAR_19, VAR_11, &VAR_23,
     VAR_8 | VAR_9);
 if (VAR_20->ehci_mem_res == ((void*)0)) {
  FUNC_9(VAR_19, "Cannot allocate memory resources\n");
  VAR_22 = VAR_5;
  goto out;
 }

 VAR_23 = 0;
 VAR_20->ehci_irq_res = FUNC_1(VAR_19, VAR_10, &VAR_23,
     VAR_8);
 if (VAR_20->ehci_irq_res == ((void*)0)) {
  FUNC_9(VAR_19, "Cannot allocate IRQ resources\n");
  VAR_22 = VAR_5;
  goto out;
 }

 VAR_22 = FUNC_14(VAR_19, 0, "usb", &VAR_20->reset);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Cannot get reset\n");
  VAR_22 = VAR_5;
  goto out;
 }

 VAR_22 = FUNC_17(VAR_20->dev, 0, "nvidia,phy", &VAR_20->phy);
 if (VAR_22 != 0) {
  FUNC_9(VAR_20->dev, "Cannot get 'nvidia,phy' phy\n");
  VAR_22 = VAR_5;
  goto out;
 }

 VAR_22 = FUNC_5(VAR_20->dev, 0, 0, &VAR_20->clk);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Cannot get clock\n");
  goto out;
 }

 VAR_22 = FUNC_4(VAR_20->clk);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Cannot enable clock\n");
  goto out;
 }

 VAR_24 = 0;
 VAR_22 = FUNC_6(VAR_20->clk, &VAR_24);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Cannot get clock frequency\n");
  goto out;
 }

 VAR_22 = FUNC_13(VAR_20->reset);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Cannot clear reset: %d\n", VAR_22);
  VAR_22 = VAR_5;
  goto out;
 }

 VAR_22 = FUNC_16(VAR_20->phy);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Cannot enable phy: %d\n", VAR_22);
  goto out;
 }


 VAR_21->sc_vendor_get_port_speed = VAR_15;
 VAR_21->sc_vendor_post_reset = VAR_18;
 VAR_21->sc_io_tag = FUNC_19(VAR_20->ehci_mem_res);
 VAR_21->sc_bus.parent = VAR_19;
 VAR_21->sc_bus.devices = VAR_21->sc_devices;
 VAR_21->sc_bus.devices_max = VAR_0;
 VAR_21->sc_bus.dma_bits = 32;


 VAR_22 = FUNC_22(&VAR_21->sc_bus, FUNC_0(VAR_19),
     &VAR_17);
 VAR_20->usb_alloc_called = 1;
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "usb_bus_mem_alloc_all() failed\n");
  VAR_22 = VAR_4;
  goto out;
 }





 VAR_22 = FUNC_3(VAR_21->sc_io_tag,
     FUNC_18(VAR_20->ehci_mem_res),
     VAR_12, VAR_13, &VAR_21->sc_io_hdl);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Could not create USB memory subregion\n");
  VAR_22 = VAR_5;
  goto out;
 }


 VAR_22 = FUNC_2(VAR_19, VAR_20->ehci_irq_res, VAR_7 | VAR_6,
     ((void*)0), (driver_intr_t *)VAR_16, VAR_21, &VAR_21->sc_intr_hdl);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "Could not setup IRQ\n");
  goto out;
 }


 VAR_21->sc_bus.bdev = FUNC_7(VAR_19, "usbus", -1);
 if (VAR_21->sc_bus.bdev == ((void*)0)) {
  FUNC_9(VAR_19, "Could not add USB device\n");
  goto out;
 }
 FUNC_11(VAR_21->sc_bus.bdev, &VAR_21->sc_bus);

 VAR_21->sc_id_vendor = VAR_14;
 FUNC_20(VAR_21->sc_vendor, "Nvidia", sizeof(VAR_21->sc_vendor));


 VAR_21->sc_flags |= VAR_3;
 VAR_21->sc_flags |= VAR_2;
 VAR_22 = FUNC_12(VAR_21);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19, "USB init failed: %d\n",
      VAR_22);
  goto out;
 }
 VAR_21->sc_flags |= VAR_1;


 VAR_22 = FUNC_10(VAR_21->sc_bus.bdev);
 if (VAR_22 != 0) {
  FUNC_9(VAR_19,
      "device_probe_and_attach() failed\n");
  goto out;
 }
 return (0);

out:
 FUNC_21(VAR_19);
 return (VAR_22);
}
