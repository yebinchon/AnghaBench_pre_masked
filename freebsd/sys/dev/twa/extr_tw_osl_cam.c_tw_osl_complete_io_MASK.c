
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int scsi_status; int sense_len; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
struct twa_softc {int sim_lock; } ;
struct tw_osli_req_context {scalar_t__ state; scalar_t__ error_code; scalar_t__ deadline; scalar_t__ orig_req; struct twa_softc* ctlr; int req_pkt; } ;
struct tw_cl_scsi_req_packet {int scsi_status; int sense_len; } ;
struct TYPE_4__ {struct tw_cl_scsi_req_packet scsi_req; } ;
struct tw_cl_req_packet {int status; TYPE_1__ gen_req_pkt; } ;
struct tw_cl_req_handle {struct tw_osli_req_context* osl_req_ctxt; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct twa_softc*,char*) ;
 int FUNC_3 (struct twa_softc*,char*,int ,int ,int,char*,struct tw_osli_req_context*,scalar_t__) ;
 int FUNC_4 (struct tw_osli_req_context*,int ) ;
 int FUNC_5 (struct tw_osli_req_context*,int ) ;
 int FUNC_6 (struct tw_osli_req_context*) ;
 int FUNC_7 (union ccb*) ;

TW_VOID
FUNC_8(struct tw_cl_req_handle *VAR_24)
{
 struct tw_osli_req_context *VAR_25 = VAR_24->osl_req_ctxt;
 struct tw_cl_req_packet *VAR_26 =
  (struct tw_cl_req_packet *)(&VAR_25->req_pkt);
 struct tw_cl_scsi_req_packet *VAR_27;
 struct twa_softc *VAR_28 = VAR_25->ctlr;
 union ccb *VAR_29 = (union ccb *)(VAR_25->orig_req);

 FUNC_2(10, VAR_28, "entering");

 if (VAR_25->state != VAR_22)
  FUNC_3(VAR_28, "request = %p, status = %d",
   VAR_19,
   VAR_18,
   0x210A,
   "Unposted command completed!!",
   VAR_25, VAR_25->state);






 VAR_25->state = VAR_23;
 FUNC_5(VAR_25, VAR_20);

 FUNC_6(VAR_25);

 VAR_25->deadline = 0;
 if (VAR_25->error_code) {

  if (VAR_25->error_code == VAR_10) {





   VAR_29->ccb_h.status |= VAR_2;
  }
  else if (VAR_25->error_code == VAR_11)
   VAR_29->ccb_h.status = VAR_5;
  else
   VAR_29->ccb_h.status = VAR_4;
 } else {
  VAR_27 = &(VAR_26->gen_req_pkt.scsi_req);
  if (VAR_26->status == VAR_17)
   VAR_29->ccb_h.status = VAR_3;
  else {
   if (VAR_26->status & VAR_15)
    VAR_29->ccb_h.status |= VAR_8;
   else if (VAR_26->status & VAR_14)
    VAR_29->ccb_h.status |= VAR_1;
   else if (VAR_26->status & VAR_16)
    VAR_29->ccb_h.status |= VAR_7;
   else if (VAR_26->status & VAR_13)
    VAR_29->ccb_h.status |= (VAR_2 | VAR_6);




   if (VAR_29->ccb_h.status == 0)
    VAR_29->ccb_h.status = VAR_4;

   if (VAR_26->status & VAR_12) {
    VAR_29->csio.sense_len = VAR_27->sense_len;
    VAR_29->ccb_h.status |= VAR_0;
   }
  }

  VAR_29->csio.scsi_status = VAR_27->scsi_status;
 }

 VAR_29->ccb_h.status &= ~VAR_9;
 FUNC_0(VAR_28->sim_lock);
 FUNC_7(VAR_29);
 FUNC_1(VAR_28->sim_lock);
 if (! VAR_25->error_code)

  FUNC_4(VAR_25, VAR_21);
}
