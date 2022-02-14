
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_udev_msg {struct usb_device* udev; } ;
struct usb_proc_msg {int dummy; } ;
struct usb_device {int bus; int device_mtx; int * ctrl_xfer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_proc_msg *VAR_0)
{
 struct usb_udev_msg *VAR_1 = (void *)VAR_0;
 struct usb_device *VAR_2 = VAR_1->udev;


 FUNC_1(VAR_2->bus);
 FUNC_2(&VAR_2->device_mtx);


 FUNC_4(VAR_2->ctrl_xfer[1]);


 FUNC_3(&VAR_2->device_mtx);
 FUNC_0(VAR_2->bus);
}
