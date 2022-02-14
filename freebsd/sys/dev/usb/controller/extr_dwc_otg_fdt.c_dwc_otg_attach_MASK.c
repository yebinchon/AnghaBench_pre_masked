
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_mode ;
struct TYPE_4__ {int dma_bits; int * bdev; int devices_max; int devices; int parent; } ;
struct TYPE_5__ {TYPE_1__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_mode; int sc_devices; } ;
struct dwc_otg_fdt_softc {TYPE_2__ sc_otg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,char**,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int *,int,int *,int *,struct dwc_otg_fdt_softc*,int **) ;
 int * FUNC_4 (int ,char*,int) ;
 struct dwc_otg_fdt_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int ,int *) ;

int
FUNC_18(device_t VAR_12)
{
 struct dwc_otg_fdt_softc *VAR_13 = FUNC_5(VAR_12);
 char VAR_14[24];
 int VAR_15;
 int VAR_16;


 VAR_13->sc_otg.sc_bus.parent = VAR_12;
 VAR_13->sc_otg.sc_bus.devices = VAR_13->sc_otg.sc_devices;
 VAR_13->sc_otg.sc_bus.devices_max = VAR_2;
 VAR_13->sc_otg.sc_bus.dma_bits = 32;


 if (FUNC_0(FUNC_11(VAR_12), "dr_mode",
     &VAR_14, sizeof(VAR_14)) > 0) {


  VAR_14[sizeof(VAR_14) - 1] = 0;

  if (FUNC_16(VAR_14, "host") == 0)
   VAR_13->sc_otg.sc_mode = VAR_1;
  else if (FUNC_16(VAR_14, "peripheral") == 0)
   VAR_13->sc_otg.sc_mode = VAR_0;
  else if (FUNC_16(VAR_14, "otg") != 0) {
   FUNC_6(VAR_12, "Invalid FDT dr_mode: %s\n",
       VAR_14);
  }
 }


 if (FUNC_17(&VAR_13->sc_otg.sc_bus,
     FUNC_1(VAR_12), ((void*)0))) {
  return (VAR_3);
 }
 VAR_16 = 0;
 VAR_13->sc_otg.sc_io_res =
     FUNC_2(VAR_12, VAR_9, &VAR_16, VAR_7);

 if (!(VAR_13->sc_otg.sc_io_res)) {
  VAR_15 = VAR_3;
  goto error;
 }
 VAR_13->sc_otg.sc_io_tag = FUNC_14(VAR_13->sc_otg.sc_io_res);
 VAR_13->sc_otg.sc_io_hdl = FUNC_13(VAR_13->sc_otg.sc_io_res);
 VAR_13->sc_otg.sc_io_size = FUNC_15(VAR_13->sc_otg.sc_io_res);






 VAR_16 = FUNC_12(VAR_12, "brcm,bcm2708-usb") ? 1 : 0;
 VAR_13->sc_otg.sc_irq_res =
     FUNC_2(VAR_12, VAR_8, &VAR_16, VAR_7);
 if (VAR_13->sc_otg.sc_irq_res == ((void*)0))
  goto error;

 VAR_13->sc_otg.sc_bus.bdev = FUNC_4(VAR_12, "usbus", -1);
 if (VAR_13->sc_otg.sc_bus.bdev == ((void*)0))
  goto error;

 FUNC_8(VAR_13->sc_otg.sc_bus.bdev, &VAR_13->sc_otg.sc_bus);

 VAR_15 = FUNC_3(VAR_12, VAR_13->sc_otg.sc_irq_res, VAR_6 | VAR_5,
     &VAR_10, &VAR_11, VAR_13, &VAR_13->sc_otg.sc_intr_hdl);
 if (VAR_15) {
  VAR_13->sc_otg.sc_intr_hdl = ((void*)0);
  goto error;
 }
 VAR_15 = FUNC_10(&VAR_13->sc_otg);
 if (VAR_15 == 0) {
  VAR_15 = FUNC_7(VAR_13->sc_otg.sc_bus.bdev);
 }
 if (VAR_15)
  goto error;


 return (0);

error:
 FUNC_9(VAR_12);
 return (VAR_4);
}
