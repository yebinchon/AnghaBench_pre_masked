
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_proc_msg {int dummy; } ;
struct usb_bus_msg {struct usb_bus* bus; } ;
struct usb_bus {scalar_t__ no_explore; int * bdev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_proc_msg*) ;
 int FUNC_2 (struct usb_proc_msg*) ;

__attribute__((used)) static void
FUNC_3(struct usb_proc_msg *VAR_0)
{
 struct usb_bus *VAR_1;

 FUNC_0("\n");

 VAR_1 = ((struct usb_bus_msg *)VAR_0)->bus;

 if (VAR_1->bdev == ((void*)0) || VAR_1->no_explore != 0)
  return;


 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
}
