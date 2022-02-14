
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ short_frames_ok; } ;
struct usb_xfer {size_t aframes; size_t nframes; void* td_transfer_last; TYPE_3__* xroot; int endpointno; int address; TYPE_4__* td_transfer_cache; TYPE_1__ flags_int; int * frlengths; } ;
typedef int ehci_softc_t ;
struct TYPE_8__ {scalar_t__ len; struct TYPE_8__* alt_next; struct TYPE_8__* obj_next; int qtd_status; int page_cache; } ;
typedef TYPE_4__ ehci_qtd_t ;
struct TYPE_7__ {TYPE_2__* udev; int bus; } ;
struct TYPE_6__ {scalar_t__ address; int * parent_hs_hub; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,int ,int ,size_t,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct usb_xfer*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_xfer*,size_t,int ) ;

__attribute__((used)) static usb_error_t
FUNC_9(struct usb_xfer *VAR_12)
{
 ehci_softc_t *VAR_13 = FUNC_2(VAR_12->xroot->bus);
 ehci_qtd_t *VAR_14;
 ehci_qtd_t *VAR_15;
 uint32_t VAR_16;
 uint16_t VAR_17;

 VAR_14 = VAR_12->td_transfer_cache;
 VAR_15 = VAR_14->alt_next;

 if (VAR_12->aframes != VAR_12->nframes) {
  FUNC_8(VAR_12, VAR_12->aframes, 0);
 }
 while (1) {

  FUNC_7(VAR_14->page_cache);
  VAR_16 = FUNC_6(VAR_13, VAR_14->qtd_status);

  VAR_17 = FUNC_3(VAR_16);





  if (VAR_17 > VAR_14->len) {

   FUNC_0("Invalid status length, "
       "0x%04x/0x%04x bytes\n", VAR_17, VAR_14->len);
   VAR_16 |= VAR_3;
  } else if (VAR_12->aframes != VAR_12->nframes) {
   VAR_12->frlengths[VAR_12->aframes] += VAR_14->len - VAR_17;

   FUNC_5(VAR_12, VAR_14->len - VAR_17, VAR_14->len);
  }


  if (((void *)VAR_14) == VAR_12->td_transfer_last) {
   VAR_14 = ((void*)0);
   break;
  }

  if (VAR_16 & VAR_3) {

   VAR_14 = ((void*)0);
   break;
  }

  if (VAR_17 > 0) {
   if (VAR_12->flags_int.short_frames_ok) {

    VAR_14 = VAR_14->alt_next;
   } else {

    VAR_14 = ((void*)0);
   }
   break;
  }
  VAR_14 = VAR_14->obj_next;

  if (VAR_14->alt_next != VAR_15) {

   break;
  }
 }



 VAR_12->td_transfer_cache = VAR_14;
 if (VAR_16 & VAR_3) {
  if ((VAR_12->xroot->udev->parent_hs_hub != ((void*)0)) ||
      (VAR_12->xroot->udev->address != 0)) {

   if (FUNC_4(VAR_16) == 0)
    return (VAR_9);
  }
  return (VAR_11);
 }
 return (VAR_10);
}
