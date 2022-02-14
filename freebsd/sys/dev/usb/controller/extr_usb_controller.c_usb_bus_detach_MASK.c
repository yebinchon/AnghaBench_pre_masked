
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_proc_msg {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_bus_msg {struct usb_bus* bus; } ;
struct usb_bus {int * bdev; struct usb_device** devices; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (struct usb_bus*) ;
 size_t VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_proc_msg *VAR_2)
{
 struct usb_bus *VAR_3;
 struct usb_device *VAR_4;
 device_t VAR_5;

 VAR_3 = ((struct usb_bus_msg *)VAR_2)->bus;
 VAR_4 = VAR_3->devices[VAR_1];
 VAR_5 = VAR_3->bdev;

 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(VAR_3);


 FUNC_4(&VAR_0);
 FUNC_2(VAR_5);
 FUNC_5(&VAR_0);




 FUNC_6(VAR_4, 0);

 FUNC_0(VAR_3);

 VAR_3->bdev = ((void*)0);
}
