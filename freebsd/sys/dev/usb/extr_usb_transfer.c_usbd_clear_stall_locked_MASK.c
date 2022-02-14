
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_endpoint {int * methods; } ;
struct TYPE_4__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_3__* bus; int * parent_hub; TYPE_1__ flags; } ;
struct TYPE_6__ {TYPE_2__* methods; } ;
struct TYPE_5__ {int (* clear_stall ) (struct usb_device*,struct usb_endpoint*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct usb_device*,struct usb_endpoint*) ;

void
FUNC_2(struct usb_device *VAR_2, struct usb_endpoint *VAR_3)
{
 FUNC_0(VAR_2->bus, VAR_0);


 if (VAR_2->flags.usb_mode == VAR_1 &&
     VAR_2->parent_hub != ((void*)0) &&
     VAR_2->bus->methods->clear_stall != ((void*)0) &&
     VAR_3->methods != ((void*)0)) {
  (VAR_2->bus->methods->clear_stall) (VAR_2, VAR_3);
 }
}
