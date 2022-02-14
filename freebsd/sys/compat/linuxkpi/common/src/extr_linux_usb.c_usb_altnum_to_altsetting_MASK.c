
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_interface {scalar_t__ num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;



struct usb_host_interface *
FUNC_0(const struct usb_interface *VAR_0, uint8_t VAR_1)
{
 if (VAR_1 >= VAR_0->num_altsetting) {
  return (((void*)0));
 }
 return (VAR_0->altsetting + VAR_1);
}
