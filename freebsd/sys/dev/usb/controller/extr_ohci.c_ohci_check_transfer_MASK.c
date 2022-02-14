
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {size_t curr_dma_set; scalar_t__ short_frames_ok; } ;
struct usb_xfer {TYPE_2__* endpoint; scalar_t__ td_transfer_cache; TYPE_1__ flags_int; TYPE_3__** qh_start; } ;
struct TYPE_6__ {int ed_tailp; int ed_headp; int page_cache; } ;
typedef TYPE_3__ ohci_ed_t ;
struct TYPE_5__ {int toggle_next; int * methods; } ;


 int FUNC_0 (int,char*,struct usb_xfer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_xfer*) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static uint8_t
FUNC_6(struct usb_xfer *VAR_3)
{
 ohci_ed_t *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

 FUNC_0(13, "xfer=%p checking transfer\n", VAR_3);

 VAR_4 = VAR_3->qh_start[VAR_3->flags_int.curr_dma_set];

 FUNC_5(VAR_4->page_cache);
 VAR_5 = FUNC_1(VAR_4->ed_headp);
 VAR_6 = FUNC_1(VAR_4->ed_tailp);

 if ((VAR_5 & VAR_0) ||
     (((VAR_5 ^ VAR_6) & (~0xF)) == 0)) {
  if (VAR_3->endpoint->methods == &VAR_2) {

   FUNC_3(VAR_3);
  } else {
   if (VAR_3->flags_int.short_frames_ok) {
    FUNC_2(VAR_3);
    if (VAR_3->td_transfer_cache) {

     return (0);
    }
   }

   if (VAR_5 & VAR_1) {
    VAR_3->endpoint->toggle_next = 1;
   } else {
    VAR_3->endpoint->toggle_next = 0;
   }


   FUNC_4(VAR_3);
  }
  return (1);
 }
 FUNC_0(13, "xfer=%p is still active\n", VAR_3);
 return (0);
}
