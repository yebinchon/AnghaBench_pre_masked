
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_2__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_1__ desc; struct usb_host_endpoint* endpoint; } ;
struct usb_host_endpoint {int dummy; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (struct usb_device*,struct usb_host_endpoint*,int ) ;

__attribute__((used)) static void
FUNC_1(struct usb_device *VAR_0, struct usb_interface *VAR_1)
{
 struct usb_host_interface *VAR_2;
 struct usb_host_interface *VAR_3;
 struct usb_host_endpoint *VAR_4;
 struct usb_host_endpoint *VAR_5;
 int VAR_6;

 VAR_2 = VAR_1->altsetting;
 VAR_3 = VAR_1->altsetting + VAR_1->num_altsetting;
 while (VAR_2 != VAR_3) {
  VAR_4 = VAR_2->endpoint;
  VAR_5 = VAR_2->endpoint + VAR_2->desc.bNumEndpoints;
  while (VAR_4 != VAR_5) {
   VAR_6 = FUNC_0(VAR_0, VAR_4, 0);
   VAR_4++;
  }
  VAR_2++;
 }
}
