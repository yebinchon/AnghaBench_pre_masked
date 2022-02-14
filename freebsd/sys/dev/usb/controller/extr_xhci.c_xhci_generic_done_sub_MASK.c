
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct xhci_td {scalar_t__ status; scalar_t__ remainder; scalar_t__ len; struct xhci_td* alt_next; struct xhci_td* obj_next; int page_cache; } ;
struct TYPE_2__ {scalar_t__ control_xfr; scalar_t__ isochronous_xfr; scalar_t__ short_frames_ok; } ;
struct usb_xfer {size_t aframes; size_t nframes; void* td_transfer_last; struct xhci_td* td_transfer_cache; TYPE_1__ flags_int; int * frlengths; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,struct usb_xfer*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*,size_t,int ) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct usb_xfer *VAR_7)
{
 struct xhci_td *VAR_8;
 struct xhci_td *VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11;

 VAR_8 = VAR_7->td_transfer_cache;
 VAR_9 = VAR_8->alt_next;

 if (VAR_7->aframes != VAR_7->nframes)
  FUNC_3(VAR_7, VAR_7->aframes, 0);

 while (1) {

  FUNC_2(VAR_8->page_cache);

  VAR_11 = VAR_8->status;
  VAR_10 = VAR_8->remainder;

  FUNC_1(4, "xfer=%p[%u/%u] rem=%u/%u status=%u\n",
      VAR_7, (unsigned int)VAR_7->aframes,
      (unsigned int)VAR_7->nframes,
      (unsigned int)VAR_10, (unsigned int)VAR_8->len,
      (unsigned int)VAR_11);





  if (VAR_10 > VAR_8->len) {

   FUNC_0("Invalid status length, "
       "0x%04x/0x%04x bytes\n", VAR_10, VAR_8->len);
   VAR_11 = VAR_3;
  } else if (VAR_7->aframes != VAR_7->nframes) {
   VAR_7->frlengths[VAR_7->aframes] += VAR_8->len - VAR_10;
  }

  if (((void *)VAR_8) == VAR_7->td_transfer_last) {
   VAR_8 = ((void*)0);
   break;
  }

  if (VAR_11 != VAR_4 &&
      VAR_11 != VAR_6) {

   VAR_8 = ((void*)0);
   break;
  }

  if (VAR_10 > 0) {
   if (VAR_7->flags_int.short_frames_ok ||
       VAR_7->flags_int.isochronous_xfr ||
       VAR_7->flags_int.control_xfr) {

    VAR_8 = VAR_8->alt_next;
   } else {

    VAR_8 = ((void*)0);
   }
   break;
  }
  VAR_8 = VAR_8->obj_next;

  if (VAR_8->alt_next != VAR_9) {

   break;
  }
 }



 VAR_7->td_transfer_cache = VAR_8;

 return ((VAR_11 == VAR_5) ? VAR_2 :
     (VAR_11 != VAR_4 &&
     VAR_11 != VAR_6) ? VAR_0 :
     VAR_1);
}
