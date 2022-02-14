
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dma_bits; int * bdev; int devices_max; int devices; void* parent; } ;
struct TYPE_6__ {int sc_flags; int sc_intr_hdl; TYPE_2__ sc_bus; int sc_vendor_get_port_speed; int sc_vendor_post_reset; void* sc_io_hdl; void* sc_io_tag; int sc_vendor; int sc_io_size; int sc_devices; } ;
struct vybrid_ehci_softc {int * res; void* bsh_phy; void* bst_phy; void* bsh_usbc; void* bst_usbc; TYPE_1__ base; void* dev; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int driver_intr_t ;
typedef void* device_t ;
typedef void* bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (void*,int ,int *) ;
 int FUNC_2 (void*,int ,int,int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (void*,void*,int,int ,void**) ;
 int FUNC_5 (void*,void*,int,int) ;
 int FUNC_6 (void*,int ,int ) ;
 int * FUNC_7 (void*,char*,int) ;
 int FUNC_8 (void*,int *) ;
 struct vybrid_ehci_softc* FUNC_9 (void*) ;
 int FUNC_10 (void*,char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (struct vybrid_ehci_softc*) ;
 int FUNC_15 (char*,int) ;
 void* FUNC_16 (int ) ;
 void* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,int) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,int *) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int
FUNC_21(device_t VAR_19)
{
 struct vybrid_ehci_softc *VAR_20;
 ehci_softc_t *VAR_21;
 bus_space_handle_t VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_20 = FUNC_9(VAR_19);
 VAR_20->dev = VAR_19;

 VAR_21 = &VAR_20->base;
 VAR_21->sc_bus.parent = VAR_19;
 VAR_21->sc_bus.devices = VAR_21->sc_devices;
 VAR_21->sc_bus.devices_max = VAR_0;
 VAR_21->sc_bus.dma_bits = 32;

 if (FUNC_1(VAR_19, VAR_18, VAR_20->res)) {
  FUNC_10(VAR_19, "could not allocate resources\n");
  return (VAR_4);
 }


 VAR_21->sc_io_tag = FUNC_17(VAR_20->res[0]);
 VAR_22 = FUNC_16(VAR_20->res[0]);
 VAR_21->sc_io_size = FUNC_18(VAR_20->res[0]);

 VAR_20->bst_usbc = FUNC_17(VAR_20->res[1]);
 VAR_20->bsh_usbc = FUNC_16(VAR_20->res[1]);

 VAR_20->bst_phy = FUNC_17(VAR_20->res[2]);
 VAR_20->bsh_phy = FUNC_16(VAR_20->res[2]);


 if (FUNC_20(&VAR_21->sc_bus, FUNC_0(VAR_19),
  &VAR_16))
  return (VAR_4);
 if (FUNC_14(VAR_20)) {
  FUNC_10(VAR_19, "Could not setup PHY\n");
  return (1);
 }





 VAR_23 = FUNC_4(VAR_21->sc_io_tag, VAR_22, 0x100,
     VAR_21->sc_io_size, &VAR_21->sc_io_hdl);
 if (VAR_23 != 0)
  return (VAR_4);


 VAR_23 = FUNC_2(VAR_19, VAR_20->res[3], VAR_6 | VAR_5,
     ((void*)0), (driver_intr_t *)VAR_15, VAR_21,
     &VAR_21->sc_intr_hdl);
 if (VAR_23) {
  FUNC_10(VAR_19, "Could not setup irq, "
      "%d\n", VAR_23);
  return (1);
 }


 VAR_21->sc_bus.bdev = FUNC_7(VAR_19, "usbus", -1);
 if (!VAR_21->sc_bus.bdev) {
  FUNC_10(VAR_19, "Could not add USB device\n");
  VAR_23 = FUNC_6(VAR_19, VAR_20->res[5],
      VAR_21->sc_intr_hdl);
  if (VAR_23)
   FUNC_10(VAR_19, "Could not tear down irq,"
       " %d\n", VAR_23);
  return (1);
 }
 FUNC_12(VAR_21->sc_bus.bdev, &VAR_21->sc_bus);

 FUNC_19(VAR_21->sc_vendor, "Freescale", sizeof(VAR_21->sc_vendor));


 VAR_24 = FUNC_3(VAR_21->sc_io_tag, VAR_21->sc_io_hdl, 0xA8);
 VAR_24 |= 0x3;
 FUNC_5(VAR_21->sc_io_tag, VAR_21->sc_io_hdl, 0xA8, VAR_24);


 VAR_21->sc_flags |= VAR_3 | VAR_2;
 VAR_21->sc_vendor_post_reset = VAR_17;
 VAR_21->sc_vendor_get_port_speed = VAR_14;

 VAR_23 = FUNC_13(VAR_21);
 if (!VAR_23) {
  VAR_21->sc_flags |= VAR_1;
  VAR_23 = FUNC_11(VAR_21->sc_bus.bdev);
 } else {
  FUNC_10(VAR_19, "USB init failed err=%d\n", VAR_23);

  FUNC_8(VAR_19, VAR_21->sc_bus.bdev);
  VAR_21->sc_bus.bdev = ((void*)0);

  VAR_23 = FUNC_6(VAR_19, VAR_20->res[5],
      VAR_21->sc_intr_hdl);
  if (VAR_23)
   FUNC_10(VAR_19, "Could not tear down irq,"
       " %d\n", VAR_23);
  return (1);
 }
 return (0);
}
