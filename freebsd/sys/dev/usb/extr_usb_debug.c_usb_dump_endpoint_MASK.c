
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint {int isoc_next; int toggle_next; TYPE_1__* edesc; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct usb_endpoint*) ;

void
FUNC_2(struct usb_endpoint *VAR_0)
{
 if (VAR_0) {
  FUNC_0("usb_dump_endpoint: endpoint=%p", VAR_0);

  FUNC_0(" edesc=%p isoc_next=%d toggle_next=%d",
      VAR_0->edesc, VAR_0->isoc_next, VAR_0->toggle_next);

  if (VAR_0->edesc) {
   FUNC_0(" bEndpointAddress=0x%02x",
       VAR_0->edesc->bEndpointAddress);
  }
  FUNC_0("\n");
  FUNC_1(VAR_0);
 } else {
  FUNC_0("usb_dump_endpoint: endpoint=NULL\n");
 }
}
