
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int td_self; } ;
typedef TYPE_5__ uhci_td_t ;
struct TYPE_16__ {int sc_fs_ctl_p_last; int sc_ls_ctl_p_last; } ;
typedef TYPE_6__ uhci_softc_t ;
struct TYPE_17__ {int page_cache; int qh_e_next; TYPE_5__* e_next; } ;
typedef TYPE_7__ uhci_qh_t ;
struct TYPE_11__ {size_t curr_dma_set; } ;
struct usb_xfer {TYPE_4__* xroot; TYPE_1__ flags_int; TYPE_7__** qh_start; } ;
struct TYPE_14__ {TYPE_3__* udev; int bus; } ;
struct TYPE_12__ {scalar_t__ self_suspended; } ;
struct TYPE_13__ {scalar_t__ speed; TYPE_2__ flags; } ;


 int FUNC_0 (TYPE_7__*,int ) ;
 TYPE_6__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_2 (struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_1)
{
 uhci_softc_t *VAR_2 = FUNC_1(VAR_1->xroot->bus);
 uhci_qh_t *VAR_3;
 uhci_td_t *VAR_4;


 VAR_4 = FUNC_2(VAR_1);


 VAR_3 = VAR_1->qh_start[VAR_1->flags_int.curr_dma_set];

 VAR_3->e_next = VAR_4;
 VAR_3->qh_e_next = VAR_4->td_self;





 if (VAR_1->xroot->udev->flags.self_suspended == 0) {
  if (VAR_1->xroot->udev->speed == VAR_0) {
   FUNC_0(VAR_3, VAR_2->sc_ls_ctl_p_last);
  } else {
   FUNC_0(VAR_3, VAR_2->sc_fs_ctl_p_last);
  }
 } else {
  FUNC_4(VAR_3->page_cache);
 }

 FUNC_3(VAR_1);
}
