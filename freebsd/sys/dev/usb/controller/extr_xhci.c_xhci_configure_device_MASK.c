
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* devs; } ;
struct xhci_softc {TYPE_3__ sc_hw; int sc_exit_lat_max; } ;
struct TYPE_8__ {int dwSctx3; int dwSctx2; int dwSctx1; int dwSctx0; } ;
struct xhci_input_dev_ctx {TYPE_4__ ctx_slot; } ;
struct usb_page_search {struct xhci_input_dev_ctx* buffer; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_5__ {int bDeviceProtocol; } ;
struct usb_device {size_t controller_slot_id; size_t depth; int port_no; int speed; int hs_port_no; struct usb_device* parent_hs_hub; TYPE_1__ ddesc; struct usb_device* parent_hub; int bus; } ;
struct TYPE_6__ {scalar_t__ nports; int tt; int state; scalar_t__ context_num; struct usb_page_cache input_pc; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;




 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;


 int FUNC_16 (struct usb_page_cache*) ;
 int FUNC_17 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_18 (struct xhci_softc*,int *,int) ;
 int FUNC_19 (struct xhci_softc*,TYPE_4__*) ;

__attribute__((used)) static usb_error_t
FUNC_20(struct usb_device *VAR_1)
{
 struct xhci_softc *VAR_2 = FUNC_1(VAR_1->bus);
 struct usb_page_search VAR_3;
 struct usb_page_cache *VAR_4;
 struct xhci_input_dev_ctx *VAR_5;
 struct usb_device *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;

 VAR_11 = VAR_1->controller_slot_id;

 FUNC_0("index=%u\n", VAR_11);

 VAR_4 = &VAR_2->sc_hw.devs[VAR_11].input_pc;

 FUNC_17(VAR_4, 0, &VAR_3);

 VAR_5 = VAR_3.buffer;

 VAR_9 = 0;
 VAR_8 = 0;



 for (VAR_6 = VAR_1; VAR_6 != ((void*)0); VAR_6 = VAR_6->parent_hub) {

  if (VAR_6->parent_hub == ((void*)0))
   break;

  VAR_12 = VAR_6->parent_hub->depth;






  VAR_9 = VAR_6->port_no;

  if (VAR_12 == 0)
   break;

  if (VAR_9 > 15)
   VAR_9 = 15;

  if (VAR_12 < 6)
   VAR_8 |= VAR_9 << (4 * (VAR_12 - 1));
 }

 FUNC_0("Route=0x%08x\n", VAR_8);

 VAR_7 = FUNC_5(VAR_8) |
     FUNC_2(
     VAR_2->sc_hw.devs[VAR_11].context_num + 1);

 switch (VAR_1->speed) {
 case 131:
  VAR_7 |= FUNC_6(2);
  if (VAR_1->parent_hs_hub != ((void*)0) &&
      VAR_1->parent_hs_hub->ddesc.bDeviceProtocol ==
      VAR_0) {
   FUNC_0("Device inherits MTT\n");
   VAR_7 |= FUNC_4(1);
  }
  break;
 case 132:
  VAR_7 |= FUNC_6(3);
  if (VAR_2->sc_hw.devs[VAR_11].nports != 0 &&
      VAR_1->ddesc.bDeviceProtocol == VAR_0) {
   FUNC_0("HUB supports MTT\n");
   VAR_7 |= FUNC_4(1);
  }
  break;
 case 133:
  VAR_7 |= FUNC_6(1);
  if (VAR_1->parent_hs_hub != ((void*)0) &&
      VAR_1->parent_hs_hub->ddesc.bDeviceProtocol ==
      VAR_0) {
   FUNC_0("Device inherits MTT\n");
   VAR_7 |= FUNC_4(1);
  }
  break;
 default:
  VAR_7 |= FUNC_6(4);
  break;
 }

 VAR_10 = VAR_2->sc_hw.devs[VAR_11].nports != 0 &&
     (VAR_1->speed == 130 ||
     VAR_1->speed == 132);

 if (VAR_10)
  VAR_7 |= FUNC_3(1);

 FUNC_18(VAR_2, &VAR_5->ctx_slot.dwSctx0, VAR_7);

 VAR_7 = FUNC_9(VAR_9);

 if (VAR_10) {
  VAR_7 |= FUNC_8(
      VAR_2->sc_hw.devs[VAR_11].nports);
 }

 switch (VAR_1->speed) {
 case 130:
  switch (VAR_2->sc_hw.devs[VAR_11].state) {
  case 129:
  case 128:

   VAR_7 |= FUNC_7(VAR_2->sc_exit_lat_max);
   break;
  default:

   break;
  }
  break;
 default:
  break;
 }

 FUNC_18(VAR_2, &VAR_5->ctx_slot.dwSctx1, VAR_7);

 VAR_7 = FUNC_10(0);

 if (VAR_10) {
  VAR_7 |= FUNC_13(
      VAR_2->sc_hw.devs[VAR_11].tt);
 }

 VAR_6 = VAR_1->parent_hs_hub;


 switch (VAR_1->speed) {
 case 133:
 case 131:
  if (VAR_6 != ((void*)0)) {
   VAR_7 |= FUNC_11(
       VAR_6->controller_slot_id);
   VAR_7 |= FUNC_12(
       VAR_1->hs_port_no);
  }
  break;
 default:
  break;
 }

 FUNC_18(VAR_2, &VAR_5->ctx_slot.dwSctx2, VAR_7);





 VAR_7 = FUNC_14(0) |
     FUNC_15(0);

 FUNC_18(VAR_2, &VAR_5->ctx_slot.dwSctx3, VAR_7);




 FUNC_16(VAR_4);

 return (0);
}
