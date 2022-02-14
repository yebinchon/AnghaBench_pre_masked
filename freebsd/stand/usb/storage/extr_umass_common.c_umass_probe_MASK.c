
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_attach_arg {scalar_t__ usb_mode; TYPE_1__ info; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5)
{
 struct usb_attach_arg *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->usb_mode != VAR_4 ||
     VAR_6->info.bInterfaceClass != VAR_1 ||
     VAR_6->info.bInterfaceSubClass != VAR_3 ||
     VAR_6->info.bInterfaceProtocol != VAR_2 ||
     FUNC_1(VAR_5) != 0)
  return (VAR_0);
 return (0);
}
