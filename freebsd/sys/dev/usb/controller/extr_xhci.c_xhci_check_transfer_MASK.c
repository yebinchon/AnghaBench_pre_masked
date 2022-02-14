
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct xhci_trb {int dwTrb3; int dwTrb2; int qwTrb0; } ;
struct xhci_td {scalar_t__ td_self; int ntrb; int len; int remainder; struct xhci_td* obj_next; struct xhci_td* alt_next; int page_cache; scalar_t__ status; TYPE_3__* td_trb; } ;
struct TYPE_6__ {TYPE_1__* devs; } ;
struct xhci_softc {scalar_t__ sc_noslot; TYPE_2__ sc_hw; } ;
struct xhci_endpoint_ext {scalar_t__ trb_ep_mode; struct usb_xfer** xfer; } ;
struct TYPE_8__ {scalar_t__ control_xfr; scalar_t__ isochronous_xfr; scalar_t__ short_frames_ok; } ;
struct usb_xfer {void* td_transfer_last; struct xhci_td* td_transfer_cache; TYPE_4__ flags_int; } ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {int dwTrb2; } ;
struct TYPE_5__ {struct xhci_endpoint_ext* endp; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,int,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_14(struct xhci_softc *VAR_6, struct xhci_trb *VAR_7)
{
 struct xhci_endpoint_ext *VAR_8;
 int64_t VAR_9;
 uint64_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint16_t VAR_13 = 0;
 uint16_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;


 VAR_10 = FUNC_8(VAR_7->qwTrb0);
 VAR_11 = FUNC_7(VAR_7->dwTrb2);

 VAR_12 = FUNC_4(VAR_11);
 VAR_15 = FUNC_3(VAR_11);

 VAR_11 = FUNC_7(VAR_7->dwTrb3);
 VAR_17 = FUNC_5(VAR_11);
 VAR_18 = FUNC_6(VAR_11);


 VAR_16 = (VAR_15 != VAR_4 &&
     VAR_15 != VAR_5);

 FUNC_0("slot=%u epno=%u remainder=%u status=%u\n",
     VAR_18, VAR_17, VAR_12, VAR_15);

 if (VAR_18 > VAR_6->sc_noslot) {
  FUNC_0("Invalid slot.\n");
  return;
 }

 if ((VAR_17 == 0) || (VAR_17 >= VAR_1)) {
  FUNC_0("Invalid endpoint.\n");
  return;
 }

 VAR_8 = &VAR_6->sc_hw.devs[VAR_18].endp[VAR_17];


 for (VAR_14 = 0;; VAR_14++) {
  struct usb_xfer *VAR_19;
  struct xhci_td *VAR_20;

  if (VAR_14 == (VAR_3 - 1)) {
   if (VAR_8->trb_ep_mode != VAR_0 ||
       VAR_13 == (VAR_2 - 1))
    break;
   VAR_13++;
   VAR_14 = 0;
   FUNC_1(5, "stream_id=%u\n", VAR_13);
  }

  VAR_19 = VAR_8->xfer[VAR_14 + (VAR_3 * VAR_13)];
  if (VAR_19 == ((void*)0))
   continue;

  VAR_20 = VAR_19->td_transfer_cache;

  FUNC_1(5, "Checking if 0x%016llx == (0x%016llx .. 0x%016llx)\n",
   (long long)VAR_10,
   (long long)VAR_20->td_self,
   (long long)VAR_20->td_self + sizeof(VAR_20->td_trb));
  VAR_9 = VAR_10 - VAR_20->td_self;

  if (VAR_9 >= 0 &&
      VAR_9 < (int64_t)sizeof(VAR_20->td_trb)) {

   FUNC_10(VAR_20->page_cache);


   for (VAR_14 = (VAR_9 / 16) + 1; VAR_14 < VAR_20->ntrb; VAR_14++) {
    VAR_11 = FUNC_7(VAR_20->td_trb[VAR_14].dwTrb2);
    VAR_12 += FUNC_2(VAR_11);
   }

   FUNC_1(5, "New remainder: %u\n", VAR_12);


   if (VAR_19->flags_int.isochronous_xfr) {
    if (VAR_16) {
     VAR_16 = 0;
     VAR_15 = VAR_5;
     VAR_12 = VAR_20->len;
    }
   }


   VAR_20->remainder = VAR_12;
   VAR_20->status = VAR_15;

   FUNC_9(VAR_20->page_cache);





   if (((void *)VAR_20) == VAR_19->td_transfer_last) {
    FUNC_0("TD is last\n");
    FUNC_12(VAR_19);
    break;
   }





   if (VAR_16) {
    FUNC_0("TD has I/O error\n");
    FUNC_12(VAR_19);
    break;
   }





   if (VAR_20->remainder > 0) {
    if (VAR_20->alt_next == ((void*)0)) {
     FUNC_0(
         "short TD has no alternate next\n");
     FUNC_12(VAR_19);
     break;
    }
    FUNC_0("TD has short pkt\n");
    if (VAR_19->flags_int.short_frames_ok ||
        VAR_19->flags_int.isochronous_xfr ||
        VAR_19->flags_int.control_xfr) {

     VAR_19->td_transfer_cache = VAR_20->alt_next;
     FUNC_11(VAR_19);
     break;
    }
    FUNC_13(VAR_19);
    FUNC_12(VAR_19);
    break;
   }




   FUNC_0("Following next TD\n");
   VAR_19->td_transfer_cache = VAR_20->obj_next;
   FUNC_11(VAR_19);
   break;
  }
 }
}
