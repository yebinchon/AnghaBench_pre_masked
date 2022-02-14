
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int can_cancel_immed; } ;
struct usb_xfer {size_t stream_id; TYPE_3__* xroot; scalar_t__ error; TYPE_1__ flags_int; struct usb_endpoint* endpoint; } ;
struct usb_endpoint {int * endpoint_q; TYPE_2__* methods; } ;
struct TYPE_6__ {int bus; } ;
struct TYPE_5__ {int (* enter ) (struct usb_xfer*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (int *,struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ) ;

void
FUNC_7(struct usb_xfer *VAR_1)
{
 struct usb_endpoint *VAR_2;

 FUNC_3(VAR_1, VAR_0);

 FUNC_1(VAR_1->xroot->bus);

 VAR_2 = VAR_1->endpoint;

 FUNC_0("enter\n");


 VAR_1->flags_int.can_cancel_immed = 1;


 (VAR_2->methods->enter) (VAR_1);


 if (VAR_1->error) {

  FUNC_6(VAR_1, 0);
  FUNC_2(VAR_1->xroot->bus);
  return;
 }


 FUNC_5(&VAR_2->endpoint_q[VAR_1->stream_id], VAR_1);
 FUNC_2(VAR_1->xroot->bus);
}
