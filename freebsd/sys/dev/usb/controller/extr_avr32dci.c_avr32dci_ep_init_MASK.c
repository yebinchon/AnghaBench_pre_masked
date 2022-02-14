
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_2__ {int usb_mode; } ;
struct usb_device {scalar_t__ device_index; scalar_t__ speed; TYPE_1__ flags; int address; int bus; } ;
struct avr32dci_softc {scalar_t__ sc_rt_addr; } ;


 struct avr32dci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,struct usb_endpoint*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_6, struct usb_endpoint_descriptor *VAR_7,
    struct usb_endpoint *VAR_8)
{
 struct avr32dci_softc *VAR_9 = FUNC_0(VAR_6->bus);

 FUNC_1(2, "pipe=%p, addr=%d, endpt=%d, mode=%d (%d,%d)\n",
     VAR_8, VAR_6->address,
     VAR_7->bEndpointAddress, VAR_6->flags.usb_mode,
     VAR_9->sc_rt_addr, VAR_6->device_index);

 if (VAR_6->device_index != VAR_9->sc_rt_addr) {

  if ((VAR_6->speed != VAR_2) &&
      (VAR_6->speed != VAR_3)) {

   return;
  }
  if ((VAR_7->bmAttributes & VAR_1) == VAR_0)
   VAR_8->methods = &VAR_4;
  else
   VAR_8->methods = &VAR_5;
 }
}
