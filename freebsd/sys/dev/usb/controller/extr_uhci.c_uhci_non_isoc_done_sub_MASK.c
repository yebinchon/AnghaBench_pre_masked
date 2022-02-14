
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ len; struct TYPE_6__* alt_next; struct TYPE_6__* obj_next; scalar_t__ fix_pc; int td_token; int td_status; scalar_t__ page_cache; } ;
typedef TYPE_3__ uhci_td_t ;
struct TYPE_4__ {scalar_t__ short_frames_ok; } ;
struct usb_xfer {size_t aframes; size_t nframes; void* td_transfer_last; int endpointno; int address; TYPE_2__* endpoint; TYPE_3__* td_transfer_cache; TYPE_1__ flags_int; int * frlengths; scalar_t__ frbuffers; } ;
struct usb_page_search {int buffer; } ;
struct TYPE_5__ {int toggle_next; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,int ,int ,size_t,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,struct usb_page_search*) ;
 int FUNC_9 (struct usb_xfer*,size_t,int ) ;

__attribute__((used)) static usb_error_t
FUNC_10(struct usb_xfer *VAR_15)
{
 struct usb_page_search VAR_16;
 uhci_td_t *VAR_17;
 uhci_td_t *VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint16_t VAR_21;

 VAR_17 = VAR_15->td_transfer_cache;
 VAR_18 = VAR_17->alt_next;

 if (VAR_15->aframes != VAR_15->nframes) {
  FUNC_9(VAR_15, VAR_15->aframes, 0);
 }
 while (1) {

  FUNC_6(VAR_17->page_cache);
  VAR_19 = FUNC_5(VAR_17->td_status);
  VAR_20 = FUNC_5(VAR_17->td_token);






  VAR_21 = FUNC_2(VAR_19);
  if (VAR_21 > VAR_17->len) {

   FUNC_0("Invalid status length, "
       "0x%04x/0x%04x bytes\n", VAR_21, VAR_17->len);
   VAR_19 |= VAR_11;

  } else if ((VAR_15->aframes != VAR_15->nframes) && (VAR_21 > 0)) {

   if (VAR_17->fix_pc) {

    FUNC_8(VAR_17->fix_pc, 0, &VAR_16);






    FUNC_6(VAR_17->fix_pc);

    FUNC_7(VAR_15->frbuffers + VAR_15->aframes,
        VAR_15->frlengths[VAR_15->aframes], VAR_16.buffer, VAR_21);
   }


   VAR_15->frlengths[VAR_15->aframes] += VAR_21;
  }

  if (((void *)VAR_17) == VAR_15->td_transfer_last) {
   VAR_17 = ((void*)0);
   break;
  }
  if (VAR_19 & VAR_11) {

   VAR_17 = ((void*)0);
   break;
  }

  if (VAR_21 != VAR_17->len) {
   if (VAR_15->flags_int.short_frames_ok) {

    VAR_17 = VAR_17->alt_next;
   } else {

    VAR_17 = ((void*)0);
   }
   break;
  }
  VAR_17 = VAR_17->obj_next;

  if (VAR_17->alt_next != VAR_18) {

   break;
  }
 }



 VAR_15->td_transfer_cache = VAR_17;



 VAR_15->endpoint->toggle_next = (VAR_20 & FUNC_4(1)) ? 0 : 1;
 if (VAR_19 & VAR_11) {

  if (FUNC_3(VAR_19) == 0)
   return (VAR_12);
  return (VAR_14);
 }
 return (VAR_13);
}
