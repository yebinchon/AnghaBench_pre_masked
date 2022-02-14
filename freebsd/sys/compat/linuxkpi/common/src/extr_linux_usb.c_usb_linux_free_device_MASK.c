
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int dummy; } ;
struct usb_device {struct usb_host_endpoint* linux_endpoint_start; struct usb_host_endpoint ep0; struct usb_host_endpoint* linux_endpoint_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_host_endpoint*,int ) ;
 int FUNC_1 (struct usb_device*,struct usb_host_endpoint*,int ) ;

void
FUNC_2(struct usb_device *VAR_1)
{
 struct usb_host_endpoint *VAR_2;
 struct usb_host_endpoint *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->linux_endpoint_start;
 VAR_3 = VAR_1->linux_endpoint_end;
 while (VAR_2 != VAR_3) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, 0);
  VAR_2++;
 }
 VAR_4 = FUNC_1(VAR_1, &VAR_1->ep0, 0);
 FUNC_0(VAR_1->linux_endpoint_start, VAR_0);
}
