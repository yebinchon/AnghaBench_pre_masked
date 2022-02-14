
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct xhci_trb {int dummy; } ;
struct TYPE_5__ {TYPE_1__* devs; } ;
struct xhci_softc {TYPE_2__ sc_hw; } ;
struct xhci_input_dev_ctx {TYPE_3__* ctx_ep; } ;
struct xhci_endpoint_ext {int physaddr; size_t trb_ep_mode; int * page_cache; int trb_ep_maxp; } ;
struct usb_page_search {struct xhci_input_dev_ctx* buffer; } ;
struct usb_endpoint_descriptor {size_t bEndpointAddress; int bmAttributes; int * wMaxPacketSize; } ;
struct usb_device {size_t controller_slot_id; int speed; int bus; } ;
struct TYPE_6__ {int dwEpCtx4; int qwEpCtx2; int dwEpCtx1; int dwEpCtx0; } ;
struct TYPE_4__ {int input_pc; } ;


 int FUNC_0 (int,int ) ;


 size_t VAR_0 ;


 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 size_t FUNC_15 (size_t) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,struct usb_page_search*) ;
 int FUNC_18 (struct xhci_softc*,int *,int) ;
 int FUNC_19 (struct xhci_softc*,int *,int) ;
 int FUNC_20 (struct xhci_softc*,TYPE_3__*) ;

__attribute__((used)) static usb_error_t
FUNC_21(struct usb_device *VAR_9,
    struct usb_endpoint_descriptor *VAR_10, struct xhci_endpoint_ext *VAR_11,
    uint16_t VAR_12, uint8_t VAR_13,
    uint8_t VAR_14, uint8_t VAR_15, uint16_t VAR_16,
    uint16_t VAR_17, uint8_t VAR_18)
{
 struct usb_page_search VAR_19;
 struct xhci_softc *VAR_20 = FUNC_1(VAR_9->bus);
 struct xhci_input_dev_ctx *VAR_21;
 uint64_t VAR_22 = VAR_11->physaddr;
 uint32_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;

 VAR_24 = VAR_9->controller_slot_id;

 FUNC_17(&VAR_20->sc_hw.devs[VAR_24].input_pc, 0, &VAR_19);

 VAR_21 = VAR_19.buffer;

 VAR_25 = VAR_10->bEndpointAddress;
 VAR_26 = VAR_10->bmAttributes & VAR_1;

 if (VAR_26 == 133)
  VAR_25 |= VAR_0;

 VAR_25 = FUNC_15(VAR_25);

  if (VAR_25 == 0)
  return (VAR_4);

 if (VAR_13 == 0)
  return (VAR_3);

 VAR_13--;

 if (VAR_14 == 0)
  return (VAR_3);


 VAR_11->trb_ep_mode = VAR_18;

 VAR_11->trb_ep_maxp = VAR_10->wMaxPacketSize[0];
 FUNC_16(VAR_11->page_cache);

 if (VAR_18 == VAR_2) {
  VAR_23 = FUNC_2(0) |
      FUNC_5(VAR_6 - 1) |
      FUNC_4(1);

  VAR_22 += sizeof(struct xhci_trb) *
      VAR_7 * VAR_5;
 } else {
  VAR_23 = FUNC_2(0) |
      FUNC_5(0) |
      FUNC_4(0);

  VAR_22 |= FUNC_12(1);
 }

 switch (VAR_9->speed) {
 case 130:
 case 129:

  VAR_15 += 3;
  break;
 default:
  break;
 }

 switch (VAR_26) {
 case 132:
  if (VAR_15 > 3)
   VAR_15--;
  VAR_23 |= FUNC_3(VAR_15);
  break;
 case 131:
  VAR_23 |= FUNC_3(VAR_15);

  switch (VAR_9->speed) {
  case 128:
   if (VAR_14 > 3)
    VAR_14 = 3;
   VAR_23 |= FUNC_6(VAR_14 - 1);
   VAR_13 /= VAR_14;
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 FUNC_18(VAR_20, &VAR_21->ctx_ep[VAR_25 - 1].dwEpCtx0, VAR_23);

 VAR_23 =
     FUNC_9(0) |
     FUNC_10(VAR_13) |
     FUNC_11(VAR_16);







 if (VAR_26 != 131)
  VAR_23 |= FUNC_7(3);

 switch (VAR_26) {
 case 133:
  VAR_23 |= FUNC_8(4);
  break;
 case 131:
  VAR_23 |= FUNC_8(1);
  break;
 case 134:
  VAR_23 |= FUNC_8(2);
  break;
 default:
  VAR_23 |= FUNC_8(3);
  break;
 }


 if (VAR_25 & 1)
  VAR_23 |= FUNC_8(4);

 FUNC_18(VAR_20, &VAR_21->ctx_ep[VAR_25 - 1].dwEpCtx1, VAR_23);
 FUNC_19(VAR_20, &VAR_21->ctx_ep[VAR_25 - 1].qwEpCtx2, VAR_22);

 switch (VAR_10->bmAttributes & VAR_1) {
 case 132:
 case 131:
  VAR_23 = FUNC_14(VAR_17) |
      FUNC_13(FUNC_0(VAR_8,
      VAR_17));
  break;
 case 133:
  VAR_23 = FUNC_13(8);
  break;
 default:
  VAR_23 = FUNC_13(VAR_8);
  break;
 }

 FUNC_18(VAR_20, &VAR_21->ctx_ep[VAR_25 - 1].dwEpCtx4, VAR_23);




 FUNC_16(&VAR_20->sc_hw.devs[VAR_24].input_pc);

 return (0);
}
