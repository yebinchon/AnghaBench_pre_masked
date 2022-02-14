
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef uintptr_t uint64_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {int root_pc; } ;
struct xhci_softc {size_t sc_event_idx; int sc_event_ccs; TYPE_1__ sc_hw; } ;
struct xhci_hw_root {TYPE_2__* hwr_events; } ;
struct usb_page_search {uintptr_t physaddr; struct xhci_hw_root* buffer; } ;
struct TYPE_5__ {int dwTrb3; int dwTrb2; int qwTrb0; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,size_t,int,long long,long,long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 uintptr_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;


 int FUNC_5 (struct xhci_softc*,int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,struct usb_page_search*) ;
 int FUNC_10 (struct xhci_softc*,TYPE_2__*) ;
 int FUNC_11 (struct xhci_softc*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_12(struct xhci_softc *VAR_4)
{
 struct usb_page_search VAR_5;
 struct xhci_hw_root *VAR_6;
 uint64_t VAR_7;
 uint32_t VAR_8;
 int VAR_9 = 0;
 uint16_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 FUNC_9(&VAR_4->sc_hw.root_pc, 0, &VAR_5);

 VAR_6 = VAR_5.buffer;



 FUNC_8(&VAR_4->sc_hw.root_pc);

 VAR_10 = VAR_4->sc_event_idx;
 VAR_12 = VAR_4->sc_event_ccs;
 VAR_14 = 2;

 while (1) {

  VAR_8 = FUNC_6(VAR_6->hwr_events[VAR_10].dwTrb3);

  VAR_13 = (VAR_8 & VAR_2) ? 1 : 0;

  if (VAR_12 != VAR_13)
   break;

  VAR_11 = FUNC_4(VAR_8);

  FUNC_1(10, "event[%u] = %u (0x%016llx 0x%08lx 0x%08lx)\n",
      VAR_10, VAR_11, (long long)FUNC_7(VAR_6->hwr_events[VAR_10].qwTrb0),
      (long)FUNC_6(VAR_6->hwr_events[VAR_10].dwTrb2),
      (long)FUNC_6(VAR_6->hwr_events[VAR_10].dwTrb3));

  switch (VAR_11) {
  case 128:
   FUNC_11(VAR_4, &VAR_6->hwr_events[VAR_10]);
   break;
  case 129:
   VAR_9 |= FUNC_10(VAR_4, &VAR_6->hwr_events[VAR_10]);
   break;
  default:
   FUNC_0("Unhandled event = %u\n", VAR_11);
   break;
  }

  VAR_10++;

  if (VAR_10 == VAR_1) {
   VAR_10 = 0;
   VAR_12 ^= 1;


   if (!--VAR_14)
    break;
  }
 }

 VAR_4->sc_event_idx = VAR_10;
 VAR_4->sc_event_ccs = VAR_12;
 VAR_7 = VAR_5.physaddr;
 VAR_7 += (uintptr_t)&((struct xhci_hw_root *)0)->hwr_events[VAR_10];


 VAR_7 |= VAR_0;

 FUNC_5(VAR_4, VAR_3, FUNC_3(0), (uint32_t)VAR_7);
 FUNC_5(VAR_4, VAR_3, FUNC_2(0), (uint32_t)(VAR_7 >> 32));

 return (VAR_9);
}
