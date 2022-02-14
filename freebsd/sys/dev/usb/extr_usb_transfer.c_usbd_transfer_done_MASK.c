
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_xfer_queue {struct usb_xfer* curr; } ;
struct usb_xfer_root {TYPE_6__* bus; struct usb_xfer_queue dma_q; int xfer_mtx; } ;
struct TYPE_7__ {scalar_t__ control_act; int transferring; } ;
struct usb_xfer {scalar_t__ error; TYPE_5__* endpoint; int timeout_handle; TYPE_1__ flags_int; struct usb_xfer_root* xroot; } ;
struct TYPE_9__ {int * uds_requests; } ;
struct TYPE_8__ {int * uds_requests; } ;
struct TYPE_12__ {TYPE_3__ stats_ok; TYPE_2__ stats_err; } ;
struct TYPE_11__ {TYPE_4__* edesc; } ;
struct TYPE_10__ {size_t bmAttributes; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_xfer_queue*,int *) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct usb_xfer*) ;

void
FUNC_8(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct usb_xfer_root *VAR_5 = VAR_3->xroot;

 FUNC_1(VAR_5->bus, VAR_0);

 FUNC_0("err=%s\n", FUNC_6(VAR_4));





 if (!VAR_3->flags_int.transferring) {
  FUNC_0("not transferring\n");

  VAR_3->flags_int.control_act = 0;
  return;
 }

 if (VAR_3->error == VAR_2)
  VAR_3->error = VAR_4;


 FUNC_3(&VAR_3->timeout_handle);






 FUNC_7(VAR_3);
 if (VAR_3->error) {
  VAR_5->bus->stats_err.uds_requests
      [VAR_3->endpoint->edesc->bmAttributes & VAR_1]++;
 } else {
  VAR_5->bus->stats_ok.uds_requests
      [VAR_3->endpoint->edesc->bmAttributes & VAR_1]++;
 }


 FUNC_5(VAR_3);
}
