
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_temp_device_desc {int dummy; } ;
struct usb_device {TYPE_1__* usb_template_ptr; } ;
struct TYPE_2__ {struct usb_temp_device_desc const* tdd; } ;



__attribute__((used)) static const struct usb_temp_device_desc *
FUNC_0(struct usb_device *VAR_0)
{
 if (VAR_0->usb_template_ptr == ((void*)0)) {
  return (((void*)0));
 }
 return (VAR_0->usb_template_ptr->tdd);
}
