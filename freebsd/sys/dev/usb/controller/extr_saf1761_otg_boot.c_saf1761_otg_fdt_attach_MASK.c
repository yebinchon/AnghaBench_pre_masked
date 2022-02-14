
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_bits; int * bdev; int devices_max; int devices; int parent; } ;
struct saf1761_otg_softc {TYPE_1__ sc_bus; int sc_io_size; void* sc_io_hdl; void* sc_io_tag; void* sc_io_res; int sc_devices; int sc_hw_mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,char*,int) ;
 struct saf1761_otg_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *,struct saf1761_otg_softc*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (struct saf1761_otg_softc*) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8)
{
 struct saf1761_otg_softc *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;


 VAR_9->sc_hw_mode |= VAR_2;


 VAR_9->sc_bus.parent = VAR_8;
 VAR_9->sc_bus.devices = VAR_9->sc_devices;
 VAR_9->sc_bus.devices_max = VAR_3;
 VAR_9->sc_bus.dma_bits = 32;


 if (FUNC_9(&VAR_9->sc_bus, FUNC_0(VAR_8), ((void*)0)))
  return (VAR_0);

 VAR_9->sc_io_res = (void *)1;
 VAR_9->sc_io_tag = (void *)1;
 VAR_9->sc_io_hdl = (void *)VAR_4;
 VAR_9->sc_io_size = VAR_5;

 VAR_9->sc_bus.bdev = FUNC_1(VAR_8, "usbus", -1);
 if (VAR_9->sc_bus.bdev == ((void*)0))
  goto error;

 FUNC_6(VAR_9->sc_bus.bdev, &VAR_9->sc_bus);
 FUNC_5(VAR_8, &VAR_6, &VAR_7, VAR_9);

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_8, "Init failed\n");
  goto error;
 }
 VAR_10 = FUNC_4(VAR_9->sc_bus.bdev);
 if (VAR_10) {
  FUNC_3(VAR_8, "USB probe and attach failed\n");
  goto error;
 }
 return (0);

error:
 FUNC_7(VAR_8);
 return (VAR_1);
}
