
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct usb_device {TYPE_1__* hub; } ;
struct usb_bus_msg {struct usb_bus* bus; } ;
struct usb_bus {scalar_t__ no_explore; int driver_added_refcount; scalar_t__ do_probe; struct usb_device** devices; } ;
struct TYPE_2__ {int (* explore ) (struct usb_device*) ;} ;


 int FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 int FUNC_4 (struct usb_bus*) ;
 int FUNC_5 (struct usb_bus*) ;
 size_t VAR_0 ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_bus*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_bus*) ;

__attribute__((used)) static void
FUNC_11(struct usb_proc_msg *VAR_1)
{
 struct usb_bus *VAR_2;
 struct usb_device *VAR_3;

 VAR_2 = ((struct usb_bus_msg *)VAR_1)->bus;
 VAR_3 = VAR_2->devices[VAR_0];

 if (VAR_2->no_explore != 0)
  return;

 if (VAR_3 != ((void*)0)) {
  FUNC_5(VAR_2);
  FUNC_7(VAR_3);
  FUNC_2(VAR_2);
 }

 if (VAR_3 != ((void*)0) && VAR_3->hub != ((void*)0)) {

  if (VAR_2->do_probe) {
   VAR_2->do_probe = 0;
   VAR_2->driver_added_refcount++;
  }
  if (VAR_2->driver_added_refcount == 0) {

   VAR_2->driver_added_refcount = 1;
  }
  FUNC_5(VAR_2);
  (VAR_3->hub->explore) (VAR_3);
  FUNC_2(VAR_2);
 }



}
