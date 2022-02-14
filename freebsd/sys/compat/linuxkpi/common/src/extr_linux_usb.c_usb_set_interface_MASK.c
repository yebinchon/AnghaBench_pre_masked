
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_interface {scalar_t__ num_altsetting; scalar_t__ altsetting; scalar_t__ cur_altsetting; int bsd_iface_index; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 struct usb_interface* FUNC_0 (struct usb_device*,scalar_t__) ;
 int FUNC_1 (struct usb_device*,struct usb_interface*) ;
 int FUNC_2 (struct usb_device*,int ,scalar_t__) ;

int
FUNC_3(struct usb_device *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_0(VAR_1, VAR_2);
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return (-VAR_0);
 if (VAR_3 >= VAR_4->num_altsetting)
  return (-VAR_0);
 FUNC_1(VAR_1, VAR_4);
 VAR_5 = -FUNC_2(VAR_1,
     VAR_4->bsd_iface_index, VAR_3);
 if (VAR_5 == 0) {
  VAR_4->cur_altsetting = VAR_4->altsetting + VAR_3;
 }
 return (VAR_5);
}
