
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef uintptr_t uint64_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_9__ {int parent; } ;
struct TYPE_6__ {int root_pc; int * scratch_pc; int ctx_pc; } ;
struct xhci_softc {int sc_event_ccs; int sc_command_ccs; int sc_noslot; size_t sc_noscratch; int sc_imod_default; TYPE_4__ sc_bus; int (* sc_port_route ) (int ,int ,int ) ;TYPE_1__ sc_hw; int sc_erst_max; scalar_t__ sc_command_idx; scalar_t__ sc_event_idx; } ;
struct xhci_hw_root {TYPE_3__* hwr_commands; TYPE_2__* hwr_ring_seg; int * hwr_events; void** qwSpBufPtr; void** qwBaaDevCtxAddr; } ;
struct xhci_dev_ctx_addr {TYPE_3__* hwr_commands; TYPE_2__* hwr_ring_seg; int * hwr_events; void** qwSpBufPtr; void** qwBaaDevCtxAddr; } ;
struct usb_page_search {uintptr_t physaddr; struct xhci_hw_root* buffer; } ;
struct TYPE_8__ {void* qwTrb0; } ;
struct TYPE_7__ {int dwEvrsTableSize; void* qwEvrsTablePtr; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (struct xhci_softc*,int ,int ) ;
 int FUNC_10 (struct xhci_softc*,int ,int ,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (uintptr_t) ;
 int VAR_17 ;
 int FUNC_14 (struct xhci_hw_root*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (TYPE_4__*,int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ,struct usb_page_search*) ;
 int FUNC_19 (TYPE_4__*) ;
 int VAR_20 ;
 scalar_t__ FUNC_20 (struct xhci_softc*) ;
 int VAR_21 ;

usb_error_t
FUNC_21(struct xhci_softc *VAR_22)
{
 struct usb_page_search VAR_23;
 struct xhci_hw_root *VAR_24;
 struct xhci_dev_ctx_addr *VAR_25;
 usb_error_t VAR_26;
 uint64_t VAR_27;
 uint32_t VAR_28;
 uint16_t VAR_29;

 FUNC_0("\n");

 VAR_22->sc_event_ccs = 1;
 VAR_22->sc_event_idx = 0;
 VAR_22->sc_command_ccs = 1;
 VAR_22->sc_command_idx = 0;

 VAR_26 = FUNC_20(VAR_22);
 if (VAR_26)
  return (VAR_26);


 FUNC_0("CONFIG=0x%08x -> 0x%08x\n",
     FUNC_9(VAR_22, VAR_18, VAR_4), VAR_22->sc_noslot);

 FUNC_10(VAR_22, VAR_18, VAR_4, VAR_22->sc_noslot);

 VAR_28 = FUNC_9(VAR_22, VAR_18, VAR_16);


 FUNC_10(VAR_22, VAR_18, VAR_16, VAR_28);

 FUNC_10(VAR_22, VAR_18, VAR_10, 0);


 FUNC_18(&VAR_22->sc_hw.ctx_pc, 0, &VAR_23);
 VAR_25 = VAR_23.buffer;
 FUNC_14(VAR_25, 0, sizeof(*VAR_25));

 VAR_27 = VAR_23.physaddr;
 VAR_27 += (uintptr_t)&((struct xhci_dev_ctx_addr *)0)->qwSpBufPtr[0];


 VAR_25->qwBaaDevCtxAddr[0] = FUNC_13(VAR_27);

 for (VAR_29 = 0; VAR_29 != VAR_22->sc_noscratch; VAR_29++) {
  struct usb_page_search VAR_30;
  FUNC_18(&VAR_22->sc_hw.scratch_pc[VAR_29], 0, &VAR_30);
  VAR_25->qwSpBufPtr[VAR_29] = FUNC_13((uint64_t)VAR_30.physaddr);
 }

 VAR_27 = VAR_23.physaddr;

 FUNC_10(VAR_22, VAR_18, VAR_9, (uint32_t)VAR_27);
 FUNC_10(VAR_22, VAR_18, VAR_8, (uint32_t)(VAR_27 >> 32));
 FUNC_10(VAR_22, VAR_18, VAR_9, (uint32_t)VAR_27);
 FUNC_10(VAR_22, VAR_18, VAR_8, (uint32_t)(VAR_27 >> 32));


 FUNC_0("ERSTSZ=0x%08x -> 0x%08x\n",
     FUNC_9(VAR_22, VAR_19, FUNC_5(0)), VAR_22->sc_erst_max);

 FUNC_10(VAR_22, VAR_19, FUNC_5(0), FUNC_6(VAR_22->sc_erst_max));


 FUNC_10(VAR_22, VAR_19, FUNC_8(0), VAR_22->sc_imod_default);

 FUNC_18(&VAR_22->sc_hw.root_pc, 0, &VAR_23);

 VAR_24 = VAR_23.buffer;
 VAR_27 = VAR_23.physaddr;
 VAR_27 += (uintptr_t)&((struct xhci_hw_root *)0)->hwr_events[0];


 FUNC_14(VAR_24, 0, sizeof(*VAR_24));

 VAR_24->hwr_ring_seg[0].qwEvrsTablePtr = FUNC_13(VAR_27);
 VAR_24->hwr_ring_seg[0].dwEvrsTableSize = FUNC_12(VAR_13);

 FUNC_0("ERDP(0)=0x%016llx\n", (unsigned long long)VAR_27);

 FUNC_10(VAR_22, VAR_19, FUNC_2(0), (uint32_t)VAR_27);
 FUNC_10(VAR_22, VAR_19, FUNC_1(0), (uint32_t)(VAR_27 >> 32));

 VAR_27 = VAR_23.physaddr;

 FUNC_0("ERSTBA(0)=0x%016llx\n", (unsigned long long)VAR_27);

 FUNC_10(VAR_22, VAR_19, FUNC_4(0), (uint32_t)VAR_27);
 FUNC_10(VAR_22, VAR_19, FUNC_3(0), (uint32_t)(VAR_27 >> 32));


 VAR_28 = FUNC_9(VAR_22, VAR_19, FUNC_7(0));
 VAR_28 |= VAR_11;
 FUNC_10(VAR_22, VAR_19, FUNC_7(0), VAR_28);


 VAR_27 = VAR_23.physaddr;
 VAR_27 += (uintptr_t)&((struct xhci_hw_root *)0)->hwr_commands[0];

 FUNC_0("CRCR=0x%016llx\n", (unsigned long long)VAR_27);

 FUNC_10(VAR_22, VAR_18, VAR_6, ((uint32_t)VAR_27) | VAR_7);
 FUNC_10(VAR_22, VAR_18, VAR_5, (uint32_t)(VAR_27 >> 32));

 VAR_24->hwr_commands[VAR_12 - 1].qwTrb0 = FUNC_13(VAR_27);

 FUNC_16(&VAR_22->sc_bus, &VAR_20);


 FUNC_10(VAR_22, VAR_18, VAR_15, VAR_3 |
     VAR_2 | VAR_1);

 for (VAR_29 = 0; VAR_29 != 100; VAR_29++) {
  FUNC_17(((void*)0), VAR_17 / 100);
  VAR_28 = FUNC_9(VAR_22, VAR_18, VAR_16) & VAR_14;
  if (!VAR_28)
   break;
 }
 if (VAR_28) {
  FUNC_10(VAR_22, VAR_18, VAR_15, 0);
  FUNC_11(VAR_22->sc_bus.parent, "Run timeout.\n");
  return (VAR_0);
 }


 FUNC_19(&VAR_22->sc_bus);

 if (VAR_22->sc_port_route != ((void*)0)) {

  VAR_22->sc_port_route(VAR_22->sc_bus.parent,
      ~VAR_21, VAR_21);
 }
 return (0);
}
