
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t usb_stream_t ;
typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct xhci_trb {void* dwTrb3; void* dwTrb2; void* qwTrb0; } ;
struct xhci_td {int ntrb; scalar_t__ td_self; int page_cache; struct xhci_trb* td_trb; } ;
struct xhci_softc {int * sc_config_msg; int sc_bus; } ;
struct xhci_endpoint_ext {scalar_t__ physaddr; scalar_t__* trb_used; scalar_t__ trb_ep_maxp; int trb_halted; scalar_t__ trb_running; scalar_t__* trb_index; struct usb_xfer** xfer; int page_cache; struct xhci_trb* trb; } ;
struct TYPE_7__ {int bandwidth_reclaimed; scalar_t__ control_xfr; } ;
struct usb_xfer {size_t stream_id; TYPE_3__ flags_int; scalar_t__ qh_pos; TYPE_2__* xroot; TYPE_1__* endpoint; struct xhci_td* td_transfer_last; struct xhci_td* td_transfer_first; } ;
struct TYPE_8__ {int bmAttributes; scalar_t__* wMaxPacketSize; } ;
struct TYPE_6__ {int bus; int udev; } ;
struct TYPE_5__ {TYPE_4__* edesc; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int,char*) ;


 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct xhci_softc* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (struct xhci_trb*) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct xhci_endpoint_ext* FUNC_12 (int ,TYPE_4__*) ;

__attribute__((used)) static usb_error_t
FUNC_13(struct usb_xfer *VAR_6)
{
 struct xhci_td *VAR_7;
 struct xhci_td *VAR_8;
 struct xhci_trb *VAR_9;
 struct xhci_endpoint_ext *VAR_10;
 uint64_t VAR_11;
 usb_stream_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;

 FUNC_1(8, "\n");

 VAR_12 = VAR_6->stream_id;


 if (VAR_6->flags_int.bandwidth_reclaimed) {
  FUNC_1(8, "Already in schedule\n");
  return (0);
 }

 VAR_10 = FUNC_12(VAR_6->xroot->udev,
     VAR_6->endpoint->edesc);

 VAR_7 = VAR_6->td_transfer_first;
 VAR_8 = VAR_6->td_transfer_last;
 VAR_11 = VAR_10->physaddr;

 switch (VAR_6->endpoint->edesc->bmAttributes & VAR_0) {
 case 129:
 case 128:

  VAR_15 = 1;
  break;
 default:

  VAR_15 = (VAR_2 - 2);
  break;
 }

 if (VAR_10->trb_used[VAR_12] >= VAR_15) {
  FUNC_1(8, "Too many TDs queued.\n");
  return (VAR_1);
 }


 if (VAR_6->flags_int.control_xfr != 0 &&
     VAR_10->trb_ep_maxp != VAR_6->endpoint->edesc->wMaxPacketSize[0]) {

  FUNC_1(8, "Reconfigure control endpoint\n");


  VAR_10->trb_halted = 1;
  VAR_10->trb_running = 0;
 }


 if (VAR_10->trb_running == 0) {
  struct xhci_softc *VAR_16 = FUNC_3(VAR_6->xroot->bus);

  FUNC_1(8, "Not running\n");


  (void)FUNC_9(FUNC_2(&VAR_16->sc_bus),
      &VAR_16->sc_config_msg[0], &VAR_16->sc_config_msg[1]);
  return (0);
 }

 VAR_10->trb_used[VAR_12]++;


 VAR_13 = VAR_10->trb_index[VAR_12];


 VAR_14 = (VAR_13 + 1);


 if (VAR_14 >= (VAR_2 - 1))
  VAR_14 = 0;


 VAR_10->trb_index[VAR_12] = VAR_14;


 VAR_13 += VAR_12 * VAR_2;
 VAR_14 += VAR_12 * VAR_2;


 VAR_11 += (VAR_14 * sizeof(struct xhci_trb));


 VAR_9 = VAR_8->td_trb + VAR_8->ntrb;


 VAR_9->qwTrb0 = FUNC_7(VAR_11);
 VAR_9->dwTrb2 = FUNC_6(FUNC_4(0));
 VAR_9->dwTrb3 = FUNC_6(VAR_4 |
     VAR_3 |
     FUNC_5(VAR_5));




 FUNC_8(VAR_8->page_cache);



 VAR_10->trb[VAR_14].qwTrb0 = 0;
 VAR_10->trb[VAR_14].dwTrb2 = 0;
 VAR_10->trb[VAR_14].dwTrb3 = 0;



 VAR_10->trb[VAR_13].qwTrb0 = FUNC_7((uint64_t)VAR_7->td_self);
 VAR_10->trb[VAR_13].dwTrb2 = FUNC_6(FUNC_4(0));




 FUNC_8(VAR_10->page_cache);



 VAR_10->trb[VAR_13].dwTrb3 = FUNC_6(VAR_3 |
     FUNC_5(VAR_5));

 FUNC_8(VAR_10->page_cache);

 FUNC_0("qh_pos = %u\n", VAR_13);

 VAR_10->xfer[VAR_13] = VAR_6;

 VAR_6->qh_pos = VAR_13;

 VAR_6->flags_int.bandwidth_reclaimed = 1;

 FUNC_11(VAR_6);

 return (0);
}
