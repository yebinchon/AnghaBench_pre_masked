
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


typedef int u_int8_t ;
struct mrsas_softc {int max_sge_in_main_msg; int max_chain_frame_sz; int chain_offset_mfi_pthru; scalar_t__ is_aero; scalar_t__ is_ventura; scalar_t__ mrsas_gen3_ctrl; } ;
struct mrsas_mpt_cmd {int flags; TYPE_6__* io_request; int sync_cmd_idx; int index; } ;
struct TYPE_9__ {int smid; } ;
struct TYPE_10__ {TYPE_2__ context; } ;
struct mrsas_mfi_cmd {int frame_phys_addr; int index; TYPE_3__ cmd_id; TYPE_1__* frame; } ;
struct mrsas_header {int flags; } ;
typedef TYPE_5__* pMpi25IeeeSgeChain64_t ;
struct TYPE_14__ {int Flags; int Length; int Address; } ;
struct TYPE_11__ {int IeeeChain; } ;
struct TYPE_13__ {int SGLOffset0; int ChainOffset; int Function; TYPE_4__ SGL; } ;
struct TYPE_12__ {scalar_t__ Flags; } ;
struct TYPE_8__ {struct mrsas_header hdr; } ;
typedef TYPE_6__* PTR_MRSAS_RAID_SCSI_IO_REQUEST ;
typedef TYPE_7__ MPI25_IEEE_SGE_CHAIN64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mrsas_mpt_cmd* FUNC_0 (struct mrsas_softc*) ;
 int FUNC_1 (int ,int ) ;

u_int8_t
FUNC_2(struct mrsas_softc *VAR_6, struct mrsas_mfi_cmd *VAR_7)
{
 MPI25_IEEE_SGE_CHAIN64 *VAR_8;
 PTR_MRSAS_RAID_SCSI_IO_REQUEST VAR_9;
 struct mrsas_mpt_cmd *VAR_10;
 struct mrsas_header *VAR_11 = &VAR_7->frame->hdr;

 VAR_10 = FUNC_0(VAR_6);
 if (!VAR_10)
  return (1);


 VAR_7->cmd_id.context.smid = VAR_10->index;

 VAR_10->sync_cmd_idx = VAR_7->index;







 if (VAR_11->flags & VAR_1)
  VAR_10->flags = VAR_1;

 VAR_9 = VAR_10->io_request;

 if (VAR_6->mrsas_gen3_ctrl || VAR_6->is_ventura || VAR_6->is_aero) {
  pMpi25IeeeSgeChain64_t VAR_12 = (pMpi25IeeeSgeChain64_t)&VAR_9->SGL;

  VAR_12 += VAR_6->max_sge_in_main_msg - 1;
  VAR_12->Flags = 0;
 }
 VAR_8 = (MPI25_IEEE_SGE_CHAIN64 *) & VAR_9->SGL.IeeeChain;

 VAR_9->Function = VAR_3;
 VAR_9->SGLOffset0 = FUNC_1(VAR_4, VAR_5) / 4;
 VAR_9->ChainOffset = VAR_6->chain_offset_mfi_pthru;

 VAR_8->Address = VAR_7->frame_phys_addr;

 VAR_8->Flags = VAR_0 |
     VAR_2;

 VAR_8->Length = VAR_6->max_chain_frame_sz;

 return (0);
}
