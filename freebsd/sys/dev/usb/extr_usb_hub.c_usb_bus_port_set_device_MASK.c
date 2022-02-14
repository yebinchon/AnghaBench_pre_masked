
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct usb_port {size_t device_index; } ;
struct usb_device {int dummy; } ;
struct usb_bus {struct usb_device** devices; } ;


 int FUNC_0 (int,char*,struct usb_bus*,size_t,struct usb_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void
FUNC_3(struct usb_bus *VAR_1, struct usb_port *VAR_2,
    struct usb_device *VAR_3, uint8_t VAR_4)
{
 if (VAR_1 == ((void*)0)) {

  return;
 }




 if (VAR_2) {
  if (VAR_3) {
   VAR_2->device_index = VAR_4;
  } else {
   VAR_4 = VAR_2->device_index;
   VAR_2->device_index = 0;
  }
 }



 if (VAR_4 != 0) {



  VAR_1->devices[VAR_4] = VAR_3;



 }



 FUNC_0(2, "bus %p devices[%u] = %p\n", VAR_1, VAR_4, VAR_3);
}
