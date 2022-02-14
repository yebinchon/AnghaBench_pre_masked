
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_xfer {TYPE_4__* endpoint; TYPE_1__* xroot; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {int address; TYPE_2__ ddesc; } ;
struct TYPE_8__ {TYPE_3__* edesc; } ;
struct TYPE_7__ {int bEndpointAddress; int bmAttributes; } ;
struct TYPE_5__ {struct usb_device* udev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct usb_xfer*,...) ;

void
FUNC_2(struct usb_xfer *VAR_0)
{
 struct usb_device *VAR_1;
 FUNC_1("usb_dump_xfer: xfer=%p\n", VAR_0);
 if (VAR_0 == ((void*)0)) {
  return;
 }
 if (VAR_0->endpoint == ((void*)0)) {
  FUNC_1("xfer %p: endpoint=NULL\n",
      VAR_0);
  return;
 }
 VAR_1 = VAR_0->xroot->udev;
 FUNC_1("xfer %p: udev=%p vid=0x%04x pid=0x%04x addr=%d "
     "endpoint=%p ep=0x%02x attr=0x%02x\n",
     VAR_0, VAR_1,
     FUNC_0(VAR_1->ddesc.idVendor),
     FUNC_0(VAR_1->ddesc.idProduct),
     VAR_1->address, VAR_0->endpoint,
     VAR_0->endpoint->edesc->bEndpointAddress,
     VAR_0->endpoint->edesc->bmAttributes);
}
