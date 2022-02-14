
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma_bits; int * bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_5__ {TYPE_1__ sc_bus; int sc_io_hdl; int sc_io_tag; int sc_vendor; int sc_intr_hdl; int * sc_irq_res; int * sc_io_res; int sc_io_size; void* sc_dev; int sc_devices; } ;
struct ar71xx_ohci_softc {TYPE_2__ sc_ohci; } ;
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
 int VAR_9 ;
 void* FUNC_2 (void*,int ,int*,int ) ;
 int FUNC_3 (void*,int *,int,int *,int ,struct ar71xx_ohci_softc*,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int * FUNC_5 (void*,char*,int) ;
 struct ar71xx_ohci_softc* FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_11)
{
 struct ar71xx_ohci_softc *VAR_12 = FUNC_6(VAR_11);
 int VAR_13;
 int VAR_14;


 VAR_12->sc_ohci.sc_bus.parent = VAR_11;
 VAR_12->sc_ohci.sc_bus.devices = VAR_12->sc_ohci.sc_devices;
 VAR_12->sc_ohci.sc_bus.devices_max = VAR_5;
 VAR_12->sc_ohci.sc_bus.dma_bits = 32;


 if (FUNC_14(&VAR_12->sc_ohci.sc_bus,
     FUNC_0(VAR_11), &VAR_10)) {
  return (VAR_0);
 }

 VAR_12->sc_ohci.sc_dev = VAR_11;

 VAR_14 = 0;
 VAR_12->sc_ohci.sc_io_res = FUNC_2(VAR_11, VAR_8, &VAR_14,
     VAR_6);
 if (VAR_12->sc_ohci.sc_io_res == ((void*)0)) {
  VAR_13 = VAR_0;
  goto error;
 }
 VAR_12->sc_ohci.sc_io_tag = FUNC_11(VAR_12->sc_ohci.sc_io_res);
 VAR_12->sc_ohci.sc_io_hdl = FUNC_10(VAR_12->sc_ohci.sc_io_res);
 VAR_12->sc_ohci.sc_io_size = FUNC_12(VAR_12->sc_ohci.sc_io_res);

 VAR_14 = 0;
 VAR_12->sc_ohci.sc_irq_res = FUNC_2(VAR_11, VAR_7, &VAR_14,
     VAR_6);
 if (VAR_12->sc_ohci.sc_irq_res == ((void*)0)) {
  VAR_13 = VAR_0;
  goto error;
 }
 VAR_12->sc_ohci.sc_bus.bdev = FUNC_5(VAR_11, "usbus", -1);
 if (VAR_12->sc_ohci.sc_bus.bdev == ((void*)0)) {
  VAR_13 = VAR_0;
  goto error;
 }
 FUNC_8(VAR_12->sc_ohci.sc_bus.bdev, &VAR_12->sc_ohci.sc_bus);

 VAR_13 = FUNC_3(VAR_11, VAR_12->sc_ohci.sc_irq_res,
     VAR_3 | VAR_2, ((void*)0),
     VAR_9, VAR_12, &VAR_12->sc_ohci.sc_intr_hdl);
 if (VAR_13) {
  VAR_13 = VAR_1;
  goto error;
 }

 FUNC_13(VAR_12->sc_ohci.sc_vendor, "Atheros", sizeof(VAR_12->sc_ohci.sc_vendor));

 FUNC_4(VAR_12->sc_ohci.sc_io_tag, VAR_12->sc_ohci.sc_io_hdl, VAR_4, 0);

 VAR_13 = FUNC_9(&VAR_12->sc_ohci);
 if (!VAR_13)
  VAR_13 = FUNC_7(VAR_12->sc_ohci.sc_bus.bdev);

 if (VAR_13)
  goto error;
 return (0);

error:
 if (VAR_13) {
  FUNC_1(VAR_11);
  return (VAR_13);
 }
 return (VAR_13);
}
