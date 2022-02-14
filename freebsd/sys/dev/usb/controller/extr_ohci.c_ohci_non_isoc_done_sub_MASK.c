
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ short_frames_ok; } ;
struct usb_xfer {size_t aframes; size_t nframes; int* frlengths; void* td_transfer_last; TYPE_2__* td_transfer_cache; TYPE_1__ flags_int; } ;
struct TYPE_4__ {int len; struct TYPE_4__* alt_next; struct TYPE_4__* obj_next; int td_be; int td_flags; int td_cbp; int page_cache; } ;
typedef TYPE_2__ ohci_td_t ;


 int FUNC_0 (int,char*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int * VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*,size_t,int ) ;

__attribute__((used)) static usb_error_t
FUNC_7(struct usb_xfer *VAR_6)
{
 ohci_td_t *VAR_7;
 ohci_td_t *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint16_t VAR_13;

 VAR_7 = VAR_6->td_transfer_cache;
 VAR_8 = VAR_7->alt_next;
 VAR_12 = 0;

 if (VAR_6->aframes != VAR_6->nframes) {
  FUNC_6(VAR_6, VAR_6->aframes, 0);
 }
 while (1) {

  FUNC_5(VAR_7->page_cache);
  VAR_10 = FUNC_4(VAR_7->td_cbp);
  VAR_12 = FUNC_4(VAR_7->td_flags);
  VAR_13 = FUNC_3(VAR_12);

  if (VAR_10) {




   VAR_11 = FUNC_4(VAR_7->td_be);
   VAR_9 = (FUNC_1(VAR_10 ^ VAR_11) ?
       (VAR_1 + 1) : 0x0001);
   VAR_9 += FUNC_2(VAR_11);
   VAR_9 -= FUNC_2(VAR_10);

   if (VAR_9 > VAR_7->len) {

    VAR_13 = VAR_0;
   } else if (VAR_6->aframes != VAR_6->nframes) {




    VAR_6->frlengths[VAR_6->aframes] += VAR_7->len - VAR_9;
   }
  } else {
   if (VAR_6->aframes != VAR_6->nframes) {

    VAR_6->frlengths[VAR_6->aframes] += VAR_7->len;
   }
  }

  if (((void *)VAR_7) == VAR_6->td_transfer_last) {
   VAR_7 = ((void*)0);
   break;
  }

  if (VAR_13) {

   VAR_7 = ((void*)0);
   break;
  }

  if (VAR_10) {
   if (VAR_6->flags_int.short_frames_ok) {

    VAR_7 = VAR_7->alt_next;
   } else {

    VAR_7 = ((void*)0);
   }
   break;
  }
  VAR_7 = VAR_7->obj_next;

  if (VAR_7->alt_next != VAR_8) {

   break;
  }
 }



 VAR_6->td_transfer_cache = VAR_7;

 FUNC_0(16, "error cc=%d (%s)\n",
     VAR_13, VAR_5[VAR_13]);

 return ((VAR_13 == 0) ? VAR_3 :
     (VAR_13 == VAR_0) ? VAR_4 : VAR_2);
}
