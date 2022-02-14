
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_7__ {int sc_flags; TYPE_2__ sc_bus; int sc_io_tag; int sc_vendor_get_port_speed; int sc_vendor_post_reset; int sc_intr_hdl; int * sc_irq_res; int sc_vendor; int sc_io_hdl; int sc_io_size; int * sc_io_res; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;
typedef int bus_space_handle_t ;


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
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int *,int,int *,int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int ,int *) ;
 int FUNC_18 (int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_19 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_20)
{
 ehci_softc_t *VAR_21 = FUNC_7(VAR_20);
 bus_space_handle_t VAR_22;
 int VAR_23, VAR_24;


 VAR_21->sc_bus.parent = VAR_20;
 VAR_21->sc_bus.devices = VAR_21->sc_devices;
 VAR_21->sc_bus.devices_max = VAR_0;
 VAR_21->sc_bus.dma_bits = 32;


 if (FUNC_17(&VAR_21->sc_bus,
     FUNC_0(VAR_20), &VAR_18))
  return (VAR_7);


 VAR_24 = 0;
 VAR_21->sc_io_res = FUNC_1(VAR_20, VAR_13,
            &VAR_24, VAR_11);
 if (VAR_21->sc_io_res == ((void*)0)) {
  FUNC_8(VAR_20, "Can't allocate memory");
  FUNC_18(VAR_20);
  return (VAR_7);
 }

 VAR_21->sc_io_tag = FUNC_15(VAR_21->sc_io_res);
 VAR_22 = FUNC_14(VAR_21->sc_io_res);
 VAR_21->sc_io_size = VAR_2;

 if (FUNC_3(VAR_21->sc_io_tag, VAR_22, VAR_1,
    VAR_21->sc_io_size, &VAR_21->sc_io_hdl) != 0)
  FUNC_13("%s: unable to subregion USB host registers",
        FUNC_6(VAR_20));


 VAR_24 = 0;
 VAR_21->sc_irq_res = FUNC_1(VAR_20, VAR_12, &VAR_24,
      VAR_11);
 if (VAR_21->sc_irq_res == ((void*)0)) {
  FUNC_8(VAR_20, "Can't allocate IRQ\n");
  FUNC_18(VAR_20);
  return (VAR_7);
 }


 VAR_21->sc_bus.bdev = FUNC_5(VAR_20, "usbus", -1);
 if (!VAR_21->sc_bus.bdev) {
  FUNC_8(VAR_20, "Could not add USB device\n");
  FUNC_18(VAR_20);
  return (VAR_8);
 }
 FUNC_11(VAR_21->sc_bus.bdev, &VAR_21->sc_bus);
 FUNC_10(VAR_21->sc_bus.bdev, "Zynq-7000 ehci USB 2.0 controller");

 FUNC_16(VAR_21->sc_vendor, "Xilinx");


 VAR_23 = FUNC_2(VAR_20, VAR_21->sc_irq_res, VAR_10 | VAR_9,
        ((void*)0), (driver_intr_t *)VAR_17, VAR_21,
        &VAR_21->sc_intr_hdl);
 if (VAR_23) {
  FUNC_8(VAR_20, "Cannot setup IRQ\n");
  FUNC_18(VAR_20);
  return (VAR_23);
 }


 VAR_21->sc_flags |= VAR_5 | VAR_4;
 VAR_21->sc_vendor_post_reset = VAR_19;
 VAR_21->sc_vendor_get_port_speed = VAR_16;


 FUNC_4(VAR_21->sc_io_tag, VAR_22,
     VAR_14,
     8 << VAR_15);


 if (FUNC_19(VAR_20, VAR_21->sc_io_tag, VAR_22) < 0) {
  FUNC_8(VAR_20, "Cannot config phy!\n");
  FUNC_18(VAR_20);
  return (VAR_6);
 }


 VAR_23 = FUNC_12(VAR_21);
 if (!VAR_23) {
  VAR_21->sc_flags |= VAR_3;
  VAR_23 = FUNC_9(VAR_21->sc_bus.bdev);
 }
 if (VAR_23) {
  FUNC_8(VAR_20, "USB init failed err=%d\n", VAR_23);
  FUNC_18(VAR_20);
  return (VAR_23);
 }

 return (0);
}
