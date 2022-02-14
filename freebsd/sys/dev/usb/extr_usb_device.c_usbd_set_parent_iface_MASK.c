
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_interface {int parent_iface_index; } ;
struct usb_device {int dummy; } ;


 struct usb_interface* FUNC_0 (struct usb_device*,int ) ;

void
FUNC_1(struct usb_device *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2)
{
 struct usb_interface *VAR_3;

 if (VAR_0 == ((void*)0)) {

  return;
 }
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 != ((void*)0))
  VAR_3->parent_iface_index = VAR_2;
}
