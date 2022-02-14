
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {scalar_t__ control_act; scalar_t__ control_xfr; scalar_t__ isochronous_xfr; scalar_t__ control_hdr; int control_stall; scalar_t__ short_frames_ok; } ;
struct TYPE_8__ {scalar_t__ force_short_xfer; } ;
struct usb_xfer {int endpointno; scalar_t__* frlengths; int nframes; unsigned int fps_shift; TYPE_5__* endpoint; struct saf1761_otg_td* td_transfer_first; struct saf1761_otg_td* td_transfer_last; int * frbuffers; TYPE_6__ flags_int; TYPE_1__ flags; TYPE_3__* xroot; struct saf1761_otg_td** td_start; struct saf1761_otg_td* td_transfer_cache; int max_frame_size; int sumlen; int address; } ;
struct saf1761_otg_td {int uframe; int set_toggle; int toggle; } ;
struct saf1761_otg_std_temp {scalar_t__ offset; int setup_alt_next; int did_stall; scalar_t__ len; int short_pkt; struct saf1761_otg_td* td; int * func; int * pc; struct saf1761_otg_td* td_next; int max_frame_size; } ;
struct saf1761_otg_softc {int dummy; } ;
struct TYPE_9__ {scalar_t__ usb_mode; } ;
struct TYPE_14__ {scalar_t__ speed; TYPE_2__ flags; } ;
struct TYPE_12__ {scalar_t__ toggle_next; TYPE_4__* edesc; } ;
struct TYPE_11__ {int bmAttributes; } ;
struct TYPE_10__ {TYPE_7__* udev; int bus; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct saf1761_otg_std_temp*) ;
 int FUNC_5 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_20)
{
 struct saf1761_otg_std_temp VAR_21;
 struct saf1761_otg_softc *VAR_22;
 struct saf1761_otg_td *VAR_23;
 uint32_t VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;
 uint8_t VAR_27;
 uint8_t VAR_28;
 uint8_t VAR_29;
 uint8_t VAR_30;

 FUNC_0(9, "addr=%d endpt=%d sumlen=%d speed=%d\n",
     VAR_20->address, FUNC_3(VAR_20->endpointno),
     VAR_20->sumlen, FUNC_5(VAR_20->xroot->udev));

 VAR_21.max_frame_size = VAR_20->max_frame_size;

 VAR_23 = VAR_20->td_start[0];
 VAR_20->td_transfer_first = VAR_23;
 VAR_20->td_transfer_cache = VAR_23;



 VAR_21.pc = ((void*)0);
 VAR_21.td = ((void*)0);
 VAR_21.td_next = VAR_20->td_start[0];
 VAR_21.offset = 0;
 VAR_21.setup_alt_next = VAR_20->flags_int.short_frames_ok ||
     VAR_20->flags_int.isochronous_xfr;
 VAR_21.did_stall = !VAR_20->flags_int.control_stall;

 VAR_28 = (VAR_20->xroot->udev->flags.usb_mode == VAR_7);

 VAR_22 = FUNC_1(VAR_20->xroot->bus);
 VAR_25 = (VAR_20->endpointno & VAR_2);
 VAR_26 = (VAR_20->endpoint->edesc->bmAttributes & VAR_6);



 if (VAR_20->flags_int.control_xfr) {
  if (VAR_20->flags_int.control_hdr) {

   if (VAR_28)
    VAR_21.func = &VAR_19;
   else
    VAR_21.func = &VAR_12;

   VAR_21.len = VAR_20->frlengths[0];
   VAR_21.pc = VAR_20->frbuffers + 0;
   VAR_21.short_pkt = VAR_21.len ? 1 : 0;

   if (VAR_20->nframes == 1) {

    if (VAR_20->flags_int.control_act)
     VAR_21.setup_alt_next = 0;
   }
   FUNC_4(&VAR_21);
  }
  VAR_24 = 1;
 } else {
  VAR_24 = 0;
 }

 VAR_29 = 0;
 VAR_30 = 0;

 if (VAR_24 != VAR_20->nframes) {
  if (VAR_20->endpointno & VAR_3) {
   if (VAR_28) {
    if (VAR_26 == VAR_4) {
     VAR_21.func = &VAR_15;
    } else if (VAR_26 == VAR_5) {
     VAR_21.func = &VAR_17;
     VAR_29 = (FUNC_2(VAR_22, VAR_0) + 8) &
         (VAR_1 & ~7);
     if (VAR_20->xroot->udev->speed == VAR_8)
      VAR_30 = 1U << VAR_20->fps_shift;
     else
      VAR_30 = 8U;
    } else {
     VAR_21.func = &VAR_13;
    }
    VAR_27 = 0;
   } else {
    VAR_21.func = &VAR_10;
    VAR_27 = 1;
   }
  } else {
   if (VAR_28) {
    if (VAR_26 == VAR_4) {
     VAR_21.func = &VAR_16;
    } else if (VAR_26 == VAR_5) {
     VAR_21.func = &VAR_18;
     VAR_29 = (FUNC_2(VAR_22, VAR_0) + 8) &
         (VAR_1 & ~7);
     if (VAR_20->xroot->udev->speed == VAR_8)
      VAR_30 = 1U << VAR_20->fps_shift;
     else
      VAR_30 = 8U;
    } else {
     VAR_21.func = &VAR_14;
    }
    VAR_27 = 0;
   } else {
    VAR_21.func = &VAR_9;
    VAR_27 = 0;
   }
  }


  VAR_21.pc = VAR_20->frbuffers + VAR_24;
 } else {
  VAR_27 = 0;
 }

 while (VAR_24 != VAR_20->nframes) {



  VAR_21.len = VAR_20->frlengths[VAR_24];

  VAR_24++;

  if (VAR_24 == VAR_20->nframes) {
   if (VAR_20->flags_int.control_xfr) {
    if (VAR_20->flags_int.control_act) {
     VAR_21.setup_alt_next = 0;
    }
   } else {
    VAR_21.setup_alt_next = 0;
   }
  }
  if (VAR_21.len == 0) {



   VAR_21.short_pkt = 0;

  } else {



   VAR_21.short_pkt = (VAR_20->flags.force_short_xfer) ? 0 : 1;
  }

  FUNC_4(&VAR_21);

  if (VAR_20->flags_int.isochronous_xfr) {
   VAR_21.offset += VAR_21.len;


   VAR_21.td->uframe = VAR_29;


   VAR_29 += VAR_30;
  } else {

   VAR_21.pc = VAR_20->frbuffers + VAR_24;
  }
 }


 if (VAR_20->flags_int.control_xfr) {

  VAR_21.pc = VAR_20->frbuffers + 0;
  VAR_21.len = 0;
  VAR_21.short_pkt = 0;
  VAR_21.setup_alt_next = 0;


  if (!VAR_20->flags_int.control_act) {





   if (VAR_20->endpointno & VAR_3) {
    if (VAR_28) {
     VAR_21.func = &VAR_14;
     VAR_27 = 0;
    } else {
     VAR_21.func = &VAR_9;
     VAR_27 = 0;
    }
   } else {
    if (VAR_28) {
     VAR_21.func = &VAR_13;
     VAR_27 = 0;
    } else {
     VAR_21.func = &VAR_10;
     VAR_27 = 1;
    }
   }
   VAR_21.len = 0;
   VAR_21.short_pkt = 0;

   FUNC_4(&VAR_21);


   VAR_23 = VAR_21.td;
   VAR_23->set_toggle = 1;

   if (VAR_27) {

    VAR_21.func = &VAR_11;
    FUNC_4(&VAR_21);
   }
  }
 } else {
  if (VAR_27) {
   VAR_21.pc = VAR_20->frbuffers + 0;
   VAR_21.len = 0;
   VAR_21.short_pkt = 0;
   VAR_21.setup_alt_next = 0;


   VAR_21.func = &VAR_11;
   FUNC_4(&VAR_21);
  }
 }


 VAR_23 = VAR_21.td;
 VAR_20->td_transfer_last = VAR_23;

 if (VAR_28) {

  VAR_23 = VAR_20->td_transfer_first;
  VAR_23->toggle = (VAR_20->endpoint->toggle_next ? 1 : 0);
 }
}
