
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct xhci_endpoint_ext {scalar_t__ trb_running; int trb_halted; int ** xfer; int * trb_used; } ;
struct TYPE_6__ {scalar_t__ bandwidth_reclaimed; } ;
struct usb_xfer {size_t stream_id; size_t qh_pos; TYPE_2__* endpoint; TYPE_1__* xroot; TYPE_3__ flags_int; } ;
struct TYPE_5__ {int edesc; } ;
struct TYPE_4__ {int udev; } ;


 struct xhci_endpoint_ext* FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct usb_xfer *VAR_0, usb_error_t VAR_1)
{
 struct xhci_endpoint_ext *VAR_2;

 if (VAR_0->flags_int.bandwidth_reclaimed) {
  VAR_0->flags_int.bandwidth_reclaimed = 0;

  VAR_2 = FUNC_0(VAR_0->xroot->udev,
      VAR_0->endpoint->edesc);

  VAR_2->trb_used[VAR_0->stream_id]--;

  VAR_2->xfer[VAR_0->qh_pos] = ((void*)0);

  if (VAR_1 && VAR_2->trb_running != 0) {
   VAR_2->trb_halted = 1;
   VAR_2->trb_running = 0;
  }
 }
}
