
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; int status; scalar_t__ ccb_trmacb_ptr; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef void* u_long ;
struct TYPE_10__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_13__ {TYPE_3__* pFreeSRB; int buffer_dmat; } ;
struct TYPE_12__ {void* length; int address; } ;
struct TYPE_11__ {int SRBSGCount; struct TYPE_11__* pNextSRB; int dmamap; int ScsiPhase; scalar_t__ SRBState; scalar_t__ SRBFlag; scalar_t__ SRBStatus; scalar_t__ MsgCnt; scalar_t__ TargetStatus; scalar_t__ AdaptStatus; scalar_t__ SRBSGIndex; void* SRBTotalXferLength; scalar_t__ RetryCnt; TYPE_4__* pSRBSGL; union ccb* pccb; } ;
typedef TYPE_3__* PSRB ;
typedef TYPE_4__* PSEG ;
typedef TYPE_5__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_7, bus_dma_segment_t *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 PACB VAR_12;
 PSRB VAR_13;
 union ccb *VAR_14;
 u_long VAR_15=0;

 VAR_11 = FUNC_3();
 VAR_13 = (PSRB)VAR_7;
 VAR_14 = VAR_13->pccb;
 VAR_12 = (PACB)VAR_14->ccb_h.ccb_trmacb_ptr;
 FUNC_0("trm_ExecuteSRB..........\n");
 if (VAR_9 != 0) {
  PSEG VAR_16;
  bus_dma_segment_t *VAR_17;
  int VAR_18;


  VAR_17 = VAR_8 + VAR_9;
  VAR_16 = VAR_13->pSRBSGL;
  while (VAR_8 < VAR_17) {
   VAR_16->address = VAR_8->ds_addr;
   VAR_16->length = (u_long)VAR_8->ds_len;
   VAR_15 += VAR_8->ds_len;
   VAR_16++;
   VAR_8++;
  }
  if ((VAR_14->ccb_h.flags & VAR_3) == VAR_2) {
   VAR_18 = VAR_0;
  } else {
   VAR_18 = VAR_1;
  }
  FUNC_1(VAR_12->buffer_dmat, VAR_13->dmamap, VAR_18);
 }
 VAR_13->RetryCnt = 0;
 VAR_13->SRBTotalXferLength = VAR_15;
 VAR_13->SRBSGCount = VAR_9;
 VAR_13->SRBSGIndex = 0;
 VAR_13->AdaptStatus = 0;
 VAR_13->TargetStatus = 0;
 VAR_13->MsgCnt = 0;
 VAR_13->SRBStatus = 0;
 VAR_13->SRBFlag = 0;
 VAR_13->SRBState = 0;
 VAR_13->ScsiPhase = VAR_6;

 if (VAR_14->ccb_h.status != VAR_4) {
  if (VAR_9 != 0)
   FUNC_2(VAR_12->buffer_dmat, VAR_13->dmamap);
  VAR_13->pNextSRB = VAR_12->pFreeSRB;
  VAR_12->pFreeSRB = VAR_13;
  FUNC_6(VAR_14);
  FUNC_4(VAR_11);
  return;
 }
 VAR_14->ccb_h.status |= VAR_5;
 FUNC_5(VAR_12, VAR_13);
 FUNC_4(VAR_11);
 return;
}
