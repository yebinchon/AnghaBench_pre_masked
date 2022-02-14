
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
struct usb_device_id {int driver_info; } ;
struct usb_attach_arg {int driver_info; int info; } ;


 int VAR_0 ;
 struct usb_device_id* FUNC_0 (struct usb_device_id const*,int ,int *) ;

int
FUNC_1(const struct usb_device_id *VAR_1, usb_size_t VAR_2,
    struct usb_attach_arg *VAR_3)
{
 VAR_1 = FUNC_0(VAR_1, VAR_2, &VAR_3->info);
 if (VAR_1) {

  VAR_3->driver_info = VAR_1->driver_info;
  return (0);
 }
 return (VAR_0);
}
