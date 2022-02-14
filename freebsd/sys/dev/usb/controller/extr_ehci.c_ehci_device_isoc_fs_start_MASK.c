
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ can_cancel_immed; } ;
struct usb_xfer {int timeout; TYPE_1__ flags_int; } ;


 int FUNC_0 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_1(struct usb_xfer *VAR_0)
{





 VAR_0->flags_int.can_cancel_immed = 0;


 if (VAR_0->timeout == 0)
  VAR_0->timeout = 500;


 FUNC_0(VAR_0);
}
