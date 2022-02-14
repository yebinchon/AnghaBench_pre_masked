
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_td {size_t ntrb; int page_cache; TYPE_1__* td_trb; struct xhci_td* alt_next; } ;
struct usb_xfer {struct xhci_td* td_transfer_last; struct xhci_td* td_transfer_cache; } ;
struct TYPE_2__ {int dwTrb3; int dwTrb2; int qwTrb0; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_1)
{
 struct xhci_td *VAR_2;
 struct xhci_td *VAR_3;

 VAR_2 = VAR_1->td_transfer_cache;
 VAR_3 = VAR_1->td_transfer_last;

 VAR_2 = VAR_2->alt_next;

 FUNC_2(VAR_2->page_cache);

 if (!(VAR_2->td_trb[0].dwTrb3 & FUNC_0(VAR_0))) {

  FUNC_2(VAR_3->page_cache);



  VAR_2->td_trb[0].qwTrb0 = VAR_3->td_trb[VAR_3->ntrb].qwTrb0;
  VAR_2->td_trb[0].dwTrb2 = VAR_3->td_trb[VAR_3->ntrb].dwTrb2;
  FUNC_1(VAR_2->page_cache);

  VAR_2->td_trb[0].dwTrb3 = VAR_3->td_trb[VAR_3->ntrb].dwTrb3;
  FUNC_1(VAR_2->page_cache);

  FUNC_3(VAR_1);
 }
}
