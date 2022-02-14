
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_5__ {int usb_mode; } ;
struct usb_device {scalar_t__ device_index; scalar_t__ speed; scalar_t__ hs_hub_addr; scalar_t__ hs_port_no; TYPE_2__* parent_hs_hub; TYPE_1__ flags; int address; int bus; } ;
struct TYPE_7__ {scalar_t__ sc_addr; } ;
typedef TYPE_3__ ehci_softc_t ;
struct TYPE_6__ {int * hub; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*,int ,int ,int ,scalar_t__) ;
 TYPE_3__* FUNC_1 (int ) ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_8, struct usb_endpoint_descriptor *VAR_9,
    struct usb_endpoint *VAR_10)
{
 ehci_softc_t *VAR_11 = FUNC_1(VAR_8->bus);

 FUNC_0(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d (%d)\n",
     VAR_10, VAR_8->address,
     VAR_9->bEndpointAddress, VAR_8->flags.usb_mode,
     VAR_11->sc_addr);

 if (VAR_8->device_index != VAR_11->sc_addr) {

  if ((VAR_8->speed != VAR_2) &&
      ((VAR_8->hs_hub_addr == 0) ||
      (VAR_8->hs_port_no == 0) ||
      (VAR_8->parent_hs_hub == ((void*)0)) ||
      (VAR_8->parent_hs_hub->hub == ((void*)0)))) {

   goto done;
  }
  switch (VAR_9->bmAttributes & VAR_0) {
  case 130:
   VAR_10->methods = &VAR_4;
   break;
  case 129:
   VAR_10->methods = &VAR_5;
   break;
  case 128:
   if (VAR_8->speed == VAR_2) {
    VAR_10->methods = &VAR_7;
   } else if (VAR_8->speed == VAR_1) {
    VAR_10->methods = &VAR_6;
   }
   break;
  case 131:
   VAR_10->methods = &VAR_3;
   break;
  default:

   break;
  }
 }
done:
 return;
}
