
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phy_list {int phy; int rst; int clk; } ;
struct hwrst_list {int phy; int rst; int clk; } ;
struct TYPE_4__ {int dma_bits; scalar_t__ bdev; int devices_max; int devices; int parent; } ;
struct TYPE_5__ {scalar_t__ sc_io_res; scalar_t__ sc_irq_res; TYPE_1__ sc_bus; int * sc_intr_hdl; int sc_vendor; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
struct generic_ohci_softc {TYPE_2__ ohci_sc; int phy_list; int rst_list; int clk_list; } ;
struct clk_list {int phy; int rst; int clk; } ;
typedef int phy_t ;
typedef int hwreset_t ;
typedef int driver_intr_t ;
typedef int device_t ;
typedef int clk_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct phy_list*,int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,scalar_t__,int,int *,int *,struct generic_ohci_softc*,int **) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*,int) ;
 struct generic_ohci_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int ,int,int *) ;
 struct phy_list* FUNC_17 (int,int ,int) ;
 int VAR_12 ;
 int FUNC_18 (TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int ,int,int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (int ,char*,int) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_15)
{
 struct generic_ohci_softc *VAR_16 = FUNC_10(VAR_15);
 int VAR_17, VAR_18;
 VAR_16->ohci_sc.sc_bus.parent = VAR_15;
 VAR_16->ohci_sc.sc_bus.devices = VAR_16->ohci_sc.sc_devices;
 VAR_16->ohci_sc.sc_bus.devices_max = VAR_7;
 VAR_16->ohci_sc.sc_bus.dma_bits = 32;


 if (FUNC_26(&VAR_16->ohci_sc.sc_bus,
     FUNC_3(VAR_15), &VAR_14)) {
  return (VAR_0);
 }

 VAR_18 = 0;
 VAR_16->ohci_sc.sc_io_res = FUNC_4(VAR_15, VAR_11,
     &VAR_18, VAR_9);
 if (VAR_16->ohci_sc.sc_io_res == 0) {
  VAR_17 = VAR_0;
  goto error;
 }

 VAR_16->ohci_sc.sc_io_tag = FUNC_23(VAR_16->ohci_sc.sc_io_res);
 VAR_16->ohci_sc.sc_io_hdl = FUNC_22(VAR_16->ohci_sc.sc_io_res);
 VAR_16->ohci_sc.sc_io_size = FUNC_24(VAR_16->ohci_sc.sc_io_res);

 VAR_18 = 0;
 VAR_16->ohci_sc.sc_irq_res = FUNC_4(VAR_15, VAR_10, &VAR_18,
     VAR_9);
 if (VAR_16->ohci_sc.sc_irq_res == 0) {
  VAR_17 = VAR_1;
  goto error;
 }
 VAR_16->ohci_sc.sc_bus.bdev = FUNC_9(VAR_15, "usbus", -1);
 if (VAR_16->ohci_sc.sc_bus.bdev == 0) {
  VAR_17 = VAR_1;
  goto error;
 }
 FUNC_13(VAR_16->ohci_sc.sc_bus.bdev, &VAR_16->ohci_sc.sc_bus);

 FUNC_25(VAR_16->ohci_sc.sc_vendor, "Generic",
     sizeof(VAR_16->ohci_sc.sc_vendor));

 VAR_17 = FUNC_5(VAR_15, VAR_16->ohci_sc.sc_irq_res,
     VAR_3 | VAR_2, ((void*)0),
     (driver_intr_t *)VAR_13, VAR_16, &VAR_16->ohci_sc.sc_intr_hdl);
 if (VAR_17) {
  VAR_16->ohci_sc.sc_intr_hdl = ((void*)0);
  goto error;
 }
 if (FUNC_0(VAR_15) != 0) {
  VAR_17 = VAR_1;
  goto error;
 }

 VAR_17 = FUNC_18(&VAR_16->ohci_sc);
 if (VAR_17 == 0)
  VAR_17 = FUNC_12(VAR_16->ohci_sc.sc_bus.bdev);
 if (VAR_17)
  goto error;

 return (0);
error:
 FUNC_14(VAR_15);
 return (VAR_17);
}
