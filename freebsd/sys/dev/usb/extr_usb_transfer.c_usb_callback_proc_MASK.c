
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr; } ;
struct usb_xfer_root {int xfer_mtx; TYPE_1__ done_q; int bus; } ;
struct usb_proc_msg {int dummy; } ;
struct usb_done_msg {struct usb_xfer_root* xroot; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_proc_msg *VAR_0)
{
 struct usb_done_msg *VAR_1 = (void *)VAR_0;
 struct usb_xfer_root *VAR_2 = VAR_1->xroot;


 FUNC_1(VAR_2->bus);





 FUNC_2(VAR_2->xfer_mtx);
 FUNC_0(VAR_2->bus);


 FUNC_4(&VAR_2->done_q,
     VAR_2->done_q.curr);

 FUNC_3(VAR_2->xfer_mtx);
}
