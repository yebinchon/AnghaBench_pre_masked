
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_2__ {int usb_mode; } ;
struct usb_device {scalar_t__ device_index; TYPE_1__ flags; int address; int bus; } ;
struct musbotg_softc {scalar_t__ sc_rt_addr; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*,int ,int ,int ,scalar_t__) ;
 struct musbotg_softc* FUNC_1 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_5, struct usb_endpoint_descriptor *VAR_6,
    struct usb_endpoint *VAR_7)
{
 struct musbotg_softc *VAR_8 = FUNC_1(VAR_5->bus);

 FUNC_0(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d (%d)\n",
     VAR_7, VAR_5->address,
     VAR_6->bEndpointAddress, VAR_5->flags.usb_mode,
     VAR_8->sc_rt_addr);

 if (VAR_5->device_index != VAR_8->sc_rt_addr) {
  switch (VAR_6->bmAttributes & VAR_0) {
  case 130:
   VAR_7->methods = &VAR_2;
   break;
  case 129:
   VAR_7->methods = &VAR_3;
   break;
  case 128:
   VAR_7->methods = &VAR_4;
   break;
  case 131:
   VAR_7->methods = &VAR_1;
   break;
  default:

   break;
  }
 }
}
