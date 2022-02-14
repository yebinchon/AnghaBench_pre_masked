
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer {void* td_transfer_last; struct musbotg_td* td_transfer_cache; TYPE_1__* xroot; } ;
struct musbotg_td {scalar_t__ remainder; struct musbotg_td* obj_next; int alt_next; scalar_t__ error; scalar_t__ (* func ) (struct musbotg_td*) ;} ;
struct musbotg_softc {int dummy; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,char*) ;
 struct musbotg_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct usb_xfer*) ;
 scalar_t__ FUNC_3 (struct musbotg_td*) ;

__attribute__((used)) static uint8_t
FUNC_4(struct usb_xfer *VAR_0)
{
 struct musbotg_softc *VAR_1;
 struct musbotg_td *VAR_2;

 FUNC_0(8, "\n");
 VAR_1 = FUNC_1(VAR_0->xroot->bus);

 VAR_2 = VAR_0->td_transfer_cache;
 while (1) {

  if ((VAR_2->func) (VAR_2)) {

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

 return (1);
done:

 FUNC_2(VAR_0);

 return (0);
}
