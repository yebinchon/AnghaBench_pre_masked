
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_6__ {int sc_flags; TYPE_2__ sc_bus; int * sc_intr_hdl; int sc_vendor; int sc_io_hdl; int sc_io_size; void* sc_io_tag; int sc_devices; } ;
struct ehci_msm_softc {int * res; TYPE_1__ base; } ;
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int,int *,int *,TYPE_1__*,int **) ;
 scalar_t__ FUNC_3 (void*,int ,int,int ,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct ehci_msm_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int VAR_11 ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_12)
{
 struct ehci_msm_softc *VAR_13;
 bus_space_handle_t VAR_14;
 ehci_softc_t *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_6(VAR_12);
 VAR_15 = &VAR_13->base;
 VAR_15->sc_bus.parent = VAR_12;
 VAR_15->sc_bus.devices = VAR_15->sc_devices;
 VAR_15->sc_bus.devices_max = VAR_1;
 VAR_15->sc_bus.dma_bits = 32;

 if (FUNC_1(VAR_12, VAR_11, VAR_13->res)) {
  FUNC_7(VAR_12, "could not allocate resources\n");
  return (VAR_6);
 }

 VAR_15->sc_io_tag = FUNC_15(VAR_13->res[0]);


 if (FUNC_18(&VAR_15->sc_bus,
     FUNC_0(VAR_12), &VAR_10)) {
  return (VAR_5);
 }


 VAR_15->sc_io_tag = FUNC_15(VAR_13->res[0]);
 VAR_14 = FUNC_14(VAR_13->res[0]);
 VAR_15->sc_io_size = FUNC_16(VAR_13->res[0]);

 if (FUNC_3(VAR_15->sc_io_tag, VAR_14, 0x100,
     VAR_15->sc_io_size, &VAR_15->sc_io_hdl) != 0)
  FUNC_13("%s: unable to subregion USB host registers",
      FUNC_5(VAR_12));

 VAR_15->sc_bus.bdev = FUNC_4(VAR_12, "usbus", -1);
 if (!VAR_15->sc_bus.bdev) {
  FUNC_7(VAR_12, "Could not add USB device\n");
  goto error;
 }
 FUNC_10(VAR_15->sc_bus.bdev, &VAR_15->sc_bus);
 FUNC_9(VAR_15->sc_bus.bdev, VAR_0);

 FUNC_17(VAR_15->sc_vendor, "Qualcomm");

 VAR_16 = FUNC_2(VAR_12, VAR_13->res[2], VAR_8 | VAR_7,
     ((void*)0), (driver_intr_t *)VAR_9, VAR_15, &VAR_15->sc_intr_hdl);
 if (VAR_16) {
  FUNC_7(VAR_12, "Could not setup irq, %d\n", VAR_16);
  VAR_15->sc_intr_hdl = ((void*)0);
  goto error;
 }

 VAR_15->sc_flags |= VAR_3 | VAR_4;

 VAR_16 = FUNC_11(VAR_15);
 if (!VAR_16) {
  VAR_15->sc_flags |= VAR_2;
  VAR_16 = FUNC_8(VAR_15->sc_bus.bdev);
 }

 if (VAR_16) {
  FUNC_7(VAR_12, "USB init failed err=%d\n", VAR_16);
  goto error;
 }
 return (0);

error:
 FUNC_12(VAR_12);
 return (VAR_6);
}
