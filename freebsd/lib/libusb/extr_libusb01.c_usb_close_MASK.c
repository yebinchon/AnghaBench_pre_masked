
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_dev_handle ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int devices; } ;


 int FUNC_0 (int ,struct usb_device*) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int * VAR_0 ;
 struct usb_device* FUNC_5 (int *) ;
 TYPE_1__ VAR_1 ;

int
FUNC_6(usb_dev_handle * VAR_2)
{
 struct usb_device *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3((void *)VAR_2);

 if (VAR_4)
  return (-1);

 if (VAR_0 != ((void*)0)) {




  FUNC_2(VAR_0, (void *)VAR_2);
 } else {




  VAR_3 = FUNC_5(VAR_2);
  FUNC_4((void *)VAR_2);
  FUNC_0(VAR_1.devices, VAR_3);
  FUNC_1(VAR_3);
 }
 return (0);
}
