
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_stream_t ;
typedef scalar_t__ usb_error_t ;
typedef size_t uint8_t ;
struct xhci_trb {int dummy; } ;
struct TYPE_7__ {TYPE_2__* devs; } ;
struct xhci_softc {TYPE_3__ sc_hw; } ;
struct xhci_endpoint_ext {int physaddr; } ;
struct usb_xfer {int stream_id; TYPE_4__* endpoint; TYPE_1__* xroot; } ;
struct usb_page_search {int physaddr; } ;
struct usb_page_cache {int dummy; } ;
struct usb_endpoint_descriptor {size_t bEndpointAddress; int bmAttributes; } ;
struct usb_device {size_t controller_slot_id; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor* edesc; } ;
struct TYPE_6__ {struct usb_page_cache input_pc; } ;
struct TYPE_5__ {struct usb_device* udev; int bus; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_softc*) ;
 int FUNC_3 (struct xhci_softc*) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (size_t) ;
 int VAR_4 ;
 int FUNC_6 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 scalar_t__ FUNC_7 (struct xhci_softc*,int ,int ,size_t) ;
 scalar_t__ FUNC_8 (struct xhci_softc*,int ,size_t) ;
 scalar_t__ FUNC_9 (struct xhci_softc*,int ,size_t,size_t) ;
 scalar_t__ FUNC_10 (struct xhci_softc*,int,int,size_t,size_t) ;
 scalar_t__ FUNC_11 (struct xhci_softc*,int ,size_t,size_t) ;
 scalar_t__ FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_device*,unsigned int,int ) ;
 struct xhci_endpoint_ext* FUNC_14 (struct usb_device*,struct usb_endpoint_descriptor*) ;

__attribute__((used)) static usb_error_t
FUNC_15(struct usb_xfer *VAR_5)
{
 struct xhci_softc *VAR_6 = FUNC_1(VAR_5->xroot->bus);
 struct usb_page_search VAR_7;
 struct usb_device *VAR_8;
 struct xhci_endpoint_ext *VAR_9;
 struct usb_endpoint_descriptor *VAR_10;
 struct usb_page_cache *VAR_11;
 usb_error_t VAR_12;
 usb_stream_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;

 VAR_9 = FUNC_14(VAR_5->xroot->udev,
     VAR_5->endpoint->edesc);

 VAR_8 = VAR_5->xroot->udev;
 VAR_14 = VAR_8->controller_slot_id;

 VAR_11 = &VAR_6->sc_hw.devs[VAR_14].input_pc;

 FUNC_6(VAR_11, 0, &VAR_7);

 VAR_10 = VAR_5->endpoint->edesc;

 VAR_15 = VAR_10->bEndpointAddress;
 VAR_13 = VAR_5->stream_id;

 if ((VAR_10->bmAttributes & VAR_2) == VAR_0)
  VAR_15 |= VAR_1;

 VAR_15 = FUNC_5(VAR_15);

  if (VAR_15 == 0)
  return (VAR_3);

 FUNC_2(VAR_6);



 VAR_12 = FUNC_12(VAR_5);

 if (VAR_12 != 0) {
  FUNC_3(VAR_6);
  return (VAR_12);
 }






 VAR_12 = FUNC_11(VAR_6, 0, VAR_15, VAR_14);

 if (VAR_12 != 0)
  FUNC_0("Could not stop endpoint %u\n", VAR_15);

 VAR_12 = FUNC_9(VAR_6, 0, VAR_15, VAR_14);

 if (VAR_12 != 0)
  FUNC_0("Could not reset endpoint %u\n", VAR_15);

 VAR_12 = FUNC_10(VAR_6,
     (VAR_9->physaddr + (VAR_13 * sizeof(struct xhci_trb) *
     VAR_4)) | FUNC_4(1),
     VAR_13, VAR_15, VAR_14);

 if (VAR_12 != 0)
  FUNC_0("Could not set dequeue ptr for endpoint %u\n", VAR_15);






 FUNC_13(VAR_8, (1U << VAR_15) | 1U, 0);

 if (VAR_15 > 1)
  VAR_12 = FUNC_7(VAR_6, VAR_7.physaddr, 0, VAR_14);
 else
  VAR_12 = FUNC_8(VAR_6, VAR_7.physaddr, VAR_14);

 if (VAR_12 != 0)
  FUNC_0("Could not configure endpoint %u\n", VAR_15);

 FUNC_3(VAR_6);

 return (0);
}
