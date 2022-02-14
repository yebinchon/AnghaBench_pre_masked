
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stall_pipe; } ;
struct usb_xfer {TYPE_2__* xroot; TYPE_1__ flags; } ;
struct TYPE_4__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_xfer*,int ) ;

void
FUNC_3(struct usb_xfer *VAR_1)
{
 if (VAR_1 == ((void*)0)) {

  return;
 }
 FUNC_2(VAR_1, VAR_0);


 FUNC_0(VAR_1->xroot->bus);

 VAR_1->flags.stall_pipe = 0;

 FUNC_1(VAR_1->xroot->bus);
}
