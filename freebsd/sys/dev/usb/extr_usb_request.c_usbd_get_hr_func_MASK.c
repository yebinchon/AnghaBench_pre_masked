
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_handle_req_t ;
struct TYPE_4__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_3__* bus; int * parent_hub; TYPE_1__ flags; } ;
struct TYPE_6__ {TYPE_2__* methods; } ;
struct TYPE_5__ {int * roothub_exec; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static usb_handle_req_t *
FUNC_0(struct usb_device *VAR_2)
{

 if (VAR_2->flags.usb_mode == VAR_0)
  return (VAR_1);
 else if (VAR_2->parent_hub == ((void*)0))
  return (VAR_2->bus->methods->roothub_exec);
 else
  return (((void*)0));
}
