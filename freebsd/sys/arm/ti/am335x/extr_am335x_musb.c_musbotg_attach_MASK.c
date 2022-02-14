
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_6__ {scalar_t__ sc_id; scalar_t__ sc_mode; TYPE_1__ sc_bus; struct musbotg_super_softc* sc_platform_data; int * sc_intr_hdl; int * sc_irq_res; int sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; int sc_ep_int_set; struct TYPE_6__* sc_clocks_arg; int * sc_clocks_off; int * sc_clocks_on; } ;
struct musbotg_super_softc {TYPE_2__ sc_otg; int * sc_mem_res; int sc_irq_rid; } ;
typedef int mode ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct musbotg_super_softc*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct musbotg_super_softc*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_19 ;
 int * FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int *,int *,TYPE_2__*,int **) ;
 int FUNC_7 (int ,char*,int) ;
 struct musbotg_super_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (int ) ;
 int VAR_22 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct musbotg_super_softc*) ;
 scalar_t__ VAR_23 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_24)
{
 struct musbotg_super_softc *VAR_25 = FUNC_8(VAR_24);
 char VAR_26[16];
 int VAR_27;
 uint32_t VAR_28;

 VAR_25->sc_otg.sc_id = FUNC_9(VAR_24);


 VAR_27 = FUNC_5(VAR_24, VAR_19,
  VAR_25->sc_mem_res);
 if (VAR_27) {
  FUNC_10(VAR_24,
      "Error: could not allocate mem resources\n");
  return (VAR_1);
 }


 VAR_25->sc_otg.sc_irq_res = FUNC_4(VAR_24, VAR_9,
     &VAR_25->sc_irq_rid, VAR_8);
 if (VAR_25->sc_otg.sc_irq_res == ((void*)0)) {
  FUNC_10(VAR_24,
      "Error: could not allocate irq resources\n");
  return (VAR_1);
 }


 VAR_25->sc_otg.sc_clocks_on = &VAR_21;
 VAR_25->sc_otg.sc_clocks_off = &VAR_20;
 VAR_25->sc_otg.sc_clocks_arg = &VAR_25->sc_otg;

 VAR_25->sc_otg.sc_ep_int_set = VAR_22;


 VAR_25->sc_otg.sc_bus.parent = VAR_24;
 VAR_25->sc_otg.sc_bus.devices = VAR_25->sc_otg.sc_devices;
 VAR_25->sc_otg.sc_bus.devices_max = VAR_6;
 VAR_25->sc_otg.sc_bus.dma_bits = 32;


 if (FUNC_21(&VAR_25->sc_otg.sc_bus,
     FUNC_3(VAR_24), ((void*)0))) {
  FUNC_10(VAR_24,
      "Failed allocate bus mem for musb\n");
  return (VAR_0);
 }
 VAR_25->sc_otg.sc_io_res = VAR_25->sc_mem_res[VAR_7];
 VAR_25->sc_otg.sc_io_tag =
     FUNC_18(VAR_25->sc_otg.sc_io_res);
 VAR_25->sc_otg.sc_io_hdl =
     FUNC_17(VAR_25->sc_otg.sc_io_res);
 VAR_25->sc_otg.sc_io_size =
     FUNC_19(VAR_25->sc_otg.sc_io_res);

 VAR_25->sc_otg.sc_bus.bdev = FUNC_7(VAR_24, "usbus", -1);
 if (!(VAR_25->sc_otg.sc_bus.bdev)) {
  FUNC_10(VAR_24, "No busdev for musb\n");
  goto error;
 }
 FUNC_12(VAR_25->sc_otg.sc_bus.bdev,
     &VAR_25->sc_otg.sc_bus);

 VAR_27 = FUNC_6(VAR_24, VAR_25->sc_otg.sc_irq_res,
     VAR_3 | VAR_2,
     ((void*)0), (driver_intr_t *)VAR_23,
     &VAR_25->sc_otg, &VAR_25->sc_otg.sc_intr_hdl);
 if (VAR_27) {
  VAR_25->sc_otg.sc_intr_hdl = ((void*)0);
  FUNC_10(VAR_24,
      "Failed to setup interrupt for musb\n");
  goto error;
 }

 VAR_25->sc_otg.sc_platform_data = VAR_25;
 if (FUNC_0(FUNC_16(VAR_24), "dr_mode", VAR_26,
     sizeof(VAR_26)) > 0) {
  if (FUNC_20(VAR_26, "host") == 0)
   VAR_25->sc_otg.sc_mode = VAR_5;
  else
   VAR_25->sc_otg.sc_mode = VAR_4;
 } else {

  if (VAR_25->sc_otg.sc_id == 0)
   VAR_25->sc_otg.sc_mode = VAR_4;
  else
   VAR_25->sc_otg.sc_mode = VAR_5;
 }





 if (VAR_25->sc_otg.sc_mode == VAR_5) {
  VAR_28 = FUNC_1(VAR_25, VAR_14);
  VAR_28 |= VAR_16;
  VAR_28 &= ~VAR_15;
  FUNC_2(VAR_25, VAR_14, VAR_28);
  FUNC_2(VAR_25, VAR_17,
      VAR_18);
 } else {
  VAR_28 = FUNC_1(VAR_25, VAR_14);
  VAR_28 |= VAR_16;
  VAR_28 |= VAR_15;
  FUNC_2(VAR_25, VAR_14, VAR_28);
 }

 VAR_28 = VAR_12 & ~VAR_13;
 FUNC_2(VAR_25, VAR_11, VAR_28);
 FUNC_2(VAR_25, VAR_10, 0xffffffff);

 VAR_27 = FUNC_14(&VAR_25->sc_otg);
 if (!VAR_27)
  VAR_27 = FUNC_11(VAR_25->sc_otg.sc_bus.bdev);

 if (VAR_27)
  goto error;


 FUNC_15(VAR_25);

 return (0);

error:
 FUNC_13(VAR_24);
 return (VAR_1);
}
