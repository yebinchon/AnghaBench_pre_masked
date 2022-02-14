
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_10__ {int sc_id_vendor; int sc_flags; TYPE_2__ sc_bus; int sc_vendor; int * sc_intr_hdl; int * sc_irq_res; int * sc_io_tag; int sc_io_hdl; int * sc_io_res; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
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
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int *,int,int *,int *,TYPE_1__*,int **) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ,char*,int) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_17)
{
 ehci_softc_t *VAR_18;
 int VAR_19;
 int VAR_20;
 bus_space_handle_t VAR_21;
 bus_space_tag_t VAR_22;

 VAR_18 = FUNC_6(VAR_17);
 VAR_19 = 0;

 VAR_18->sc_bus.parent = VAR_17;
 VAR_18->sc_bus.devices = VAR_18->sc_devices;
 VAR_18->sc_bus.devices_max = VAR_0;
 VAR_18->sc_bus.dma_bits = 32;

 if (FUNC_20(&VAR_18->sc_bus,
     FUNC_0(VAR_17), &VAR_16))
  return (VAR_5);


 VAR_18->sc_io_res = FUNC_1(VAR_17, VAR_13, &VAR_19,
     VAR_11);
 if (VAR_18->sc_io_res == ((void*)0)) {
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_6);
 }
 VAR_22 = FUNC_15(VAR_18->sc_io_res);





 VAR_21 = FUNC_14(VAR_18->sc_io_res);

 VAR_20 = FUNC_3(VAR_22, VAR_21, VAR_7, VAR_8,
     &VAR_18->sc_io_hdl);
 if (VAR_20 != 0) {
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_6);
 }


 VAR_18->sc_io_tag = &VAR_14;


 VAR_18->sc_irq_res = FUNC_1(VAR_17, VAR_12, &VAR_19,
     VAR_11);
 if (VAR_18->sc_irq_res == ((void*)0)) {
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_6);
 }


 VAR_20 = FUNC_2(VAR_17, VAR_18->sc_irq_res, VAR_10 | VAR_9,
     ((void*)0), (driver_intr_t *)VAR_15, VAR_18, &VAR_18->sc_intr_hdl);
 if (VAR_20) {
  FUNC_7(VAR_17, "Could not setup irq, %d\n", VAR_20);
  VAR_18->sc_intr_hdl = ((void*)0);
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_6);
 }


 VAR_18->sc_bus.bdev = FUNC_5(VAR_17, "usbus", -1);
 if (!VAR_18->sc_bus.bdev) {
  FUNC_7(VAR_17, "Could not add USB device\n");
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_5);
 }
 FUNC_9(VAR_18->sc_bus.bdev, &VAR_18->sc_bus);

 VAR_18->sc_id_vendor = 0x1234;
 FUNC_19(VAR_18->sc_vendor, "Freescale", sizeof(VAR_18->sc_vendor));


 VAR_20 = FUNC_11(VAR_18);
 if (VAR_20) {
  FUNC_7(VAR_17, "Could not reset the controller\n");
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_6);
 }

 FUNC_12(VAR_17, VAR_22, VAR_21);
 FUNC_17(VAR_22, VAR_21);
 FUNC_18(VAR_18);
 FUNC_16(VAR_22, VAR_21);





 FUNC_4(VAR_18);


 VAR_18->sc_flags |= VAR_2 | VAR_3;

 VAR_20 = FUNC_10(VAR_18);
 if (!VAR_20) {
  VAR_18->sc_flags |= VAR_1;
  VAR_20 = FUNC_8(VAR_18->sc_bus.bdev);
 }

 if (VAR_20) {
  FUNC_7(VAR_17, "USB init failed err=%d\n", VAR_20);
  VAR_20 = FUNC_13(VAR_17);
  if (VAR_20) {
   FUNC_7(VAR_17,
       "Detach of the driver failed with error %d\n",
       VAR_20);
  }
  return (VAR_4);
 }

 return (0);
}
