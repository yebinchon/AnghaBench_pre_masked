
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_9__ {size_t curr_dma_set; } ;
struct usb_xfer {size_t qh_pos; int * td_transfer_last; int * td_transfer_first; TYPE_2__ flags_int; TYPE_4__** qh_start; TYPE_7__* endpoint; TYPE_1__* xroot; } ;
struct usb_pipe_methods {int dummy; } ;
struct TYPE_10__ {int sc_isoc_p_last; int * sc_intr_p_last; int sc_ctrl_p_last; int sc_bulk_p_last; int sc_bus; } ;
typedef TYPE_3__ ohci_softc_t ;
struct TYPE_11__ {int page_cache; } ;
typedef TYPE_4__ ohci_ed_t ;
struct TYPE_12__ {struct usb_pipe_methods* methods; } ;
struct TYPE_8__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,TYPE_7__*,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,int ) ;
 struct usb_pipe_methods const VAR_1 ;
 struct usb_pipe_methods const VAR_2 ;
 struct usb_pipe_methods const VAR_3 ;
 struct usb_pipe_methods const VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 const struct usb_pipe_methods *VAR_7 = VAR_5->endpoint->methods;
 ohci_softc_t *VAR_8 = FUNC_1(VAR_5->xroot->bus);
 ohci_ed_t *VAR_9;

 FUNC_3(&VAR_8->sc_bus, VAR_0);


 FUNC_0(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_5, VAR_5->endpoint, VAR_6);

 VAR_9 = VAR_5->qh_start[VAR_5->flags_int.curr_dma_set];
 if (VAR_9) {
  FUNC_4(VAR_9->page_cache);
 }
 if (VAR_7 == &VAR_1) {
  FUNC_2(VAR_9, VAR_8->sc_bulk_p_last);
 }
 if (VAR_7 == &VAR_2) {
  FUNC_2(VAR_9, VAR_8->sc_ctrl_p_last);
 }
 if (VAR_7 == &VAR_3) {
  FUNC_2(VAR_9, VAR_8->sc_intr_p_last[VAR_5->qh_pos]);
 }
 if (VAR_7 == &VAR_4) {
  FUNC_2(VAR_9, VAR_8->sc_isoc_p_last);
 }
 VAR_5->td_transfer_first = ((void*)0);
 VAR_5->td_transfer_last = ((void*)0);


 FUNC_5(VAR_5, VAR_6);
}
