
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_10__ {size_t curr_dma_set; } ;
struct usb_xfer {size_t qh_pos; int * td_transfer_last; int * td_transfer_first; TYPE_2__ flags_int; int * qh_start; TYPE_8__* endpoint; TYPE_1__* xroot; } ;
struct usb_pipe_methods {int dummy; } ;
struct TYPE_11__ {int * sc_intr_p_last; int sc_async_p_last; int sc_bus; } ;
typedef TYPE_3__ ehci_softc_t ;
struct TYPE_12__ {int toggle_next; struct usb_pipe_methods* methods; } ;
struct TYPE_9__ {int bus; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,struct usb_xfer*,TYPE_8__*,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 struct usb_pipe_methods const VAR_1 ;
 struct usb_pipe_methods const VAR_2 ;
 struct usb_pipe_methods const VAR_3 ;
 struct usb_pipe_methods const VAR_4 ;
 struct usb_pipe_methods const VAR_5 ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,struct usb_xfer*) ;
 int FUNC_7 (TYPE_3__*,struct usb_xfer*) ;
 int VAR_6 ;
 int FUNC_8 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_7, usb_error_t VAR_8)
{
 const struct usb_pipe_methods *VAR_9 = VAR_7->endpoint->methods;
 ehci_softc_t *VAR_10 = FUNC_2(VAR_7->xroot->bus);

 FUNC_4(&VAR_10->sc_bus, VAR_0);

 FUNC_1(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_7, VAR_7->endpoint, VAR_8);

 if ((VAR_9 == &VAR_1) ||
     (VAR_9 == &VAR_2)) {
  FUNC_3(VAR_7->qh_start[VAR_7->flags_int.curr_dma_set],
      VAR_10->sc_async_p_last);
 }
 if (VAR_9 == &VAR_3) {
  FUNC_3(VAR_7->qh_start[VAR_7->flags_int.curr_dma_set],
      VAR_10->sc_intr_p_last[VAR_7->qh_pos]);
 }




 if (VAR_7->td_transfer_first &&
     VAR_7->td_transfer_last) {
  if (VAR_9 == &VAR_4) {
   FUNC_6(VAR_10, VAR_7);
  }
  if (VAR_9 == &VAR_5) {
   FUNC_7(VAR_10, VAR_7);
  }
  VAR_7->td_transfer_first = ((void*)0);
  VAR_7->td_transfer_last = ((void*)0);
 }

 FUNC_8(VAR_7, VAR_8);
}
