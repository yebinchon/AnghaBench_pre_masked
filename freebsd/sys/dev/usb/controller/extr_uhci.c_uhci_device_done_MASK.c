
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int usb_error_t ;
struct TYPE_15__ {int * sc_intr_p_last; int sc_fs_ctl_p_last; int sc_ls_ctl_p_last; int sc_bulk_p_last; int sc_bus; } ;
typedef TYPE_4__ uhci_softc_t ;
struct TYPE_16__ {int page_cache; } ;
typedef TYPE_5__ uhci_qh_t ;
struct TYPE_12__ {size_t curr_dma_set; scalar_t__ bandwidth_reclaimed; } ;
struct usb_xfer {size_t qh_pos; int * td_transfer_last; int * td_transfer_first; TYPE_3__* xroot; TYPE_1__ flags_int; TYPE_5__** qh_start; TYPE_10__* endpoint; } ;
struct usb_pipe_methods {int dummy; } ;
struct TYPE_14__ {TYPE_2__* udev; int bus; } ;
struct TYPE_13__ {scalar_t__ speed; } ;
struct TYPE_11__ {struct usb_pipe_methods* methods; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,TYPE_10__*,int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_1 ;
 struct usb_pipe_methods const VAR_2 ;
 struct usb_pipe_methods const VAR_3 ;
 struct usb_pipe_methods const VAR_4 ;
 struct usb_pipe_methods const VAR_5 ;
 int FUNC_4 (TYPE_4__*,struct usb_xfer*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_8(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 const struct usb_pipe_methods *VAR_8 = VAR_6->endpoint->methods;
 uhci_softc_t *VAR_9 = FUNC_1(VAR_6->xroot->bus);
 uhci_qh_t *VAR_10;

 FUNC_3(&VAR_9->sc_bus, VAR_0);

 FUNC_0(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_6, VAR_6->endpoint, VAR_7);

 VAR_10 = VAR_6->qh_start[VAR_6->flags_int.curr_dma_set];
 if (VAR_10) {
  FUNC_6(VAR_10->page_cache);
 }
 if (VAR_6->flags_int.bandwidth_reclaimed) {
  VAR_6->flags_int.bandwidth_reclaimed = 0;
  FUNC_5(VAR_9);
 }
 if (VAR_8 == &VAR_2) {
  FUNC_2(VAR_10, VAR_9->sc_bulk_p_last);
 }
 if (VAR_8 == &VAR_3) {
  if (VAR_6->xroot->udev->speed == VAR_1) {
   FUNC_2(VAR_10, VAR_9->sc_ls_ctl_p_last);
  } else {
   FUNC_2(VAR_10, VAR_9->sc_fs_ctl_p_last);
  }
 }
 if (VAR_8 == &VAR_4) {
  FUNC_2(VAR_10, VAR_9->sc_intr_p_last[VAR_6->qh_pos]);
 }




 if (VAR_6->td_transfer_first &&
     VAR_6->td_transfer_last) {
  if (VAR_8 == &VAR_5) {
   FUNC_4(VAR_9, VAR_6);
  }
  VAR_6->td_transfer_first = ((void*)0);
  VAR_6->td_transfer_last = ((void*)0);
 }

 FUNC_7(VAR_6, VAR_7);
}
