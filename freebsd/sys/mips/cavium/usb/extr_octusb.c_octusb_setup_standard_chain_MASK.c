
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {scalar_t__ control_act; scalar_t__ control_xfr; scalar_t__ isochronous_xfr; scalar_t__ control_hdr; scalar_t__ short_frames_ok; } ;
struct TYPE_7__ {scalar_t__ force_short_xfer; } ;
struct usb_xfer {int endpointno; scalar_t__* frlengths; int nframes; TYPE_5__* endpoint; struct octusb_td* td_transfer_last; TYPE_3__ flags_int; int * frbuffers; TYPE_2__ flags; struct octusb_td* td_transfer_cache; struct octusb_td* td_transfer_first; struct octusb_td** td_start; TYPE_1__* xroot; int sumlen; int address; } ;
struct octusb_td {TYPE_4__* qh; } ;
struct octusb_std_temp {scalar_t__ offset; scalar_t__ len; int short_pkt; struct octusb_td* td; scalar_t__ setup_alt_next; int * pc; int * func; struct octusb_td* td_next; } ;
struct TYPE_10__ {scalar_t__ toggle_next; } ;
struct TYPE_9__ {int ep_toggle_next; scalar_t__ ep_allocated; } ;
struct TYPE_6__ {int udev; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct octusb_std_temp*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_7)
{
 struct octusb_std_temp VAR_8;
 struct octusb_td *VAR_9;
 uint32_t VAR_10;

 FUNC_0(9, "addr=%d endpt=%d sumlen=%d speed=%d\n",
     VAR_7->address, FUNC_1(VAR_7->endpointno),
     VAR_7->sumlen, FUNC_3(VAR_7->xroot->udev));


 VAR_9 = VAR_7->td_start[0];
 VAR_7->td_transfer_first = VAR_9;
 VAR_7->td_transfer_cache = VAR_9;

 VAR_8.td = ((void*)0);
 VAR_8.td_next = VAR_9;
 VAR_8.setup_alt_next = VAR_7->flags_int.short_frames_ok;
 VAR_8.offset = 0;



 if (VAR_7->flags_int.control_xfr) {

  if (VAR_7->flags_int.control_hdr) {

   VAR_8.func = &VAR_3;
   VAR_8.len = VAR_7->frlengths[0];
   VAR_8.pc = VAR_7->frbuffers + 0;
   VAR_8.short_pkt = VAR_8.len ? 1 : 0;


   if (VAR_7->nframes == 1) {




    if (VAR_7->flags_int.control_act)
     VAR_8.setup_alt_next = 0;
   }
   FUNC_2(&VAR_8);
  }
  VAR_10 = 1;
 } else {
  VAR_10 = 0;
 }

 if (VAR_10 != VAR_7->nframes) {
  if (VAR_7->endpointno & VAR_0) {
   if (VAR_7->flags_int.control_xfr)
    VAR_8.func = &VAR_1;
   else
    VAR_8.func = &VAR_5;
  } else {
   if (VAR_7->flags_int.control_xfr)
    VAR_8.func = &VAR_2;
   else
    VAR_8.func = &VAR_6;
  }


  VAR_8.pc = VAR_7->frbuffers + VAR_10;
 }
 while (VAR_10 != VAR_7->nframes) {



  VAR_8.len = VAR_7->frlengths[VAR_10];

  VAR_10++;

  if (VAR_10 == VAR_7->nframes) {
   if (VAR_7->flags_int.control_xfr) {

    if (VAR_7->flags_int.control_act)
     VAR_8.setup_alt_next = 0;
   } else {
    VAR_8.setup_alt_next = 0;
   }
  }
  if (VAR_8.len == 0) {



   VAR_8.short_pkt = 0;

  } else {



   VAR_8.short_pkt = (VAR_7->flags.force_short_xfer) ? 0 : 1;
  }

  FUNC_2(&VAR_8);

  if (VAR_7->flags_int.isochronous_xfr) {

   VAR_8.offset += VAR_8.len;
  } else {

   VAR_8.pc = VAR_7->frbuffers + VAR_10;
  }
 }



 if (VAR_7->flags_int.control_xfr &&
     !VAR_7->flags_int.control_act) {

  VAR_8.func = &VAR_4;
  VAR_8.len = 0;
  VAR_8.pc = ((void*)0);
  VAR_8.short_pkt = 0;
  VAR_8.setup_alt_next = 0;

  FUNC_2(&VAR_8);
 }

 VAR_9 = VAR_8.td;
 VAR_7->td_transfer_last = VAR_9;



 VAR_9->qh->ep_allocated = 0;
 VAR_9->qh->ep_toggle_next = VAR_7->endpoint->toggle_next ? 1 : 0;
}
