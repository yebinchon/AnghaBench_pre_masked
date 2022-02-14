
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct dwc_otg_softc {TYPE_1__ sc_bus; int * sc_intr_hdl; void* sc_irq_res; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; int sc_mode; } ;
typedef int device_t ;


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
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,void*,int,int ,int ,struct dwc_otg_softc*,int **) ;
 int FUNC_3 (int ,char*,int) ;
 struct dwc_otg_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (struct dwc_otg_softc*) ;
 int VAR_10 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_11)
{
 struct dwc_otg_softc *VAR_12 = FUNC_4(VAR_11);
 int VAR_13, VAR_14;




 VAR_12->sc_mode = VAR_0;
 VAR_12->sc_bus.parent = VAR_11;
 VAR_12->sc_bus.devices = VAR_12->sc_devices;
 VAR_12->sc_bus.devices_max = VAR_1;
 VAR_12->sc_bus.dma_bits = 32;


 if (FUNC_13(&VAR_12->sc_bus,
     FUNC_0(VAR_11), ((void*)0))) {
  FUNC_9("No mem\n");
  return (VAR_2);
 }
 VAR_14 = 0;
 VAR_12->sc_io_res =
     FUNC_1(VAR_11, VAR_8, &VAR_14, VAR_6);
 if (!(VAR_12->sc_io_res)) {
  FUNC_9("Can`t alloc MEM\n");
  goto error;
 }
 VAR_12->sc_io_tag = FUNC_11(VAR_12->sc_io_res);
 VAR_12->sc_io_hdl = FUNC_10(VAR_12->sc_io_res);
 VAR_12->sc_io_size = FUNC_12(VAR_12->sc_io_res);

 VAR_14 = 0;
 VAR_12->sc_irq_res = FUNC_1(VAR_11, VAR_7,
     &VAR_14, VAR_6);
 if (!(VAR_12->sc_irq_res)) {
  FUNC_9("Can`t alloc IRQ\n");
  goto error;
 }

 VAR_12->sc_bus.bdev = FUNC_3(VAR_11, "usbus", -1);
 if (!(VAR_12->sc_bus.bdev)) {
  FUNC_9("Can`t add usbus\n");
  goto error;
 }
 FUNC_6(VAR_12->sc_bus.bdev, &VAR_12->sc_bus);

 VAR_13 = FUNC_2(VAR_11, VAR_12->sc_irq_res,
     VAR_5 | VAR_4, VAR_9,
     VAR_10, VAR_12, &VAR_12->sc_intr_hdl);
 if (VAR_13) {
  VAR_12->sc_intr_hdl = ((void*)0);
  FUNC_9("Can`t set IRQ handle\n");
  goto error;
 }

 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13) FUNC_9("dotg_init fail\n");
 if (!VAR_13) {
  VAR_13 = FUNC_5(VAR_12->sc_bus.bdev);
  if (VAR_13) FUNC_9("device_probe_and_attach fail %d\n", VAR_13);
 }
 if (VAR_13) {
  goto error;
 }
 return (0);

error:
 FUNC_7(VAR_11);
 return (VAR_3);
}
