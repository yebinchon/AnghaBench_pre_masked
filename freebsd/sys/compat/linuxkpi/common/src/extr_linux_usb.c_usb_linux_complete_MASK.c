
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int dummy; } ;
struct urb {int (* complete ) (struct urb*) ;} ;


 int FUNC_0 (struct urb*) ;
 struct urb* FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*,int *) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0)
{
 struct urb *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_0, ((void*)0));
 if (VAR_1->complete) {
  (VAR_1->complete) (VAR_1);
 }
}
