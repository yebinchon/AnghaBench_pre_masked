
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum mv_ehci_hwtype { ____Placeholder_mv_ehci_hwtype } mv_ehci_hwtype ;
struct TYPE_10__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_9__ {int sc_flags; TYPE_2__ sc_bus; int sc_vendor_get_port_speed; int sc_vendor_post_reset; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; int sc_io_hdl; scalar_t__ sc_io_size; int sc_io_tag; void* sc_io_res; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;
typedef int bus_space_handle_t ;
struct TYPE_11__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_20 ;
 void* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int *,int,int *,int *,TYPE_1__*,int **) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,scalar_t__,int *) ;
 int VAR_21 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int VAR_22 ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int FUNC_13 (int ) ;
 int VAR_28 ;
 TYPE_3__* FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 scalar_t__ FUNC_18 (void*) ;
 int FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_29)
{
 ehci_softc_t *VAR_30 = FUNC_7(VAR_29);
 enum mv_ehci_hwtype VAR_31;
 bus_space_handle_t VAR_32;
 int VAR_33;
 int VAR_34;


 VAR_30->sc_bus.parent = VAR_29;
 VAR_30->sc_bus.devices = VAR_30->sc_devices;
 VAR_30->sc_bus.devices_max = VAR_1;
 VAR_30->sc_bus.dma_bits = 32;

 VAR_31 = FUNC_14(VAR_29, VAR_21)->ocd_data;
 if (VAR_31 == VAR_7) {
  FUNC_8(VAR_29, "Wrong HW type flag detected\n");
  return (VAR_5);
 }


 if (FUNC_20(&VAR_30->sc_bus,
     FUNC_1(VAR_29), &VAR_24)) {
  return (VAR_4);
 }

 VAR_34 = 0;
 VAR_30->sc_io_res = FUNC_2(VAR_29, VAR_18, &VAR_34, VAR_15);
 if (!VAR_30->sc_io_res) {
  FUNC_8(VAR_29, "Could not map memory\n");
  goto error;
 }
 VAR_30->sc_io_tag = FUNC_17(VAR_30->sc_io_res);
 VAR_32 = FUNC_16(VAR_30->sc_io_res);
 VAR_30->sc_io_size = FUNC_18(VAR_30->sc_io_res) - VAR_12;







 if (FUNC_4(VAR_30->sc_io_tag, VAR_32, VAR_12,
     VAR_30->sc_io_size, &VAR_30->sc_io_hdl) != 0)
  FUNC_15("%s: unable to subregion USB host registers",
      FUNC_6(VAR_29));

 VAR_34 = 0;
 if (VAR_31 == VAR_6) {
  VAR_27 = FUNC_2(VAR_29, VAR_17, &VAR_34,
      VAR_16 | VAR_15);
  if (VAR_27 == ((void*)0)) {
   FUNC_8(VAR_29, "Could not allocate error irq\n");
   FUNC_13(VAR_29);
   return (VAR_5);
  }
  VAR_34 = 1;
 }






 VAR_30->sc_irq_res = FUNC_2(VAR_29, VAR_17, &VAR_34,
     VAR_16 | VAR_15);
 if (VAR_30->sc_irq_res == ((void*)0)) {
  FUNC_8(VAR_29, "Could not allocate irq\n");
  goto error;
 }

 VAR_30->sc_bus.bdev = FUNC_5(VAR_29, "usbus", -1);
 if (!VAR_30->sc_bus.bdev) {
  FUNC_8(VAR_29, "Could not add USB device\n");
  goto error;
 }
 FUNC_11(VAR_30->sc_bus.bdev, &VAR_30->sc_bus);
 FUNC_10(VAR_30->sc_bus.bdev, VAR_0);

 FUNC_19(VAR_30->sc_vendor, "Marvell");

 if (VAR_31 == VAR_6) {
  VAR_33 = FUNC_3(VAR_29, VAR_27, VAR_9,
      VAR_25, ((void*)0), VAR_30, &VAR_26);
  if (VAR_33) {
   FUNC_8(VAR_29, "Could not setup error irq, %d\n", VAR_33);
   VAR_26 = ((void*)0);
   goto error;
  }
 }

 FUNC_0(VAR_30, VAR_19, VAR_10 |
     VAR_14 | VAR_13 |
     VAR_11);

 VAR_33 = FUNC_3(VAR_29, VAR_30->sc_irq_res, VAR_9 | VAR_8,
     ((void*)0), (driver_intr_t *)VAR_23, VAR_30, &VAR_30->sc_intr_hdl);
 if (VAR_33) {
  FUNC_8(VAR_29, "Could not setup irq, %d\n", VAR_33);
  VAR_30->sc_intr_hdl = ((void*)0);
  goto error;
 }
 VAR_30->sc_vendor_post_reset = VAR_28;
 if (VAR_20)
  FUNC_8(VAR_29, "5.24 GL USB-2 workaround enabled\n");


 VAR_30->sc_flags |= VAR_3 | VAR_2;
 VAR_30->sc_vendor_get_port_speed = VAR_22;
 VAR_33 = FUNC_12(VAR_30);
 if (!VAR_33) {
  VAR_33 = FUNC_9(VAR_30->sc_bus.bdev);
 }
 if (VAR_33) {
  FUNC_8(VAR_29, "USB init failed err=%d\n", VAR_33);
  goto error;
 }
 return (0);

error:
 FUNC_13(VAR_29);
 return (VAR_5);
}
