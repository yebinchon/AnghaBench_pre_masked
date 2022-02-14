
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int td_token; int td_self; struct TYPE_5__* alt_next; struct TYPE_5__* obj_next; int page_cache; } ;
typedef TYPE_2__ uhci_td_t ;
struct TYPE_6__ {int qh_e_next; int page_cache; } ;
typedef TYPE_3__ uhci_qh_t ;
struct TYPE_4__ {size_t curr_dma_set; scalar_t__ control_xfr; } ;
struct usb_xfer {TYPE_2__* td_transfer_last; TYPE_1__ flags_int; TYPE_2__* td_transfer_cache; TYPE_3__** qh_start; } ;


 int FUNC_0 (int,char*,struct usb_xfer*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_0)
{
 uhci_qh_t *VAR_1;
 uhci_td_t *VAR_2;
 uhci_td_t *VAR_3;

 uint32_t VAR_4;
 uint32_t VAR_5;

 VAR_2 = VAR_0->td_transfer_cache;
 VAR_1 = VAR_0->qh_start[VAR_0->flags_int.curr_dma_set];

 VAR_4 = VAR_2->obj_next->td_token;
 VAR_2 = VAR_2->alt_next;
 VAR_0->td_transfer_cache = VAR_2;
 VAR_5 = VAR_2->td_self;
 VAR_3 = VAR_2->alt_next;

 if (VAR_0->flags_int.control_xfr)
  goto skip;

 if (!((VAR_2->td_token ^ VAR_4) & FUNC_2(FUNC_1(1))))
  goto skip;




 while (1) {

  VAR_2->td_token ^= FUNC_2(FUNC_1(1));
  FUNC_3(VAR_2->page_cache);

  if (VAR_2 == VAR_0->td_transfer_last) {

   break;
  }
  VAR_2 = VAR_2->obj_next;

  if (VAR_2->alt_next != VAR_3) {

   break;
  }
 }
skip:


 VAR_1->qh_e_next = VAR_5;
 FUNC_3(VAR_1->page_cache);

 FUNC_0(13, "xfer=%p following alt next\n", VAR_0);
}
