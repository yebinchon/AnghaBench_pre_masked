
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_interface {scalar_t__ subdev; } ;
struct usb_hub {scalar_t__ nports; scalar_t__ ports; TYPE_1__* hubudev; } ;
struct usb_device {int dummy; } ;
struct hub_result {scalar_t__ portno; struct usb_device* udev; scalar_t__ iface_index; } ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {int bus; } ;


 scalar_t__ VAR_0 ;
 struct usb_device* FUNC_0 (int ,scalar_t__) ;
 struct usb_interface* FUNC_1 (struct usb_device*,scalar_t__) ;

void
FUNC_2(struct usb_hub *VAR_1, device_t VAR_2,
    struct hub_result *VAR_3)
{
 struct usb_interface *VAR_4;
 struct usb_device *VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;

 VAR_6 = VAR_1->nports;
 for (VAR_7 = 0; VAR_7 != VAR_6; VAR_7++) {
  VAR_5 = FUNC_0(VAR_1->hubudev->bus,
      VAR_1->ports + VAR_7);
  if (!VAR_5) {
   continue;
  }
  for (VAR_8 = 0; VAR_8 != VAR_0; VAR_8++) {
   VAR_4 = FUNC_1(VAR_5, VAR_8);
   if (VAR_4 &&
       (VAR_4->subdev == VAR_2)) {
    VAR_3->iface_index = VAR_8;
    VAR_3->udev = VAR_5;
    VAR_3->portno = VAR_7 + 1;
    return;
   }
  }
 }
 VAR_3->iface_index = 0;
 VAR_3->udev = ((void*)0);
 VAR_3->portno = 0;
}
