
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_5__ {size_t curr_dma_set; int control_act; scalar_t__ control_xfr; scalar_t__ control_hdr; } ;
struct usb_xfer {int aframes; int nframes; TYPE_2__ flags_int; int * td_transfer_cache; int * td_transfer_first; TYPE_3__** qh_start; TYPE_1__* xroot; int endpoint; } ;
typedef int ehci_softc_t ;
struct TYPE_6__ {int page_cache; } ;
typedef TYPE_3__ ehci_qh_t ;
struct TYPE_4__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct usb_xfer*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct usb_xfer*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_1)
{
 ehci_qh_t *VAR_2;
 usb_error_t VAR_3 = 0;

 FUNC_0(13, "xfer=%p endpoint=%p transfer done\n",
     VAR_1, VAR_1->endpoint);
 VAR_2 = VAR_1->qh_start[VAR_1->flags_int.curr_dma_set];

 FUNC_5(VAR_2->page_cache);



 VAR_1->td_transfer_cache = VAR_1->td_transfer_first;

 if (VAR_1->flags_int.control_xfr) {

  if (VAR_1->flags_int.control_hdr) {

   VAR_3 = FUNC_4(VAR_1);
  }
  VAR_1->aframes = 1;

  if (VAR_1->td_transfer_cache == ((void*)0)) {
   goto done;
  }
 }
 while (VAR_1->aframes != VAR_1->nframes) {

  VAR_3 = FUNC_4(VAR_1);
  VAR_1->aframes++;

  if (VAR_1->td_transfer_cache == ((void*)0)) {
   goto done;
  }
 }

 if (VAR_1->flags_int.control_xfr &&
     !VAR_1->flags_int.control_act) {

  VAR_3 = FUNC_4(VAR_1);
 }
done:
 FUNC_2(VAR_1, VAR_3);
}
