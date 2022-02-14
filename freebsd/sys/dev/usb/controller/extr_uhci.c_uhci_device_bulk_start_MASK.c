
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int td_self; } ;
typedef TYPE_5__ uhci_td_t ;
struct TYPE_17__ {int sc_bulk_p_last; } ;
typedef TYPE_6__ uhci_softc_t ;
struct TYPE_18__ {int page_cache; int qh_e_next; TYPE_5__* e_next; } ;
typedef TYPE_7__ uhci_qh_t ;
struct TYPE_14__ {size_t curr_dma_set; int bandwidth_reclaimed; } ;
struct usb_xfer {TYPE_3__ flags_int; TYPE_4__* xroot; TYPE_7__** qh_start; } ;
struct TYPE_15__ {TYPE_2__* udev; int bus; } ;
struct TYPE_12__ {scalar_t__ self_suspended; } ;
struct TYPE_13__ {TYPE_1__ flags; } ;


 int FUNC_0 (TYPE_7__*,int ) ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_5__* FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_0)
{
 uhci_softc_t *VAR_1 = FUNC_1(VAR_0->xroot->bus);
 uhci_td_t *VAR_2;
 uhci_qh_t *VAR_3;


 VAR_2 = FUNC_3(VAR_0);


 VAR_3 = VAR_0->qh_start[VAR_0->flags_int.curr_dma_set];

 VAR_3->e_next = VAR_2;
 VAR_3->qh_e_next = VAR_2->td_self;

 if (VAR_0->xroot->udev->flags.self_suspended == 0) {
  FUNC_0(VAR_3, VAR_1->sc_bulk_p_last);
  FUNC_2(VAR_1);
  VAR_0->flags_int.bandwidth_reclaimed = 1;
 } else {
  FUNC_5(VAR_3->page_cache);
 }


 FUNC_4(VAR_0);
}
