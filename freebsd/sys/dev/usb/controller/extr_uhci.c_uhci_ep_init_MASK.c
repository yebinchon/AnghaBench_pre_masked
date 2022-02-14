
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sc_addr; } ;
typedef TYPE_2__ uhci_softc_t ;
struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_4__ {int usb_mode; } ;
struct usb_device {scalar_t__ device_index; int speed; TYPE_1__ flags; int address; int bus; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*,int ,int ,int ,scalar_t__) ;




 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_6, struct usb_endpoint_descriptor *VAR_7,
    struct usb_endpoint *VAR_8)
{
 uhci_softc_t *VAR_9 = FUNC_1(VAR_6->bus);

 FUNC_0(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d (%d)\n",
     VAR_8, VAR_6->address,
     VAR_7->bEndpointAddress, VAR_6->flags.usb_mode,
     VAR_9->sc_addr);

 if (VAR_6->device_index != VAR_9->sc_addr) {
  switch (VAR_7->bmAttributes & VAR_0) {
  case 130:
   VAR_8->methods = &VAR_3;
   break;
  case 129:
   VAR_8->methods = &VAR_4;
   break;
  case 128:
   if (VAR_6->speed == VAR_1) {
    VAR_8->methods = &VAR_5;
   }
   break;
  case 131:
   VAR_8->methods = &VAR_2;
   break;
  default:

   break;
  }
 }
}
