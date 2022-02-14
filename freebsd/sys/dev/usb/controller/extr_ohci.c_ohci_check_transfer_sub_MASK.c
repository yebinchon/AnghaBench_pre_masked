
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {size_t curr_dma_set; } ;
struct usb_xfer {void* td_transfer_last; TYPE_5__* xroot; TYPE_4__* endpoint; TYPE_1__ flags_int; TYPE_7__** qh_start; TYPE_6__* td_transfer_cache; } ;
struct TYPE_13__ {int td_self; struct TYPE_13__* obj_next; struct TYPE_13__* alt_next; int td_next; int td_flags; int td_cbp; int page_cache; } ;
typedef TYPE_6__ ohci_td_t ;
typedef int ohci_softc_t ;
struct TYPE_14__ {int page_cache; int ed_headp; } ;
typedef TYPE_7__ ohci_ed_t ;
struct TYPE_12__ {int bus; TYPE_3__* udev; } ;
struct TYPE_11__ {int * methods; } ;
struct TYPE_9__ {scalar_t__ self_suspended; } ;
struct TYPE_10__ {TYPE_2__ flags; } ;


 int FUNC_0 (int,char*,struct usb_xfer*) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_xfer *VAR_6)
{
 ohci_td_t *VAR_7;
 ohci_ed_t *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint16_t VAR_12;

 VAR_7 = VAR_6->td_transfer_cache;

 while (1) {

  FUNC_6(VAR_7->page_cache);
  VAR_9 = FUNC_4(VAR_7->td_cbp);
  VAR_10 = FUNC_4(VAR_7->td_flags);
  VAR_11 = FUNC_4(VAR_7->td_next);


  if (((void *)VAR_7) == VAR_6->td_transfer_last) {

   VAR_7 = ((void*)0);
   break;
  }

  VAR_12 = FUNC_2(VAR_10);
  if (VAR_12) {

   VAR_7 = ((void*)0);
   break;
  }





  if (((VAR_11 & (~0xF)) == VAR_3) || VAR_9) {

   VAR_7 = VAR_7->alt_next;
   break;
  }
  VAR_7 = VAR_7->obj_next;
 }



 VAR_6->td_transfer_cache = VAR_7;

 if (VAR_7) {

  VAR_8 = VAR_6->qh_start[VAR_6->flags_int.curr_dma_set];

  VAR_8->ed_headp = VAR_7->td_self;
  FUNC_5(VAR_8->page_cache);

  FUNC_0(13, "xfer=%p following alt next\n", VAR_6);






  if (VAR_6->xroot->udev->flags.self_suspended) {

  } else if (VAR_6->endpoint->methods == &VAR_4) {
   ohci_softc_t *VAR_13 = FUNC_1(VAR_6->xroot->bus);

   FUNC_3(VAR_13, VAR_2, VAR_0);
  } else if (VAR_6->endpoint->methods == &VAR_5) {
   ohci_softc_t *VAR_14 = FUNC_1(VAR_6->xroot->bus);

   FUNC_3(VAR_14, VAR_2, VAR_1);
  }
 }
}
