
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer_queue {scalar_t__ recurse_2; int recurse_1; struct usb_xfer* curr; } ;
struct usb_xfer_root {int * done_m; int done_p; int bus; struct usb_xfer_queue done_q; } ;
struct usb_xfer {struct usb_xfer_root* xroot; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct usb_xfer_queue*,struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_1)
{
 struct usb_xfer_root *VAR_2 = VAR_1->xroot;
 struct usb_xfer_queue *VAR_3 = &VAR_2->done_q;

 FUNC_0(VAR_1->xroot->bus, VAR_0);

 if (VAR_3->curr != VAR_1) {
  FUNC_2(VAR_3, VAR_1);
 }
 if (!VAR_3->recurse_1) {






  (void) FUNC_1(VAR_2->done_p,
      &VAR_2->done_m[0], &VAR_2->done_m[1]);
 } else {

  VAR_3->recurse_2 = 0;
 }
 return;

}
