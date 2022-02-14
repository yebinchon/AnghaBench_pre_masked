
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {size_t bNumConfigurations; } ;
struct usb_device {struct usb_config_descriptor* config; TYPE_1__ descriptor; } ;
struct usb_config_descriptor {struct usb_config_descriptor* interface; } ;


 int FUNC_0 (struct usb_config_descriptor*) ;

void
FUNC_1(struct usb_device *VAR_0)
{
 uint8_t VAR_1;

 if (VAR_0->config == ((void*)0)) {
  return;
 }
 for (VAR_1 = 0; VAR_1 != VAR_0->descriptor.bNumConfigurations; VAR_1++) {
  struct usb_config_descriptor *VAR_2 = &VAR_0->config[VAR_1];

  if (VAR_2->interface != ((void*)0)) {
   FUNC_0(VAR_2->interface);
   VAR_2->interface = ((void*)0);
  }
 }

 FUNC_0(VAR_0->config);
 VAR_0->config = ((void*)0);
 return;
}
