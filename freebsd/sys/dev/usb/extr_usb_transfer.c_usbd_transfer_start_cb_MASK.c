
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int can_cancel_immed; } ;
struct usb_xfer {scalar_t__ error; TYPE_3__ flags_int; TYPE_2__* xroot; struct usb_endpoint* endpoint; } ;
struct usb_endpoint {TYPE_1__* methods; } ;
struct TYPE_5__ {int bus; } ;
struct TYPE_4__ {int (* start ) (struct usb_xfer*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct usb_xfer *VAR_3 = VAR_2;
 struct usb_endpoint *VAR_4 = VAR_3->endpoint;

 FUNC_1(VAR_3->xroot->bus, VAR_0);

 FUNC_0("start\n");






 VAR_3->flags_int.can_cancel_immed = 1;


 if (VAR_3->error == 0)
  (VAR_4->methods->start) (VAR_3);


 if (VAR_3->error) {

  FUNC_3(VAR_3, 0);
 }
}
