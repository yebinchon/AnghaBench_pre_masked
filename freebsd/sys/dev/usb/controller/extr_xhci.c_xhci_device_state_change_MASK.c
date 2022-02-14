
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef size_t uint8_t ;
struct TYPE_4__ {TYPE_1__* devs; } ;
struct xhci_softc {TYPE_2__ sc_hw; } ;
struct usb_page_search {int physaddr; } ;
struct usb_device {size_t controller_slot_id; int * parent_hub; int bus; } ;
struct TYPE_3__ {int input_pc; int context_num; int state; scalar_t__ nports; int tt; } ;


 int FUNC_0 (char*,...) ;



 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_softc*) ;
 int FUNC_3 (struct xhci_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct usb_device*,scalar_t__*,int *) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (int *,int ,struct usb_page_search*) ;
 scalar_t__ FUNC_7 (struct xhci_softc*,int ,int,size_t) ;
 scalar_t__ FUNC_8 (struct xhci_softc*,int ,size_t) ;
 scalar_t__ FUNC_9 (struct xhci_softc*,size_t) ;
 scalar_t__ FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*,int,int ) ;

__attribute__((used)) static void
FUNC_12(struct usb_device *VAR_3)
{
 struct xhci_softc *VAR_4 = FUNC_1(VAR_3->bus);
 struct usb_page_search VAR_5;
 usb_error_t VAR_6;
 uint8_t VAR_7;


 if (VAR_3->parent_hub == ((void*)0))
  return;

 VAR_7 = VAR_3->controller_slot_id;

 FUNC_0("\n");

 if (FUNC_5(VAR_3) == 129) {
  VAR_6 = FUNC_4(VAR_3, &VAR_4->sc_hw.devs[VAR_7].nports,
      &VAR_4->sc_hw.devs[VAR_7].tt);
  if (VAR_6 != 0)
   VAR_4->sc_hw.devs[VAR_7].nports = 0;
 }

 FUNC_2(VAR_4);

 switch (FUNC_5(VAR_3)) {
 case 128:
  if (VAR_4->sc_hw.devs[VAR_7].state == VAR_2)
   break;


  VAR_4->sc_hw.devs[VAR_7].state = VAR_2;


  VAR_4->sc_hw.devs[VAR_7].context_num = 0;

  VAR_6 = FUNC_9(VAR_4, VAR_7);

  if (VAR_6 != 0) {
   FUNC_0("Device reset failed "
       "for slot %u.\n", VAR_7);
  }
  break;

 case 130:
  if (VAR_4->sc_hw.devs[VAR_7].state == VAR_0)
   break;

  VAR_4->sc_hw.devs[VAR_7].state = VAR_0;


  FUNC_11(VAR_3, 1, 0);


  VAR_6 = FUNC_7(VAR_4, 0, 1, VAR_7);

  if (VAR_6) {
   FUNC_0("Failed to deconfigure "
       "slot %u.\n", VAR_7);
  }
  break;

 case 129:
  if (VAR_4->sc_hw.devs[VAR_7].state == VAR_1)
   break;


  VAR_4->sc_hw.devs[VAR_7].state = VAR_1;


  VAR_4->sc_hw.devs[VAR_7].context_num = 0;

  FUNC_6(&VAR_4->sc_hw.devs[VAR_7].input_pc, 0, &VAR_5);

  FUNC_11(VAR_3, 3, 0);

  VAR_6 = FUNC_10(VAR_3);
  if (VAR_6 != 0) {
   FUNC_0("Could not configure device "
       "at slot %u.\n", VAR_7);
  }

  VAR_6 = FUNC_8(VAR_4, VAR_5.physaddr, VAR_7);
  if (VAR_6 != 0) {
   FUNC_0("Could not evaluate device "
       "context at slot %u.\n", VAR_7);
  }
  break;

 default:
  break;
 }
 FUNC_3(VAR_4);
}
