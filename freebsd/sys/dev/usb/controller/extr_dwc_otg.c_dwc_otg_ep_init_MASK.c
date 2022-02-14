
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int* wMaxPacketSize; int bmAttributes; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {scalar_t__ device_index; scalar_t__ speed; TYPE_1__ flags; int address; int bus; } ;
struct dwc_otg_softc {scalar_t__ sc_rt_addr; } ;


 int FUNC_0 (int,char*,...) ;
 struct dwc_otg_softc* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_7, struct usb_endpoint_descriptor *VAR_8,
    struct usb_endpoint *VAR_9)
{
 struct dwc_otg_softc *VAR_10 = FUNC_1(VAR_7->bus);

 FUNC_0(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d (%d,%d)\n",
     VAR_9, VAR_7->address,
     VAR_8->bEndpointAddress, VAR_7->flags.usb_mode,
     VAR_10->sc_rt_addr, VAR_7->device_index);

 if (VAR_7->device_index != VAR_10->sc_rt_addr) {

  if (VAR_7->flags.usb_mode == VAR_2) {
   if (VAR_7->speed != VAR_3 &&
       VAR_7->speed != VAR_4) {

    return;
   }
  } else {
   if (VAR_7->speed == VAR_4 &&
       (VAR_8->wMaxPacketSize[1] & 0x18) != 0 &&
       (VAR_8->bmAttributes & VAR_1) != VAR_0) {

    FUNC_0(-1, "Non-isochronous high bandwidth "
        "endpoint not supported\n");
    return;
   }
  }
  if ((VAR_8->bmAttributes & VAR_1) == VAR_0)
   VAR_9->methods = &VAR_5;
  else
   VAR_9->methods = &VAR_6;
 }
}
