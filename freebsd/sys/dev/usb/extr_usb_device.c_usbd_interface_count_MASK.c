
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_device {scalar_t__ ifaces_max; int * cdesc; } ;


 int VAR_0 ;
 int VAR_1 ;

usb_error_t
FUNC_0(struct usb_device *VAR_2, uint8_t *VAR_3)
{
 if (VAR_2->cdesc == ((void*)0)) {
  *VAR_3 = 0;
  return (VAR_1);
 }
 *VAR_3 = VAR_2->ifaces_max;
 return (VAR_0);
}
