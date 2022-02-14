
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_xfer {TYPE_1__ flags_int; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_xfer*,int ) ;
 int FUNC_1 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 if (VAR_1->flags_int.usb_mode == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
