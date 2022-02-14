
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct uss820dci_td {int dummy; } ;
struct uss820dci_softc {int dummy; } ;
struct uss820_std_temp {scalar_t__ offset; int setup_alt_next; int did_stall; scalar_t__ len; int short_pkt; struct uss820dci_td* td; int * func; int * pc; struct uss820dci_td* td_next; int max_frame_size; } ;
struct TYPE_6__ {scalar_t__ control_act; scalar_t__ control_xfr; scalar_t__ isochronous_xfr; scalar_t__ control_hdr; int control_stall; scalar_t__ short_frames_ok; } ;
struct TYPE_5__ {scalar_t__ force_short_xfer; } ;
struct usb_xfer {int endpointno; scalar_t__* frlengths; int nframes; struct uss820dci_td* td_transfer_last; TYPE_3__ flags_int; int * frbuffers; TYPE_2__ flags; TYPE_1__* xroot; struct uss820dci_td** td_start; struct uss820dci_td* td_transfer_cache; struct uss820dci_td* td_transfer_first; int max_frame_size; int sumlen; int address; } ;
struct TYPE_4__ {int bus; int udev; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct uss820dci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct uss820_std_temp*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_6)
{
 struct uss820_std_temp VAR_7;
 struct uss820dci_softc *VAR_8;
 struct uss820dci_td *VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11;

 FUNC_0(9, "addr=%d endpt=%d sumlen=%d speed=%d\n",
     VAR_6->address, FUNC_1(VAR_6->endpointno),
     VAR_6->sumlen, FUNC_3(VAR_6->xroot->udev));

 VAR_7.max_frame_size = VAR_6->max_frame_size;

 VAR_9 = VAR_6->td_start[0];
 VAR_6->td_transfer_first = VAR_9;
 VAR_6->td_transfer_cache = VAR_9;



 VAR_7.pc = ((void*)0);
 VAR_7.td = ((void*)0);
 VAR_7.td_next = VAR_6->td_start[0];
 VAR_7.offset = 0;
 VAR_7.setup_alt_next = VAR_6->flags_int.short_frames_ok ||
     VAR_6->flags_int.isochronous_xfr;
 VAR_7.did_stall = !VAR_6->flags_int.control_stall;

 VAR_8 = FUNC_2(VAR_6->xroot->bus);
 VAR_11 = (VAR_6->endpointno & VAR_0);



 if (VAR_6->flags_int.control_xfr) {
  if (VAR_6->flags_int.control_hdr) {

   VAR_7.func = &VAR_5;
   VAR_7.len = VAR_6->frlengths[0];
   VAR_7.pc = VAR_6->frbuffers + 0;
   VAR_7.short_pkt = VAR_7.len ? 1 : 0;

   if (VAR_6->nframes == 1) {

    if (VAR_6->flags_int.control_act)
     VAR_7.setup_alt_next = 0;
   }

   FUNC_4(&VAR_7);
  }
  VAR_10 = 1;
 } else {
  VAR_10 = 0;
 }

 if (VAR_10 != VAR_6->nframes) {
  if (VAR_6->endpointno & VAR_1) {
   VAR_7.func = &VAR_3;
  } else {
   VAR_7.func = &VAR_2;
  }


  VAR_7.pc = VAR_6->frbuffers + VAR_10;
 }
 while (VAR_10 != VAR_6->nframes) {



  VAR_7.len = VAR_6->frlengths[VAR_10];

  VAR_10++;

  if (VAR_10 == VAR_6->nframes) {
   if (VAR_6->flags_int.control_xfr) {
    if (VAR_6->flags_int.control_act) {
     VAR_7.setup_alt_next = 0;
    }
   } else {
    VAR_7.setup_alt_next = 0;
   }
  }
  if (VAR_7.len == 0) {



   VAR_7.short_pkt = 0;

  } else {



   VAR_7.short_pkt = (VAR_6->flags.force_short_xfer) ? 0 : 1;
  }

  FUNC_4(&VAR_7);

  if (VAR_6->flags_int.isochronous_xfr) {
   VAR_7.offset += VAR_7.len;
  } else {

   VAR_7.pc = VAR_6->frbuffers + VAR_10;
  }
 }


 if (VAR_6->flags_int.control_xfr) {
  uint8_t VAR_12;


  VAR_7.pc = VAR_6->frbuffers + 0;
  VAR_7.len = 0;
  VAR_7.short_pkt = 0;
  VAR_7.setup_alt_next = 0;


  if (!VAR_6->flags_int.control_act) {





   if (VAR_6->endpointno & VAR_1) {
    VAR_7.func = &VAR_2;
    VAR_12 = 0;
   } else {
    VAR_7.func = &VAR_3;
    VAR_12 = 1;
   }
   VAR_7.len = 0;
   VAR_7.short_pkt = 0;

   FUNC_4(&VAR_7);
   if (VAR_12) {

    VAR_7.func = &VAR_4;
    FUNC_4(&VAR_7);
   }
  }
 }

 VAR_9 = VAR_7.td;
 VAR_6->td_transfer_last = VAR_9;
}
