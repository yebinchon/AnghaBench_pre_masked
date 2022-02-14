
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {struct xhci_hw_dev* devs; } ;
struct xhci_softc {TYPE_2__ sc_bus; int (* sc_port_route ) (int ,int ,int ) ;int * sc_cmd_result; TYPE_1__ sc_hw; } ;
struct xhci_hw_dev {int state; int device_pc; int input_pc; } ;
struct xhci_endpoint_ext {int trb_halted; int trb_running; } ;
struct TYPE_6__ {int dwSctx3; } ;
struct xhci_dev_ctx {TYPE_3__ ctx_slot; } ;
struct usb_page_search {struct xhci_dev_ctx* buffer; int physaddr; } ;
struct usb_device {size_t controller_slot_id; int address; int ctrl_ep_desc; int bus; int speed; int * parent_hub; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct xhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_softc*) ;
 int FUNC_5 (struct xhci_softc*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;


 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mtx*) ;
 int FUNC_10 (struct mtx*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,struct usb_page_search*) ;
 int FUNC_14 (struct xhci_softc*,int ,int,size_t) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*,int *,struct xhci_endpoint_ext*,int ,int,int,int ,int,int,int ) ;
 int FUNC_17 (struct usb_device*,int,int ) ;
 int FUNC_18 (struct xhci_softc*,int *) ;
 struct xhci_endpoint_ext* FUNC_19 (struct usb_device*,int *) ;

__attribute__((used)) static usb_error_t
FUNC_20(struct usb_device *VAR_5, struct mtx *VAR_6, uint16_t VAR_7)
{
 struct usb_page_search VAR_8;
 struct usb_page_search VAR_9;
 struct xhci_softc *VAR_10 = FUNC_3(VAR_5->bus);
 struct xhci_hw_dev *VAR_11;
 struct xhci_dev_ctx *VAR_12;
 struct xhci_endpoint_ext *VAR_13;
 uint32_t VAR_14;
 uint16_t VAR_15;
 usb_error_t VAR_16;
 uint8_t VAR_17;


 if (VAR_5->parent_hub == ((void*)0))
  return (VAR_1);

 VAR_17 = VAR_5->controller_slot_id;

 VAR_11 = &VAR_10->sc_hw.devs[VAR_17];

 if (VAR_6 != ((void*)0))
  FUNC_10(VAR_6);

 FUNC_4(VAR_10);

 switch (VAR_11->state) {
 case 129:
 case 128:

  VAR_11->state = 128;


  FUNC_17(VAR_5, 3, 0);


  VAR_16 = FUNC_15(VAR_5);

  if (VAR_16 != 0) {
   FUNC_0("Could not configure device\n");
   break;
  }


  switch (VAR_5->speed) {
  case 130:
  case 132:
   VAR_15 = 8;
   break;
  case 131:
   VAR_15 = 64;
   break;
  default:
   VAR_15 = 512;
   break;
  }

  VAR_13 = FUNC_19(VAR_5,
      &VAR_5->ctrl_ep_desc);


  FUNC_1(VAR_5->bus);
  VAR_13->trb_halted = 1;
  VAR_13->trb_running = 0;
  FUNC_2(VAR_5->bus);

  VAR_16 = FUNC_16(VAR_5,
      &VAR_5->ctrl_ep_desc, VAR_13,
      0, 1, 1, 0, VAR_15, VAR_15, VAR_0);

  if (VAR_16 != 0) {
   FUNC_0("Could not configure default endpoint\n");
   break;
  }


  FUNC_13(&VAR_11->input_pc, 0, &VAR_8);

  VAR_16 = FUNC_14(VAR_10, VAR_8.physaddr,
      (VAR_7 == 0), VAR_17);

  if (VAR_16 != 0) {
   VAR_14 = FUNC_8(VAR_10->sc_cmd_result[0]);
   if (VAR_7 == 0 && VAR_10->sc_port_route != ((void*)0) &&
       FUNC_7(VAR_14) ==
       VAR_4) {


    VAR_10->sc_port_route(VAR_10->sc_bus.parent, 0, ~0);
   }
   FUNC_0("Could not set address "
       "for slot %u.\n", VAR_17);
   if (VAR_7 != 0)
    break;
  }



  FUNC_13(&VAR_11->device_pc, 0, &VAR_9);
  VAR_12 = VAR_9.buffer;
  FUNC_12(&VAR_11->device_pc);

  VAR_14 = FUNC_18(VAR_10, &VAR_12->ctx_slot.dwSctx3);
  VAR_5->address = FUNC_6(VAR_14);



  if (VAR_7 != 0)
   VAR_11->state = VAR_3;
  else
   VAR_11->state = 129;
  break;

 default:
  FUNC_0("Wrong state for set address.\n");
  VAR_16 = VAR_2;
  break;
 }
 FUNC_5(VAR_10);

 if (VAR_6 != ((void*)0))
  FUNC_9(VAR_6);

 return (VAR_16);
}
