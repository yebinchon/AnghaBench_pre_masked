
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_endpoint_ext {int trb_halted; scalar_t__ trb_running; } ;
struct usb_endpoint {int edesc; } ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {int bus; int * parent_hub; TYPE_1__ flags; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 struct xhci_endpoint_ext* FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_device *VAR_1, struct usb_endpoint *VAR_2)
{
 struct xhci_endpoint_ext *VAR_3;

 FUNC_0("\n");

 if (VAR_1->flags.usb_mode != VAR_0) {

  return;
 }
 if (VAR_1->parent_hub == ((void*)0)) {

  return;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2->edesc);

 FUNC_1(VAR_1->bus);
 VAR_3->trb_halted = 1;
 VAR_3->trb_running = 0;
 FUNC_2(VAR_1->bus);
}
