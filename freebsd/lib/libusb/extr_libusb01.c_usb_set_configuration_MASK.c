
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_dev_handle ;
typedef int uint8_t ;
struct TYPE_3__ {int bNumConfigurations; } ;
struct usb_device {TYPE_2__* config; TYPE_1__ descriptor; } ;
struct TYPE_4__ {int bConfigurationValue; } ;


 int FUNC_0 (void*,int) ;
 struct usb_device* FUNC_1 (int *) ;

int
FUNC_2(usb_dev_handle * VAR_0, int VAR_1)
{
 struct usb_device *VAR_2;
 int VAR_3;
 uint8_t VAR_4;






 if (VAR_1 == 0) {

  VAR_4 = 255;
 } else {

  VAR_2 = FUNC_1(VAR_0);


  if (VAR_2->config == ((void*)0)) {
   return (-1);
  }
  for (VAR_4 = 0;; VAR_4++) {
   if (VAR_4 == VAR_2->descriptor.bNumConfigurations) {

    return (-1);
   }
   if ((VAR_2->config + VAR_4)->bConfigurationValue ==
       VAR_1) {
    break;
   }
  }
 }

 VAR_3 = FUNC_0((void *)VAR_0, VAR_4);

 if (VAR_3)
  return (-1);

 return (0);
}
