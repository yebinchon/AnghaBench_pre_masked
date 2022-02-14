
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
 int VAR_1 ;
 int FUNC_2 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct usb_xfer *VAR_3 = VAR_2;

 FUNC_0(1, "xfer=%p\n", VAR_3);

 FUNC_1(VAR_3->xroot->bus, VAR_0);


 FUNC_2(VAR_3, VAR_1);
}
