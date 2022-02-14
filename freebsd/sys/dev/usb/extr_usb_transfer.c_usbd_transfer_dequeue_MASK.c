
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer_queue {int head; } ;
struct usb_xfer {struct usb_xfer_queue* wait_queue; } ;


 int FUNC_0 (int *,struct usb_xfer*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct usb_xfer *VAR_1)
{
 struct usb_xfer_queue *VAR_2;

 VAR_2 = VAR_1->wait_queue;
 if (VAR_2) {
  FUNC_0(&VAR_2->head, VAR_1, VAR_0);
  VAR_1->wait_queue = ((void*)0);
 }
}
