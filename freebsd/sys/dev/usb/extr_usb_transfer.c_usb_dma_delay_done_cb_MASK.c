
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_xfer {TYPE_1__* xroot; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_xfer*,int ) ;

void
FUNC_3(struct usb_xfer *VAR_1)
{
 FUNC_1(VAR_1->xroot->bus, VAR_0);

 FUNC_0(3, "Completed %p\n", VAR_1);


 FUNC_2(VAR_1, 0);
}
