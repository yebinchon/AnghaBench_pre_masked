
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; } ;
struct usb_attach_arg {scalar_t__ usb_mode; TYPE_1__ info; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct usb_attach_arg* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
 struct usb_attach_arg *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(11, "\n");

 if (VAR_5->usb_mode != VAR_3)
  return (VAR_0);

 if ((VAR_5->info.bInterfaceClass == VAR_1) &&
     (VAR_5->info.bInterfaceSubClass == VAR_2))
  return (0);

 return (VAR_0);
}
