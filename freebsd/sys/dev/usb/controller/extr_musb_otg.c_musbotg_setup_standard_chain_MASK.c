
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ usb_mode; scalar_t__ control_act; scalar_t__ control_xfr; scalar_t__ isochronous_xfr; scalar_t__ control_hdr; int control_stall; scalar_t__ short_frames_ok; } ;
struct TYPE_7__ {scalar_t__ force_short_xfer; } ;
struct usb_xfer {int address; int endpointno; scalar_t__* frlengths; int nframes; struct musbotg_td* td_transfer_last; TYPE_5__ flags_int; int * frbuffers; TYPE_1__ flags; TYPE_4__* endpoint; TYPE_3__* xroot; struct musbotg_td** td_start; struct musbotg_td* td_transfer_cache; struct musbotg_td* td_transfer_first; int max_frame_size; int sumlen; } ;
struct musbotg_td {int toggle; } ;
struct musbotg_std_temp {scalar_t__ offset; int setup_alt_next; int did_stall; int channel; int dev_addr; int transfer_type; scalar_t__ len; int short_pkt; struct musbotg_td* td; int * func; int * pc; int hport; int haddr; struct musbotg_td* td_next; int max_frame_size; } ;
struct musbotg_softc {scalar_t__ sc_mode; } ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;
struct TYPE_12__ {int hs_port_no; int hs_hub_addr; } ;
struct TYPE_10__ {int toggle_next; TYPE_2__* edesc; } ;
struct TYPE_9__ {TYPE_6__* udev; int bus; } ;
struct TYPE_8__ {int bmAttributes; } ;


 int FUNC_0 (int,char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct musbotg_softc* FUNC_1 (int ) ;
 int VAR_8 ;


 int VAR_9 ;
 int FUNC_2 (int) ;


 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (struct musbotg_std_temp*) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_26)
{
 struct musbotg_std_temp VAR_27;
 struct musbotg_softc *VAR_28;
 struct musbotg_td *VAR_29;
 uint32_t VAR_30;
 uint8_t VAR_31;
 uint8_t VAR_32;
 enum usb_dev_speed VAR_33;
 int VAR_34;
 int VAR_35;

 FUNC_0(8, "addr=%d endpt=%d sumlen=%d speed=%d\n",
     VAR_26->address, FUNC_2(VAR_26->endpointno),
     VAR_26->sumlen, FUNC_4(VAR_26->xroot->udev));

 VAR_28 = FUNC_1(VAR_26->xroot->bus);
 VAR_31 = (VAR_26->endpointno & VAR_8);

 VAR_27.max_frame_size = VAR_26->max_frame_size;

 VAR_29 = VAR_26->td_start[0];
 VAR_26->td_transfer_first = VAR_29;
 VAR_26->td_transfer_cache = VAR_29;


 VAR_35 = VAR_26->address;

 VAR_32 = VAR_26->endpoint->edesc->bmAttributes & VAR_10;

 VAR_27.pc = ((void*)0);
 VAR_27.td = ((void*)0);
 VAR_27.td_next = VAR_26->td_start[0];
 VAR_27.offset = 0;
 VAR_27.setup_alt_next = VAR_26->flags_int.short_frames_ok ||
     VAR_26->flags_int.isochronous_xfr;
 VAR_27.did_stall = !VAR_26->flags_int.control_stall;
 VAR_27.channel = -1;
 VAR_27.dev_addr = VAR_35;
 VAR_27.haddr = VAR_26->xroot->udev->hs_hub_addr;
 VAR_27.hport = VAR_26->xroot->udev->hs_port_no;

 if (VAR_26->flags_int.usb_mode == VAR_12) {
  VAR_33 = FUNC_4(VAR_26->xroot->udev);

  switch (VAR_33) {
   case 128:
    VAR_27.transfer_type = VAR_7;
    break;
   case 130:
    VAR_27.transfer_type = VAR_5;
    break;
   case 129:
    VAR_27.transfer_type = VAR_6;
    break;
   default:
    VAR_27.transfer_type = 0;
    FUNC_0(-1, "Invalid USB speed: %d\n", VAR_33);
    break;
  }

  switch (VAR_32) {
   case 133:
    VAR_27.transfer_type |= VAR_2;
    break;
   case 131:
    VAR_27.transfer_type |= VAR_4;
    break;
   case 134:
    VAR_27.transfer_type |= VAR_1;
    break;
   case 132:
    VAR_27.transfer_type |= VAR_3;
    break;
   default:
    FUNC_0(-1, "Invalid USB transfer type: %d\n",
      VAR_32);
    break;
  }

  VAR_27.transfer_type |= VAR_31;
  VAR_29->toggle = VAR_26->endpoint->toggle_next;
 }



 if (VAR_26->flags_int.control_xfr) {
  if (VAR_26->flags_int.control_hdr) {

   if (VAR_26->flags_int.usb_mode == VAR_11)
    VAR_27.func = &VAR_15;
   else
    VAR_27.func = &VAR_21;

   VAR_27.len = VAR_26->frlengths[0];
   VAR_27.pc = VAR_26->frbuffers + 0;
   VAR_27.short_pkt = VAR_27.len ? 1 : 0;

   FUNC_3(&VAR_27);
  }
  VAR_30 = 1;
 } else {
  VAR_30 = 0;
 }

 VAR_34 = 0;

 if (VAR_30 != VAR_26->nframes) {
  if (VAR_26->endpointno & VAR_9)
       VAR_34 = 1;

  if (VAR_26->flags_int.usb_mode == VAR_12) {
   VAR_34 = !VAR_34;

   if (VAR_34) {
    if (VAR_26->flags_int.control_xfr)
     VAR_27.func = &VAR_20;
    else
     VAR_27.func = &VAR_25;
   } else {
    if (VAR_26->flags_int.control_xfr)
     VAR_27.func = &VAR_19;
    else
     VAR_27.func = &VAR_24;
   }

  } else {
   if (VAR_34) {
    if (VAR_26->flags_int.control_xfr)
     VAR_27.func = &VAR_14;
    else
     VAR_27.func = &VAR_18;
   } else {
    if (VAR_26->flags_int.control_xfr)
     VAR_27.func = &VAR_13;
    else
     VAR_27.func = &VAR_17;
   }
  }


  VAR_27.pc = VAR_26->frbuffers + VAR_30;
 }
 while (VAR_30 != VAR_26->nframes) {



  VAR_27.len = VAR_26->frlengths[VAR_30];

  VAR_30++;

  if (VAR_30 == VAR_26->nframes) {
   if (VAR_26->flags_int.control_xfr) {
    if (VAR_26->flags_int.control_act) {
     VAR_27.setup_alt_next = 0;
    }
   } else {
    VAR_27.setup_alt_next = 0;
   }
  }
  if (VAR_27.len == 0) {



   VAR_27.short_pkt = 0;

  } else {

   if (VAR_26->flags_int.isochronous_xfr) {


    VAR_27.short_pkt = 1;
   } else {

    VAR_27.short_pkt = (VAR_26->flags.force_short_xfer ? 0 : 1);
   }
  }

  FUNC_3(&VAR_27);

  if (VAR_26->flags_int.isochronous_xfr) {
   VAR_27.offset += VAR_27.len;
  } else {

   VAR_27.pc = VAR_26->frbuffers + VAR_30;
  }
 }


 if (VAR_26->flags_int.control_xfr) {


  VAR_27.pc = VAR_26->frbuffers + 0;
  VAR_27.len = 0;
  VAR_27.short_pkt = 0;
  VAR_27.setup_alt_next = 0;


  if (!VAR_26->flags_int.control_act) {




   if (VAR_28->sc_mode == VAR_0)
    VAR_27.func = &VAR_16;
   else {
    if (VAR_26->endpointno & VAR_9)
     VAR_27.func = VAR_23;
    else
     VAR_27.func = VAR_22;
   }
   FUNC_3(&VAR_27);
  }
 }

 VAR_29 = VAR_27.td;
 VAR_26->td_transfer_last = VAR_29;
}
