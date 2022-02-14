
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {size_t DataLength; int Address; int TargetAssistFlags; int * SGL; scalar_t__ RelativeOffset; int LUN; void* ReplyWord; void* MsgContext; int Function; int Tag; int QueueTag; int InitiatorTag; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
struct mpt_softc {int scsi_tgt_handler_id; scalar_t__ is_spi; scalar_t__ is_sas; } ;
struct TYPE_21__ {int index; int req_pbuf; TYPE_1__* req_vbuf; } ;
typedef TYPE_2__ request_t ;
struct TYPE_22__ {scalar_t__ resid; int is_local; int reply_desc; size_t bytes_xfered; int state; TYPE_2__* req; int * ccb; } ;
typedef TYPE_3__ mpt_tgt_state_t ;
typedef int lun_id_t ;
typedef int bus_addr_t ;
typedef TYPE_1__ SGE_SIMPLE32 ;
typedef TYPE_1__* PTR_MSG_TARGET_ASSIST_REQUEST ;
typedef TYPE_1__* PTR_MPI_TARGET_SSP_CMD_BUFFER ;
typedef TYPE_1__* PTR_MPI_TARGET_SCSI_SPI_CMD_BUFFER ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (struct mpt_softc*) ;
 TYPE_3__* FUNC_4 (struct mpt_softc*,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (size_t,int) ;
 TYPE_2__* FUNC_10 (struct mpt_softc*,int ) ;
 int FUNC_11 (struct mpt_softc*,char*) ;
 int FUNC_12 (struct mpt_softc*,int *,TYPE_2__*,int ,int *,int ) ;
 int FUNC_13 (struct mpt_softc*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14(struct mpt_softc *VAR_10, request_t *VAR_11,
    lun_id_t VAR_12, int VAR_13, uint8_t *VAR_14, size_t VAR_15)
{
 mpt_tgt_state_t *VAR_16;
 PTR_MSG_TARGET_ASSIST_REQUEST VAR_17;
 SGE_SIMPLE32 *VAR_18;
 uint32_t VAR_19;
 uint8_t *VAR_20;
 bus_addr_t VAR_21;
 request_t *VAR_22;




 VAR_16 = FUNC_4(VAR_10, VAR_11);
 if (VAR_15 == 0 || VAR_16->resid == 0) {
  VAR_16->resid = 0;
  FUNC_12(VAR_10, ((void*)0), VAR_11, 0, ((void*)0), 0);
  return;
 }

 if ((VAR_22 = FUNC_10(VAR_10, VAR_0)) == ((void*)0)) {
  FUNC_11(VAR_10, "out of resources- dropping local response\n");
  return;
 }
 VAR_16->is_local = 1;


 FUNC_8(VAR_22->req_vbuf, 0, FUNC_3(VAR_10));
 VAR_17 = VAR_22->req_vbuf;

 if (VAR_10->is_sas) {
  PTR_MPI_TARGET_SSP_CMD_BUFFER VAR_23 = VAR_11->req_vbuf;
  VAR_17->QueueTag = VAR_23->InitiatorTag;
 } else if (VAR_10->is_spi) {
  PTR_MPI_TARGET_SCSI_SPI_CMD_BUFFER VAR_24 = VAR_11->req_vbuf;
  VAR_17->QueueTag = VAR_24->Tag;
 }
 VAR_17->Function = VAR_1;
 VAR_17->MsgContext = FUNC_6(VAR_22->index | VAR_10->scsi_tgt_handler_id);
 VAR_17->ReplyWord = FUNC_6(VAR_16->reply_desc);
 FUNC_5(VAR_17->LUN, FUNC_0(VAR_12));
 VAR_17->RelativeOffset = 0;
 VAR_17->DataLength = VAR_15;

 VAR_20 = VAR_22->req_vbuf;
 VAR_20 += FUNC_3(VAR_10);
 VAR_21 = VAR_22->req_pbuf;
 VAR_21 += FUNC_3(VAR_10);
 FUNC_7(VAR_20, VAR_14, FUNC_9(VAR_15, FUNC_3(VAR_10)));

 VAR_18 = (SGE_SIMPLE32 *) &VAR_17->SGL[0];
 FUNC_8(VAR_18, 0,sizeof (*VAR_18));

 VAR_19 = VAR_6;
 if (VAR_13) {
  VAR_17->TargetAssistFlags |= VAR_7;
  VAR_19 |= VAR_4;
 }
 VAR_18->Address = VAR_21;
 FUNC_2(VAR_18, VAR_15);
 VAR_19 |= VAR_5;
 VAR_19 |= VAR_3 | VAR_2;
 FUNC_1(VAR_18, VAR_19);

 VAR_16->ccb = ((void*)0);
 VAR_16->req = VAR_22;
 VAR_16->resid -= VAR_15;
 VAR_16->bytes_xfered = VAR_15;



 VAR_16->state = VAR_8;

 FUNC_13(VAR_10, VAR_22);
}
