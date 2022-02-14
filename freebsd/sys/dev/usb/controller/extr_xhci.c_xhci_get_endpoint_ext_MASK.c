
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {TYPE_1__* devs; } ;
struct xhci_softc {TYPE_2__ sc_hw; } ;
struct xhci_endpoint_ext {int physaddr; int trb; struct usb_page_cache* page_cache; } ;
struct usb_page_search {int physaddr; int buffer; } ;
struct usb_page_cache {int dummy; } ;
struct usb_endpoint_descriptor {size_t bEndpointAddress; int bmAttributes; } ;
struct usb_device {size_t controller_slot_id; int bus; } ;
struct TYPE_3__ {struct xhci_endpoint_ext* endp; struct usb_page_cache* endpoint_pc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct xhci_softc* FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct usb_page_cache*,int ,struct usb_page_search*) ;

__attribute__((used)) static struct xhci_endpoint_ext *
FUNC_3(struct usb_device *VAR_3, struct usb_endpoint_descriptor *VAR_4)
{
 struct xhci_softc *VAR_5 = FUNC_0(VAR_3->bus);
 struct xhci_endpoint_ext *VAR_6;
 struct usb_page_cache *VAR_7;
 struct usb_page_search VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;

 VAR_9 = VAR_4->bEndpointAddress;
 if ((VAR_4->bmAttributes & VAR_2) == VAR_0)
  VAR_9 |= VAR_1;

 VAR_9 = FUNC_1(VAR_9);

 VAR_10 = VAR_3->controller_slot_id;

 VAR_7 = &VAR_5->sc_hw.devs[VAR_10].endpoint_pc[VAR_9];

 FUNC_2(VAR_7, 0, &VAR_8);

 VAR_6 = &VAR_5->sc_hw.devs[VAR_10].endp[VAR_9];
 VAR_6->page_cache = VAR_7;
 VAR_6->trb = VAR_8.buffer;
 VAR_6->physaddr = VAR_8.physaddr;

 return (VAR_6);
}
