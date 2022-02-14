
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ control_xfr; scalar_t__ control_hdr; scalar_t__ usb_mode; } ;
struct usb_xfer {TYPE_1__ flags_int; } ;


 int FUNC_0 (struct usb_xfer*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct usb_xfer *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 if ((VAR_2 == 0) && (VAR_1->flags_int.control_xfr != 0) &&
     (VAR_1->flags_int.control_hdr != 0)) {

  if (VAR_1->flags_int.usb_mode == VAR_0) {

   VAR_3 = 1;
  } else {

   VAR_3 = 0;
  }
 } else {
  VAR_3 = FUNC_0(VAR_1);
 }
 return (VAR_3);
}
