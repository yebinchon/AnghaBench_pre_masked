
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bConfigIndex; scalar_t__ bDeviceClass; } ;
struct usb_attach_arg {scalar_t__ usb_mode; TYPE_1__ info; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct usb_attach_arg* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_4)
{
 struct usb_attach_arg *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->usb_mode != VAR_3)
  return (VAR_1);





 if (VAR_5->info.bConfigIndex == 0 &&
     VAR_5->info.bDeviceClass == VAR_2)
  return (VAR_0);

 return (VAR_1);
}
