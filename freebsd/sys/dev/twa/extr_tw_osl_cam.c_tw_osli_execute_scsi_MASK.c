
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * cdb_bytes; int * cdb_ptr; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; int data_ptr; int cdb_len; TYPE_2__ cdb_io; int sense_data; } ;
struct ccb_hdr {scalar_t__ target_id; scalar_t__ target_lun; int flags; int timeout; int status; int path_id; } ;
union ccb {struct ccb_scsiio csio; struct ccb_hdr ccb_h; } ;
typedef int uintmax_t ;
struct twa_softc {int dummy; } ;
struct tw_cl_scsi_req_packet {scalar_t__ unit; scalar_t__ lun; int sgl_entries; int cdb_len; int * cdb; scalar_t__ scsi_status; int * sense_data; scalar_t__ sense_len; } ;
struct TYPE_3__ {struct tw_cl_scsi_req_packet scsi_req; } ;
struct tw_cl_req_packet {TYPE_1__ gen_req_pkt; int tw_osl_callback; scalar_t__ status; } ;
struct tw_osli_req_context {int flags; scalar_t__ length; scalar_t__ deadline; int data; struct tw_cl_req_packet req_pkt; struct twa_softc* ctlr; } ;
typedef int TW_UINT8 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,struct twa_softc*,char*,int ,...) ;
 int FUNC_2 (struct tw_osli_req_context*) ;
 int FUNC_3 (struct twa_softc*,char*,int ,int ,int,char*,...) ;
 int FUNC_4 (union ccb*) ;

TW_INT32
FUNC_5(struct tw_osli_req_context *VAR_23, union ccb *VAR_24)
{
 struct twa_softc *VAR_25 = VAR_23->ctlr;
 struct tw_cl_req_packet *VAR_26;
 struct tw_cl_scsi_req_packet *VAR_27;
 struct ccb_hdr *VAR_28 = &(VAR_24->ccb_h);
 struct ccb_scsiio *VAR_29 = &(VAR_24->csio);
 TW_INT32 VAR_30;

 FUNC_1(10, VAR_25, "SCSI I/O request 0x%x",
  VAR_29->cdb_io.cdb_bytes[0]);

 if (VAR_28->target_id >= VAR_15) {
  FUNC_1(3, VAR_25, "Invalid target. PTL = %x %x %jx",
   VAR_28->path_id, VAR_28->target_id,
   (uintmax_t)VAR_28->target_lun);
  VAR_28->status |= VAR_12;
  FUNC_4(VAR_24);
  return(1);
 }
 if (VAR_28->target_lun >= VAR_14) {
  FUNC_1(3, VAR_25, "Invalid lun. PTL = %x %x %jx",
   VAR_28->path_id, VAR_28->target_id,
   (uintmax_t)VAR_28->target_lun);
  VAR_28->status |= VAR_7;
  FUNC_4(VAR_24);
  return(1);
 }

 if(VAR_28->flags & VAR_0) {
  FUNC_3(VAR_25, "",
   VAR_17,
   VAR_16,
   0x2105,
   "Physical CDB address!");
  VAR_28->status = VAR_9;
  FUNC_4(VAR_24);
  return(1);
 }





 VAR_28->status |= VAR_11;

 if((VAR_28->flags & VAR_5) != VAR_6) {
  if(VAR_28->flags & VAR_4)
   VAR_23->flags |= VAR_19;
  else
   VAR_23->flags |= VAR_20;
 }


 VAR_26 = &VAR_23->req_pkt;
 VAR_26->status = 0;
 VAR_26->tw_osl_callback = VAR_22;
 VAR_27 = &(VAR_26->gen_req_pkt.scsi_req);
 VAR_27->unit = VAR_28->target_id;
 VAR_27->lun = VAR_28->target_lun;
 VAR_27->sense_len = 0;
 VAR_27->sense_data = (TW_UINT8 *)(&VAR_29->sense_data);
 VAR_27->scsi_status = 0;
 if(VAR_28->flags & VAR_1)
  VAR_27->cdb = VAR_29->cdb_io.cdb_ptr;
 else
  VAR_27->cdb = VAR_29->cdb_io.cdb_bytes;
 VAR_27->cdb_len = VAR_29->cdb_len;

 if (VAR_29->dxfer_len > VAR_13) {
  FUNC_3(VAR_25, "size = %d",
   VAR_17,
   VAR_16,
   0x2106,
   "I/O size too big",
   VAR_29->dxfer_len);
  VAR_28->status = VAR_10;
  VAR_28->status &= ~VAR_11;
  FUNC_4(VAR_24);
  return(1);
 }
 if ((VAR_28->flags & VAR_2) == VAR_3) {
  if ((VAR_23->length = VAR_29->dxfer_len) != 0) {
   VAR_23->data = VAR_29->data_ptr;
   VAR_27->sgl_entries = 1;
  }
 } else
  VAR_23->flags |= VAR_18;
 VAR_23->deadline = FUNC_0() + (VAR_28->timeout / 1000);





 VAR_30 = FUNC_2(VAR_23);
 if ((VAR_30) && (VAR_23->flags & VAR_21)) {
  VAR_23->deadline = 0;
  VAR_28->status = VAR_8;
  VAR_28->status &= ~VAR_11;
  FUNC_4(VAR_24);
 }
 return(VAR_30);
}
