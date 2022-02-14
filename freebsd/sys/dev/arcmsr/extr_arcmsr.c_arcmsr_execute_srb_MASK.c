
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; int target_lun; int status; int timeout; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int u_int8_t ;
struct CommandControlBlock {int srb_flags; int ccb_callout; int dm_segs_dmamap; union ccb* pccb; scalar_t__ acb; } ;
struct AdapterControlBlock {int pci_unit; int acb_flags; scalar_t__** devstate; scalar_t__ srboutstandingcount; scalar_t__ maxOutstanding; int psim; int dm_segs_dmat; int pktRequestCount; } ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct CommandControlBlock*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct AdapterControlBlock*,struct CommandControlBlock*) ;
 int FUNC_3 (struct CommandControlBlock*,int ) ;
 int VAR_16 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int,int ,int ,struct CommandControlBlock*,int ) ;
 int FUNC_6 (char*,int,...) ;
 int* FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(void *VAR_17, bus_dma_segment_t *VAR_18, int VAR_19, int VAR_20)
{
 struct CommandControlBlock *VAR_21 = (struct CommandControlBlock *)VAR_17;
 struct AdapterControlBlock *VAR_22 = (struct AdapterControlBlock *)VAR_21->acb;
 union ccb *VAR_23;
 int VAR_24, VAR_25;

 VAR_23 = VAR_21->pccb;
 VAR_24 = VAR_23->ccb_h.target_id;
 VAR_25 = VAR_23->ccb_h.target_lun;
 VAR_22->pktRequestCount++;
 if(VAR_20 != 0) {
  if(VAR_20 != VAR_13) {
   FUNC_6("arcmsr%d: unexpected error %x"
    " returned from 'bus_dmamap_load' \n"
    , VAR_22->pci_unit, VAR_20);
  }
  if((VAR_23->ccb_h.status & VAR_11) == VAR_7) {
   VAR_23->ccb_h.status |= VAR_8;
  }
  FUNC_3(VAR_21, 0);
  return;
 }
 if(VAR_19 > VAR_2) {
  VAR_23->ccb_h.status |= VAR_8;
  FUNC_3(VAR_21, 0);
  return;
 }
 if(VAR_22->acb_flags & VAR_0) {
  FUNC_6("arcmsr%d: bus reset and return busy \n", VAR_22->pci_unit);
  VAR_23->ccb_h.status |= VAR_9;
  FUNC_3(VAR_21, 0);
  return;
 }
 if(VAR_22->devstate[VAR_24][VAR_25] == VAR_4) {
  u_int8_t VAR_26, VAR_27;

  VAR_27 = FUNC_7(&VAR_23->csio)[0];
  VAR_26 = VAR_27 & 0x0f;
  if(VAR_26 == 0x08 || VAR_26 == 0x0a) {
   FUNC_6("arcmsr%d:block 'read/write' command "
    "with gone raid volume Cmd=0x%2x, TargetId=%d, Lun=%d \n"
    , VAR_22->pci_unit, VAR_27, VAR_24, VAR_25);
   VAR_23->ccb_h.status |= VAR_5;
   FUNC_3(VAR_21, 0);
   return;
  }
 }
 if((VAR_23->ccb_h.status & VAR_11) != VAR_7) {
  if(VAR_19 != 0) {
   FUNC_4(VAR_22->dm_segs_dmat, VAR_21->dm_segs_dmamap);
  }
  FUNC_3(VAR_21, 0);
  return;
 }
 if(VAR_22->srboutstandingcount >= VAR_22->maxOutstanding) {
  if((VAR_22->acb_flags & VAR_1) == 0)
  {
   FUNC_8(VAR_22->psim, 1);
   VAR_22->acb_flags |= VAR_1;
  }
  VAR_23->ccb_h.status &= ~VAR_10;
  VAR_23->ccb_h.status |= VAR_6;
  FUNC_3(VAR_21, 0);
  return;
 }
 VAR_23->ccb_h.status |= VAR_10;
 FUNC_0(VAR_21, VAR_18, VAR_19);
 FUNC_2(VAR_22, VAR_21);
 if (VAR_23->ccb_h.timeout != VAR_12)
 {
  FUNC_1(&VAR_21->ccb_callout);
  FUNC_5(&VAR_21->ccb_callout, VAR_14 *
      (VAR_23->ccb_h.timeout + (VAR_3 * 1000)), 0,
      VAR_16, VAR_21, 0);
  VAR_21->srb_flags |= VAR_15;
 }
}
