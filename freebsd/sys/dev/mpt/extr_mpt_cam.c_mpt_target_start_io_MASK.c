
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int status; int flags; TYPE_3__* ccb_req_ptr; } ;
struct TYPE_16__ {int target_lun; int flags; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; scalar_t__ resid; scalar_t__ scsi_status; int sense_len; int sense_data; int tag_id; TYPE_1__ ccb_h; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_scsiio csio; } ;
struct mpt_softc {int outofbeer; int scsi_tgt_handler_id; int sim; int buffer_dmat; scalar_t__ is_spi; scalar_t__ is_sas; } ;
struct TYPE_18__ {int index; int dmap; int serno; TYPE_5__* req_vbuf; union ccb* ccb; } ;
typedef TYPE_3__ request_t ;
struct TYPE_19__ {int state; int reply_desc; scalar_t__ resid; int bytes_xfered; TYPE_3__* req; union ccb* ccb; } ;
typedef TYPE_4__ mpt_tgt_state_t ;
typedef int bus_dmamap_callback_t ;
typedef int bus_addr_t ;
struct TYPE_20__ {scalar_t__ DataLength; int TargetAssistFlags; int RelativeOffset; int LUN; void* ReplyWord; void* MsgContext; int Function; int Tag; int QueueTag; int InitiatorTag; } ;
typedef TYPE_5__* PTR_MSG_TARGET_ASSIST_REQUEST ;
typedef TYPE_5__* PTR_MPI_TARGET_SSP_CMD_BUFFER ;
typedef TYPE_5__* PTR_MPI_TARGET_SCSI_SPI_CMD_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct mpt_softc*) ;
 TYPE_3__* FUNC_3 (struct mpt_softc*,int ) ;
 TYPE_4__* FUNC_4 (struct mpt_softc*,TYPE_3__*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int VAR_18 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,union ccb*,int *,TYPE_3__*,int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*,int ,int ) ;
 int * VAR_19 ;
 int * VAR_20 ;
 TYPE_3__* FUNC_9 (struct mpt_softc*,int ) ;
 int FUNC_10 (struct mpt_softc*,int ,char*,...) ;
 int FUNC_11 (struct mpt_softc*,char*,union ccb*,int ,int ) ;
 int FUNC_12 (struct mpt_softc*,union ccb*,TYPE_3__*,scalar_t__,void*,int ) ;
 int FUNC_13 (union ccb*,int ) ;
 int FUNC_14 (struct mpt_softc*,TYPE_3__*) ;
 int FUNC_15 (union ccb*) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static void
FUNC_17(struct mpt_softc *VAR_21, union ccb *VAR_22)
{
 struct ccb_scsiio *VAR_23 = &VAR_22->csio;
 request_t *VAR_24 = FUNC_3(VAR_21, VAR_23->tag_id);
 mpt_tgt_state_t *VAR_25 = FUNC_4(VAR_21, VAR_24);

 switch (VAR_25->state) {
 case 129:
  break;
 case 128:
  FUNC_13(VAR_22, VAR_4);
  FUNC_16(VAR_21->sim, 1);
  VAR_22->ccb_h.status &= ~VAR_10;
  VAR_25->ccb->ccb_h.status |= VAR_3;
  FUNC_15(VAR_22);
  return;
 default:
  FUNC_11(VAR_21, "ccb %p flags 0x%x tag 0x%08x had bad request "
      "starting I/O\n", VAR_22, VAR_23->ccb_h.flags, VAR_23->tag_id);
  FUNC_14(VAR_21, VAR_24);
  FUNC_13(VAR_22, VAR_6);
  FUNC_15(VAR_22);
  return;
 }

 if (VAR_23->dxfer_len) {
  bus_dmamap_callback_t *VAR_26;
  PTR_MSG_TARGET_ASSIST_REQUEST VAR_27;
  request_t *VAR_28;
  int VAR_29;

  FUNC_1((VAR_22->ccb_h.flags & VAR_1) != VAR_2,
      ("dxfer_len %u but direction is NONE", VAR_23->dxfer_len));

  if ((VAR_28 = FUNC_9(VAR_21, VAR_12)) == ((void*)0)) {
   if (VAR_21->outofbeer == 0) {
    VAR_21->outofbeer = 1;
    FUNC_16(VAR_21->sim, 1);
    FUNC_10(VAR_21, VAR_14, "FREEZEQ\n");
   }
   VAR_22->ccb_h.status &= ~VAR_10;
   FUNC_13(VAR_22, VAR_4);
   FUNC_15(VAR_22);
   return;
  }
  VAR_22->ccb_h.status = VAR_10 | VAR_7;
  if (sizeof (bus_addr_t) > 4) {
   VAR_26 = VAR_20;
  } else {
   VAR_26 = VAR_19;
  }

  VAR_28->ccb = VAR_22;
  VAR_22->ccb_h.ccb_req_ptr = VAR_28;





  VAR_25->ccb = VAR_22;
  VAR_25->req = VAR_28;

  FUNC_8(VAR_28->req_vbuf, 0, FUNC_2(VAR_21));
  VAR_27 = VAR_28->req_vbuf;

  if (VAR_21->is_sas) {
   PTR_MPI_TARGET_SSP_CMD_BUFFER VAR_30 =
        VAR_24->req_vbuf;
   VAR_27->QueueTag = VAR_30->InitiatorTag;
  } else if (VAR_21->is_spi) {
   PTR_MPI_TARGET_SCSI_SPI_CMD_BUFFER VAR_31 =
        VAR_24->req_vbuf;
   VAR_27->QueueTag = VAR_31->Tag;
  }
  VAR_27->Function = VAR_13;
  VAR_27->MsgContext = FUNC_7(VAR_28->index | VAR_21->scsi_tgt_handler_id);
  VAR_27->ReplyWord = FUNC_7(VAR_25->reply_desc);
  FUNC_5(VAR_27->LUN, FUNC_0(VAR_23->ccb_h.target_lun));

  VAR_27->RelativeOffset = VAR_25->bytes_xfered;
  VAR_27->DataLength = VAR_22->csio.dxfer_len;
  if (VAR_27->DataLength > VAR_25->resid) {
   VAR_27->DataLength = VAR_25->resid;
  }




  VAR_23->resid = VAR_23->dxfer_len - VAR_27->DataLength;
  VAR_25->resid -= VAR_23->dxfer_len;
  VAR_25->bytes_xfered += VAR_23->dxfer_len;

  if ((VAR_22->ccb_h.flags & VAR_1) == VAR_0) {
   VAR_27->TargetAssistFlags |=
       VAR_17;
  }
  VAR_25->state = VAR_18;

  FUNC_10(VAR_21, VAR_14,
      "DATA_CCB %p tag %x %u bytes %u resid flg %x req %p:%u "
      "nxtstate=%d\n", VAR_23, VAR_23->tag_id, VAR_23->dxfer_len,
      VAR_25->resid, VAR_22->ccb_h.flags, VAR_28, VAR_28->serno, VAR_25->state);

  VAR_29 = FUNC_6(VAR_21->buffer_dmat, VAR_28->dmap, VAR_22,
      VAR_26, VAR_28, 0);
  if (VAR_29 == VAR_11) {
   FUNC_16(VAR_21->sim, 1);
   VAR_22->ccb_h.status |= VAR_3;
  }
 } else {






  if ((VAR_22->ccb_h.flags & VAR_9) == 0) {
   FUNC_10(VAR_21, VAR_14,
       "Meaningless STATUS CCB (%p): flags %x status %x "
       "resid %d bytes_xfered %u\n", VAR_22, VAR_22->ccb_h.flags,
       VAR_22->ccb_h.status, VAR_25->resid, VAR_25->bytes_xfered);
   FUNC_13(VAR_22, VAR_5);
   VAR_22->ccb_h.status &= ~VAR_10;
   FUNC_15(VAR_22);
   return;
  }
  FUNC_12(VAR_21, VAR_22, VAR_24, VAR_23->scsi_status,
      (void *)&VAR_23->sense_data,
      (VAR_22->ccb_h.flags & VAR_8) ?
       VAR_23->sense_len : 0);
 }
}
