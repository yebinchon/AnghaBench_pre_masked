
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int draining; scalar_t__ doing_callback; } ;
struct usb_xfer {TYPE_1__* xroot; TYPE_2__ flags_int; } ;
struct TYPE_3__ {int * xfer_mtx; int cv_drain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_xfer*) ;
 int FUNC_1 (struct usb_xfer*,int ) ;
 int FUNC_2 (struct usb_xfer*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int *,char*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*) ;

void
FUNC_7(struct usb_xfer *VAR_4)
{
 FUNC_3(VAR_2 | VAR_3, ((void*)0),
     "usbd_transfer_drain can sleep!");

 if (VAR_4 == ((void*)0)) {

  return;
 }
 if (VAR_4->xroot->xfer_mtx != &VAR_0) {
  FUNC_1(VAR_4, VAR_1);
 }
 FUNC_0(VAR_4);

 FUNC_6(VAR_4);

 while (FUNC_5(VAR_4) ||
     VAR_4->flags_int.doing_callback) {
  VAR_4->flags_int.draining = 1;





  FUNC_4(&VAR_4->xroot->cv_drain, VAR_4->xroot->xfer_mtx);
 }
 FUNC_2(VAR_4);
}
