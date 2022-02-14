
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint {scalar_t__ toggle_next; } ;
struct usb_device {int bus; } ;


 int FUNC_0 (int,char*,struct usb_device*,struct usb_endpoint*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*,struct usb_endpoint*) ;

void
FUNC_4(struct usb_device *VAR_0, struct usb_endpoint *VAR_1)
{
 FUNC_0(5, "udev=%p endpoint=%p\n", VAR_0, VAR_1);

 FUNC_1(VAR_0->bus);
 VAR_1->toggle_next = 0;

 FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_0->bus);
}
