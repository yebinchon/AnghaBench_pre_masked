
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_xfer {TYPE_1__* endpoint; } ;
struct TYPE_2__ {int is_stalled; } ;



int
FUNC_0(struct usb_xfer *VAR_0)
{
 return (VAR_0->endpoint->is_stalled);
}
