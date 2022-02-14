
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_td {int page_cache; TYPE_1__* td_trb; } ;
struct usb_xfer {struct xhci_td* td_transfer_cache; } ;
struct TYPE_2__ {int dwTrb3; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_1)
{
 struct xhci_td *VAR_2;

 VAR_2 = VAR_1->td_transfer_cache;

 FUNC_2(VAR_2->page_cache);

 if (!(VAR_2->td_trb[0].dwTrb3 & FUNC_0(VAR_0))) {



  VAR_2->td_trb[0].dwTrb3 |= FUNC_0(VAR_0);
  FUNC_1(VAR_2->page_cache);

  FUNC_3(VAR_1);
 }
}
