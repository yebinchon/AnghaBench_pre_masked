
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uss820dci_td {scalar_t__ remainder; struct uss820dci_td* obj_next; int alt_next; scalar_t__ error; scalar_t__ (* func ) (struct uss820dci_softc*,struct uss820dci_td*) ;} ;
struct uss820dci_softc {int sc_xfer_complete; } ;
struct usb_xfer {void* td_transfer_last; struct uss820dci_td* td_transfer_cache; TYPE_1__* xroot; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,char*) ;
 struct uss820dci_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uss820dci_softc*,struct uss820dci_td*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0)
{
 struct uss820dci_softc *VAR_1 = FUNC_1(VAR_0->xroot->bus);
 struct uss820dci_td *VAR_2;

 FUNC_0(9, "\n");

 VAR_2 = VAR_0->td_transfer_cache;
 if (VAR_2 == ((void*)0))
  return;

 while (1) {
  if ((VAR_2->func) (VAR_1, VAR_2)) {

   break;
  }
  if (((void *)VAR_2) == VAR_0->td_transfer_last) {
   goto done;
  }
  if (VAR_2->error) {
   goto done;
  } else if (VAR_2->remainder > 0) {




   if (!VAR_2->alt_next) {
    goto done;
   }
  }



  VAR_2 = VAR_2->obj_next;
  VAR_0->td_transfer_cache = VAR_2;
 }
 return;

done:

 VAR_0->td_transfer_cache = ((void*)0);
 VAR_1->sc_xfer_complete = 1;
}
