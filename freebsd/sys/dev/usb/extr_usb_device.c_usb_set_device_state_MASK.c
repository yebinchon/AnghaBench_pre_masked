
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int state; TYPE_2__* bus; } ;
typedef enum usb_dev_state { ____Placeholder_usb_dev_state } usb_dev_state ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int (* device_state_change ) (struct usb_device*) ;} ;


 int FUNC_0 (char*,struct usb_device*,int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_device*) ;
 int VAR_1 ;
 int FUNC_5 (int) ;

void
FUNC_6(struct usb_device *VAR_2, enum usb_dev_state VAR_3)
{

 FUNC_1(VAR_3 < VAR_0, ("invalid udev state"));

 FUNC_0("udev %p state %s -> %s\n", VAR_2,
     FUNC_5(VAR_2->state), FUNC_5(VAR_3));




 VAR_2->state = VAR_3;



 if (VAR_2->bus->methods->device_state_change != ((void*)0))
  (VAR_2->bus->methods->device_state_change) (VAR_2);
}
