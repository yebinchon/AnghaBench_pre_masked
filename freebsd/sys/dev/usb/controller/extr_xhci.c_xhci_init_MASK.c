
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int dma_bits; int control_ep_quirk; int parent; void* devices_max; int devices; int * methods; int usbrev; } ;
struct xhci_softc {int sc_event_ccs; int sc_command_ccs; int sc_oper_off; int sc_runt_off; int sc_door_off; int sc_ctx_is_64_byte; int sc_noslot; int sc_noscratch; unsigned int sc_erst_max; scalar_t__ sc_imod_default; TYPE_3__ sc_bus; TYPE_2__* sc_config_msg; int sc_cmd_sx; int sc_cmd_cv; scalar_t__ sc_exit_lat_max; int sc_noport; scalar_t__ sc_capa_off; int sc_devices; } ;
typedef int device_t ;
struct TYPE_4__ {int * pm_callback; } ;
struct TYPE_5__ {TYPE_3__* bus; TYPE_1__ hdr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct xhci_softc*,int ,int ) ;
 int FUNC_11 (struct xhci_softc*,int ,int ) ;
 int FUNC_12 (struct xhci_softc*,int ,int ) ;
 int VAR_17 ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int ,char*,...) ;
 int VAR_18 ;
 int FUNC_15 (int *,char*) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int ,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;

usb_error_t
FUNC_17(struct xhci_softc *VAR_24, device_t VAR_25, uint8_t VAR_26)
{
 uint32_t VAR_27;

 FUNC_0("\n");


 VAR_24->sc_bus.parent = VAR_25;


 VAR_24->sc_bus.usbrev = VAR_2;


 VAR_24->sc_bus.methods = &VAR_19;


 VAR_24->sc_bus.devices = VAR_24->sc_devices;
 VAR_24->sc_bus.devices_max = VAR_11;


 VAR_24->sc_event_ccs = 1;
 VAR_24->sc_command_ccs = 1;


 VAR_24->sc_capa_off = 0;
 VAR_24->sc_oper_off = FUNC_10(VAR_24, VAR_17, VAR_3);
 VAR_24->sc_runt_off = FUNC_12(VAR_24, VAR_17, VAR_16) & ~0x1F;
 VAR_24->sc_door_off = FUNC_12(VAR_24, VAR_17, VAR_4) & ~0x3;

 FUNC_0("CAPLENGTH=0x%x\n", VAR_24->sc_oper_off);
 FUNC_0("RUNTIMEOFFSET=0x%x\n", VAR_24->sc_runt_off);
 FUNC_0("DOOROFFSET=0x%x\n", VAR_24->sc_door_off);

 FUNC_0("xHCI version = 0x%04x\n", FUNC_11(VAR_24, VAR_17, VAR_5));

 if (!(FUNC_12(VAR_24, VAR_18, VAR_14) & VAR_15)) {
  FUNC_14(VAR_24->sc_bus.parent, "Controller does "
      "not support 4K page size.\n");
  return (VAR_1);
 }

 VAR_27 = FUNC_12(VAR_24, VAR_17, VAR_6);

 FUNC_0("HCS0 = 0x%08x\n", VAR_27);


 if (FUNC_3(VAR_27)) {
  VAR_24->sc_ctx_is_64_byte = 1;
 } else {
  VAR_24->sc_ctx_is_64_byte = 0;
 }


 VAR_24->sc_bus.dma_bits = (FUNC_2(VAR_27) &&
     VAR_23 == 0 && VAR_26 == 0) ? 64 : 32;

 FUNC_14(VAR_25, "%d bytes context size, %d-bit DMA\n",
     VAR_24->sc_ctx_is_64_byte ? 64 : 32, (int)VAR_24->sc_bus.dma_bits);


 VAR_24->sc_bus.control_ep_quirk = (VAR_22 ? 1 : 0);

 VAR_27 = FUNC_12(VAR_24, VAR_17, VAR_7);


 VAR_24->sc_noport = FUNC_5(VAR_27);

 if (VAR_24->sc_noport == 0) {
  FUNC_14(VAR_24->sc_bus.parent, "Invalid number "
      "of ports: %u\n", VAR_24->sc_noport);
  return (VAR_1);
 }

 VAR_24->sc_noport = VAR_24->sc_noport;
 VAR_24->sc_noslot = FUNC_4(VAR_27);

 FUNC_0("Max slots: %u\n", VAR_24->sc_noslot);

 if (VAR_24->sc_noslot > VAR_11)
  VAR_24->sc_noslot = VAR_11;

 VAR_27 = FUNC_12(VAR_24, VAR_17, VAR_8);

 FUNC_0("HCS2=0x%08x\n", VAR_27);


 VAR_24->sc_noscratch = FUNC_7(VAR_27);

 if (VAR_24->sc_noscratch > VAR_13) {
  FUNC_14(VAR_24->sc_bus.parent, "XHCI request "
      "too many scratchpads\n");
  return (VAR_0);
 }

 FUNC_0("Max scratch: %u\n", VAR_24->sc_noscratch);


 VAR_24->sc_erst_max = 1U << FUNC_6(VAR_27);
 if (VAR_24->sc_erst_max > VAR_12)
  VAR_24->sc_erst_max = VAR_12;

 VAR_27 = FUNC_12(VAR_24, VAR_17, VAR_9);


 VAR_24->sc_exit_lat_max = FUNC_8(VAR_27) +
     FUNC_9(VAR_27) + 250 ;


 if (VAR_24->sc_imod_default == 0)
  VAR_24->sc_imod_default = VAR_10;


 if (FUNC_16(&VAR_24->sc_bus,
     FUNC_1(VAR_25), &VAR_21)) {
  return (VAR_0);
 }


 FUNC_13(&VAR_24->sc_cmd_cv, "CMDQ");
 FUNC_15(&VAR_24->sc_cmd_sx, "CMDQ lock");

 VAR_24->sc_config_msg[0].hdr.pm_callback = &VAR_20;
 VAR_24->sc_config_msg[0].bus = &VAR_24->sc_bus;
 VAR_24->sc_config_msg[1].hdr.pm_callback = &VAR_20;
 VAR_24->sc_config_msg[1].bus = &VAR_24->sc_bus;

 return (0);
}
