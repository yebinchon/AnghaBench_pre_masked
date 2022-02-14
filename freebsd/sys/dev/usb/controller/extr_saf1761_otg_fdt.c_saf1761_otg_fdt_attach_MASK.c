
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_bits; int * bdev; int devices_max; int devices; int parent; } ;
struct saf1761_otg_softc {TYPE_1__ sc_bus; int * sc_intr_hdl; int * sc_irq_res; int * sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; int sc_hw_mode; int sc_interrupt_cfg; } ;
typedef int param ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,char**,int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int *,int,int *,int *,struct saf1761_otg_softc*,int **) ;
 int * FUNC_4 (int ,char*,int) ;
 struct saf1761_otg_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_17 ;
 int FUNC_14 (struct saf1761_otg_softc*) ;
 int VAR_18 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_19)
{
 struct saf1761_otg_softc *VAR_20 = FUNC_5(VAR_19);
 char VAR_21[24];
 int VAR_22;
 int VAR_23;




 if (FUNC_0(FUNC_9(VAR_19), "bus-width",
     &VAR_21, sizeof(VAR_21)) > 0) {
  VAR_21[sizeof(VAR_21) - 1] = 0;
  if (FUNC_15(VAR_21, "32") == 0)
   VAR_20->sc_hw_mode |= VAR_8;
 } else {

  VAR_20->sc_hw_mode |= VAR_8;
 }


 if (FUNC_0(FUNC_9(VAR_19), "analog-oc",
     &VAR_21, sizeof(VAR_21)) > 0) {
  VAR_20->sc_hw_mode |= VAR_6;
 }


 if (FUNC_0(FUNC_9(VAR_19), "dack-polarity",
     &VAR_21, sizeof(VAR_21)) > 0) {
  VAR_20->sc_hw_mode |= VAR_7;
 }


 if (FUNC_0(FUNC_9(VAR_19), "dreq-polarity",
     &VAR_21, sizeof(VAR_21)) > 0) {
  VAR_20->sc_hw_mode |= VAR_9;
 }


 if (FUNC_0(FUNC_9(VAR_19), "int-polarity",
     &VAR_21, sizeof(VAR_21)) > 0) {
  VAR_20->sc_interrupt_cfg |= VAR_13;
  VAR_20->sc_hw_mode |= VAR_11;
 }


 if (FUNC_0(FUNC_9(VAR_19), "int-level",
     &VAR_21, sizeof(VAR_21)) > 0) {
  VAR_20->sc_interrupt_cfg |= VAR_12;
  VAR_20->sc_hw_mode |= VAR_10;
 }


 VAR_20->sc_bus.parent = VAR_19;
 VAR_20->sc_bus.devices = VAR_20->sc_devices;
 VAR_20->sc_bus.devices_max = VAR_14;
 VAR_20->sc_bus.dma_bits = 32;


 if (FUNC_16(&VAR_20->sc_bus,
     FUNC_1(VAR_19), ((void*)0))) {
  return (VAR_0);
 }
 VAR_23 = 0;
 VAR_20->sc_io_res =
     FUNC_2(VAR_19, VAR_16, &VAR_23, VAR_4);

 if (VAR_20->sc_io_res == ((void*)0))
  goto error;

 VAR_20->sc_io_tag = FUNC_11(VAR_20->sc_io_res);
 VAR_20->sc_io_hdl = FUNC_10(VAR_20->sc_io_res);
 VAR_20->sc_io_size = FUNC_12(VAR_20->sc_io_res);


 VAR_23 = 1;
 VAR_20->sc_irq_res = FUNC_2(VAR_19, VAR_15, &VAR_23,
     VAR_5 | VAR_4);
 if (VAR_20->sc_irq_res == ((void*)0)) {

  VAR_23 = 0;
  VAR_20->sc_irq_res = FUNC_2(VAR_19, VAR_15, &VAR_23,
      VAR_5 | VAR_4);
  if (VAR_20->sc_irq_res == ((void*)0))
   goto error;
 }

 VAR_20->sc_bus.bdev = FUNC_4(VAR_19, "usbus", -1);
 if (VAR_20->sc_bus.bdev == ((void*)0))
  goto error;

 FUNC_8(VAR_20->sc_bus.bdev, &VAR_20->sc_bus);

 VAR_22 = FUNC_3(VAR_19, VAR_20->sc_irq_res, VAR_3 | VAR_2,
     &VAR_17, &VAR_18, VAR_20, &VAR_20->sc_intr_hdl);
 if (VAR_22) {
  VAR_20->sc_intr_hdl = ((void*)0);
  goto error;
 }
 VAR_22 = FUNC_14(VAR_20);
 if (VAR_22) {
  FUNC_6(VAR_19, "Init failed\n");
  goto error;
 }
 VAR_22 = FUNC_7(VAR_20->sc_bus.bdev);
 if (VAR_22) {
  FUNC_6(VAR_19, "USB probe and attach failed\n");
  goto error;
 }
 return (0);

error:
 FUNC_13(VAR_19);
 return (VAR_1);
}
