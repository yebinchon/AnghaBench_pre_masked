
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_endpoint_ext {int trb_halted; scalar_t__ trb_running; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_2__ {int usb_mode; } ;
struct usb_device {int bus; int * parent_hub; TYPE_1__ flags; int address; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct xhci_endpoint_ext* FUNC_3 (struct usb_device*,struct usb_endpoint_descriptor*) ;

__attribute__((used)) static void
FUNC_4(struct usb_device *VAR_1, struct usb_endpoint_descriptor *VAR_2,
    struct usb_endpoint *VAR_3)
{
 struct xhci_endpoint_ext *VAR_4;

 FUNC_0(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d\n",
     VAR_3, VAR_1->address, VAR_2->bEndpointAddress, VAR_1->flags.usb_mode);

 if (VAR_1->parent_hub == ((void*)0)) {

  return;
 }

 VAR_3->methods = &VAR_0;

 VAR_4 = FUNC_3(VAR_1, VAR_2);

 FUNC_1(VAR_1->bus);
 VAR_4->trb_halted = 1;
 VAR_4->trb_running = 0;
 FUNC_2(VAR_1->bus);
}
