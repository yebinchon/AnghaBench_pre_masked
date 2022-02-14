
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct TYPE_4__ {scalar_t__ control_act; } ;
struct usb_xfer {struct octusb_td** td_start; TYPE_2__ flags_int; int endpoint; TYPE_1__* xroot; } ;
struct octusb_td {int dummy; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct octusb_td*) ;
 int FUNC_3 (struct usb_xfer*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 FUNC_1(VAR_1->xroot->bus, VAR_0);

 FUNC_0(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_1, VAR_1->endpoint, VAR_2);






 if ((VAR_1->flags_int.control_act == 0) || (VAR_2 != 0)) {
  struct octusb_td *VAR_3;

  VAR_3 = VAR_1->td_start[0];

  FUNC_2(VAR_3);
 }

 FUNC_3(VAR_1, VAR_2);
}
