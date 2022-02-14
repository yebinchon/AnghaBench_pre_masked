
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
struct xhci_trb {void* dwTrb3; void* dwTrb2; int qwTrb0; } ;
struct TYPE_6__ {int dma_parent_tag; } ;
struct TYPE_5__ {TYPE_1__* devs; } ;
struct xhci_softc {TYPE_3__ sc_bus; TYPE_2__ sc_hw; scalar_t__ sc_ctx_is_64_byte; } ;
struct xhci_input_dev_ctx {int dummy; } ;
struct xhci_dev_endpoint_trbs {int dummy; } ;
struct xhci_dev_ctx {int dummy; } ;
struct usb_page_search {int physaddr; struct xhci_trb* buffer; } ;
struct usb_page_cache {int tag_parent; } ;
struct usb_page {int dummy; } ;
struct usb_device {size_t controller_slot_id; int bus; } ;
struct TYPE_4__ {struct usb_page* endpoint_pg; struct usb_page_cache* endpoint_pc; struct usb_page input_pg; struct usb_page_cache input_pc; struct usb_page device_pg; struct usb_page_cache device_pc; } ;


 int VAR_0 ;
 struct xhci_softc* FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct usb_page_cache*,struct usb_page*,int,int ) ;
 int FUNC_6 (struct usb_page_cache*) ;
 int FUNC_7 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct xhci_softc*,size_t,int ) ;

__attribute__((used)) static usb_error_t
FUNC_10(struct usb_device *VAR_7)
{
 struct xhci_softc *VAR_8 = FUNC_0(VAR_7->bus);
 struct usb_page_search VAR_9;
 struct usb_page_search VAR_10;
 struct xhci_trb *VAR_11;
 struct usb_page_cache *VAR_12;
 struct usb_page *VAR_13;
 uint64_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;

 VAR_15 = VAR_7->controller_slot_id;

 VAR_12 = &VAR_8->sc_hw.devs[VAR_15].device_pc;
 VAR_13 = &VAR_8->sc_hw.devs[VAR_15].device_pg;


 VAR_12->tag_parent = VAR_8->sc_bus.dma_parent_tag;

 if (FUNC_5(VAR_12, VAR_13, VAR_8->sc_ctx_is_64_byte ?
     (2 * sizeof(struct xhci_dev_ctx)) :
     sizeof(struct xhci_dev_ctx), VAR_3))
  goto error;

 FUNC_7(VAR_12, 0, &VAR_9);

 VAR_12 = &VAR_8->sc_hw.devs[VAR_15].input_pc;
 VAR_13 = &VAR_8->sc_hw.devs[VAR_15].input_pg;


 VAR_12->tag_parent = VAR_8->sc_bus.dma_parent_tag;

 if (FUNC_5(VAR_12, VAR_13, VAR_8->sc_ctx_is_64_byte ?
     (2 * sizeof(struct xhci_input_dev_ctx)) :
     sizeof(struct xhci_input_dev_ctx), VAR_3)) {
  goto error;
 }



 for (VAR_16 = 0; VAR_16 != VAR_1; VAR_16++) {

  VAR_12 = &VAR_8->sc_hw.devs[VAR_15].endpoint_pc[VAR_16];
  VAR_13 = &VAR_8->sc_hw.devs[VAR_15].endpoint_pg[VAR_16];


  VAR_12->tag_parent = VAR_8->sc_bus.dma_parent_tag;

  if (FUNC_5(VAR_12, VAR_13,
      sizeof(struct xhci_dev_endpoint_trbs), VAR_5)) {
   goto error;
  }


  FUNC_7(VAR_12, 0, &VAR_10);


  VAR_11 = VAR_10.buffer;
  VAR_11 += VAR_2 - 1;


  VAR_14 = VAR_10.physaddr;


  VAR_11->qwTrb0 = FUNC_4(VAR_14);
  VAR_11->dwTrb2 = FUNC_3(FUNC_1(0));
  VAR_11->dwTrb3 = FUNC_3(VAR_4 |
      FUNC_2(VAR_6));

  FUNC_6(VAR_12);
 }

 FUNC_9(VAR_8, VAR_15, VAR_9.physaddr);

 return (0);

error:
 FUNC_8(VAR_7);

 return (VAR_0);
}
