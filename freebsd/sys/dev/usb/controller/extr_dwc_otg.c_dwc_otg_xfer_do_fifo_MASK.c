
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct usb_xfer {void* td_transfer_last; struct dwc_otg_td* td_transfer_cache; } ;
struct dwc_otg_td {scalar_t__ remainder; void* tmr_val; void* tmr_res; void* toggle; struct dwc_otg_td* obj_next; int alt_next; scalar_t__ error_any; scalar_t__ (* func ) (struct dwc_otg_softc*,struct dwc_otg_td*) ;} ;
struct dwc_otg_softc {int sc_xfer_complete; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct dwc_otg_softc*,struct dwc_otg_td*) ;

__attribute__((used)) static void
FUNC_2(struct dwc_otg_softc *VAR_0, struct usb_xfer *VAR_1)
{
 struct dwc_otg_td *VAR_2;
 uint8_t VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;

 FUNC_0(9, "\n");

 VAR_2 = VAR_1->td_transfer_cache;
 if (VAR_2 == ((void*)0))
  return;

 while (1) {
  if ((VAR_2->func) (VAR_0, VAR_2)) {

   break;
  }
  if (((void *)VAR_2) == VAR_1->td_transfer_last) {
   goto done;
  }
  if (VAR_2->error_any) {
   goto done;
  } else if (VAR_2->remainder > 0) {




   if (!VAR_2->alt_next)
    goto done;
  }





  VAR_5 = VAR_2->tmr_res;
  VAR_4 = VAR_2->tmr_val;
  VAR_3 = VAR_2->toggle;
  VAR_2 = VAR_2->obj_next;
  VAR_1->td_transfer_cache = VAR_2;
  VAR_2->toggle = VAR_3;
  VAR_2->tmr_res = VAR_5;
  VAR_2->tmr_val = VAR_4;
 }
 return;

done:
 VAR_1->td_transfer_cache = ((void*)0);
 VAR_0->sc_xfer_complete = 1;
}
