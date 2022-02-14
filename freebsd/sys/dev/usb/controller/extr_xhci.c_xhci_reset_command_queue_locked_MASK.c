
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int root_pc; } ;
struct TYPE_4__ {int bus_mtx; } ;
struct xhci_softc {int sc_command_ccs; TYPE_2__ sc_hw; scalar_t__ sc_command_idx; TYPE_1__ sc_bus; } ;
struct xhci_hw_root {TYPE_3__* hwr_commands; } ;
struct usb_page_search {uintptr_t physaddr; struct xhci_hw_root* buffer; } ;
struct TYPE_6__ {int qwTrb0; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct xhci_softc*,int ,int ) ;
 int FUNC_2 (struct xhci_softc*,int ,int ,int) ;
 int FUNC_3 (uintptr_t) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int VAR_9 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,struct usb_page_search*) ;

__attribute__((used)) static int
FUNC_8(struct xhci_softc *VAR_10)
{
 struct usb_page_search VAR_11;
 struct xhci_hw_root *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14;

 FUNC_0("\n");

 VAR_14 = FUNC_1(VAR_10, VAR_9, VAR_2);
 if (VAR_14 & VAR_4) {
  FUNC_0("Command ring running\n");
  VAR_14 &= ~(VAR_5 | VAR_3);
  FUNC_2(VAR_10, VAR_9, VAR_2, VAR_14 | VAR_5);
  FUNC_2(VAR_10, VAR_9, VAR_1, 0);

  FUNC_2(VAR_10, VAR_9, VAR_2, VAR_14 | VAR_3);
  FUNC_2(VAR_10, VAR_9, VAR_1, 0);


   FUNC_5(&VAR_10->sc_bus.bus_mtx, VAR_8 / 4);


  VAR_14 = FUNC_1(VAR_10, VAR_9, VAR_2);
  if (VAR_14 & VAR_4) {
   FUNC_0("Comand ring still running\n");
   return (VAR_0);
  }
 }


 VAR_10->sc_command_ccs = 1;
 VAR_10->sc_command_idx = 0;

 FUNC_7(&VAR_10->sc_hw.root_pc, 0, &VAR_11);


 VAR_13 = VAR_11.physaddr;
 VAR_12 = VAR_11.buffer;
 VAR_13 += (uintptr_t)&((struct xhci_hw_root *)0)->hwr_commands[0];

 FUNC_0("CRCR=0x%016llx\n", (unsigned long long)VAR_13);

 FUNC_4(VAR_12->hwr_commands, 0, sizeof(VAR_12->hwr_commands));
 VAR_12->hwr_commands[VAR_7 - 1].qwTrb0 = FUNC_3(VAR_13);

 FUNC_6(&VAR_10->sc_hw.root_pc);

 FUNC_2(VAR_10, VAR_9, VAR_2, ((uint32_t)VAR_13) | VAR_6);
 FUNC_2(VAR_10, VAR_9, VAR_1, (uint32_t)(VAR_13 >> 32));

 return (0);
}
