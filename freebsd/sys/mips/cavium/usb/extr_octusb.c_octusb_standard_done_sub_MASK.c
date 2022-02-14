
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ short_frames_ok; } ;
struct usb_xfer {size_t aframes; size_t nframes; scalar_t__* frlengths; struct octusb_td* td_transfer_cache; TYPE_1__ flags_int; } ;
struct octusb_td {scalar_t__ remainder; int error_any; struct octusb_td* obj_next; scalar_t__ alt_next; scalar_t__ error_stall; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static usb_error_t
FUNC_1(struct usb_xfer *VAR_2)
{
 struct octusb_td *VAR_3;
 uint32_t VAR_4;
 usb_error_t VAR_5;

 FUNC_0(8, "\n");

 VAR_3 = VAR_2->td_transfer_cache;

 do {
  VAR_4 = VAR_3->remainder;

  if (VAR_2->aframes != VAR_2->nframes) {




   if (VAR_4 > VAR_2->frlengths[VAR_2->aframes]) {
    VAR_3->error_any = 1;
   } else {
    VAR_2->frlengths[VAR_2->aframes] -= VAR_4;
   }
  }

  if (VAR_3->error_any) {

   VAR_5 = VAR_3->error_stall ? VAR_1 : VAR_0;
   VAR_3 = ((void*)0);
   break;
  }

  if (VAR_4 > 0) {
   if (VAR_2->flags_int.short_frames_ok) {

    if (VAR_3->alt_next) {
     VAR_3 = VAR_3->obj_next;
    } else {
     VAR_3 = ((void*)0);
    }
   } else {

    VAR_3 = ((void*)0);
   }
   VAR_5 = 0;
   break;
  }
  VAR_3 = VAR_3->obj_next;


  VAR_5 = 0;
  break;

 } while (0);



 VAR_2->td_transfer_cache = VAR_3;

 return (VAR_5);
}
