
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer_queue {struct usb_xfer* curr; } ;
struct usb_xfer_root {int bus; struct usb_xfer_queue done_q; } ;
struct TYPE_2__ {scalar_t__ transferring; } ;
struct usb_xfer {struct usb_xfer_root* xroot; scalar_t__ wait_queue; TYPE_1__ flags_int; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_xfer*,int ) ;

uint8_t
FUNC_3(struct usb_xfer *VAR_1)
{
 struct usb_xfer_root *VAR_2;
 struct usb_xfer_queue *VAR_3;

 if (VAR_1 == ((void*)0)) {

  return (0);
 }
 FUNC_2(VAR_1, VAR_0);

 if (VAR_1->flags_int.transferring) {

  return (1);
 }
 FUNC_0(VAR_1->xroot->bus);
 if (VAR_1->wait_queue) {

  FUNC_1(VAR_1->xroot->bus);
  return (1);
 }
 VAR_2 = VAR_1->xroot;
 VAR_3 = &VAR_2->done_q;

 if (VAR_3->curr == VAR_1) {

  FUNC_1(VAR_1->xroot->bus);
  return (1);
 }

 FUNC_1(VAR_1->xroot->bus);
 return (0);
}
