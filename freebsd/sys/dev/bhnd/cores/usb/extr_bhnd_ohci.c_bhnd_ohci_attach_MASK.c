
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dma_bits; int bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_7__ {TYPE_2__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; void* sc_dev; int sc_devices; } ;
typedef TYPE_1__ ohci_softc_t ;
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
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int ,int*,int) ;
 int FUNC_3 (void*,int *,int,int *,int *,TYPE_1__*,int **) ;
 int FUNC_4 (void*,char*,int) ;
 TYPE_1__* FUNC_5 (void*) ;
 int FUNC_6 (void*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,char*,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_11)
{
 ohci_softc_t *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(VAR_11);

 VAR_12->sc_bus.parent = VAR_11;
 VAR_12->sc_bus.devices = VAR_12->sc_devices;
 VAR_12->sc_bus.devices_max = VAR_4;
 VAR_12->sc_bus.dma_bits = 32;


 if (FUNC_14(&VAR_12->sc_bus, FUNC_0(VAR_11),
     &VAR_10)) {
  return (VAR_0);
 }
 VAR_12->sc_dev = VAR_11;

 VAR_13 = 0;
 VAR_12->sc_io_res = FUNC_2(VAR_11, VAR_8, &VAR_13,
     VAR_5);
 if (!VAR_12->sc_io_res) {
  FUNC_6(VAR_11, "Could not map memory\n");
  goto error;
 }
 VAR_12->sc_io_tag = FUNC_11(VAR_12->sc_io_res);
 VAR_12->sc_io_hdl = FUNC_10(VAR_12->sc_io_res);
 VAR_12->sc_io_size = FUNC_12(VAR_12->sc_io_res);

 VAR_13 = 0;
 VAR_12->sc_irq_res = FUNC_2(VAR_11, VAR_7, &VAR_13,
     VAR_6 | VAR_5);
 if (VAR_12->sc_irq_res == ((void*)0)) {
  FUNC_6(VAR_11, "Could not allocate irq\n");
  goto error;
 }
 VAR_12->sc_bus.bdev = FUNC_4(VAR_11, "usbus", -1);
 if (!VAR_12->sc_bus.bdev) {
  FUNC_6(VAR_11, "Could not add USB device\n");
  goto error;
 }
 FUNC_8(VAR_12->sc_bus.bdev, &VAR_12->sc_bus);

 FUNC_13(VAR_12->sc_vendor, "Broadcom", sizeof(VAR_12->sc_vendor));

 VAR_14 = FUNC_3(VAR_11, VAR_12->sc_irq_res, VAR_3 | VAR_2,
     ((void*)0), (driver_intr_t *)VAR_9, VAR_12, &VAR_12->sc_intr_hdl);

 if (VAR_14) {
  FUNC_6(VAR_11, "Could not setup irq, %d\n", VAR_14);
  VAR_12->sc_intr_hdl = ((void*)0);
  goto error;
 }
 VAR_14 = FUNC_9(VAR_12);
 if (!VAR_14) {
  VAR_14 = FUNC_7(VAR_12->sc_bus.bdev);
 }
 if (VAR_14) {
  FUNC_6(VAR_11, "USB init failed\n");
  goto error;
 }
 return (0);

error:
 FUNC_1(VAR_11);
 return (VAR_1);
}
