
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
struct mrsas_softc {int max_fw_cmds; int reply_q_depth; int request_alloc_sz; int reply_alloc_sz; int io_frames_alloc_sz; int max_chain_frame_sz; int chain_frames_alloc_sz; int max_sge_in_main_msg; int max_sge_in_chain; int max_num_sge; int chain_offset_mfi_pthru; int chain_offset_io_request; int msix_vectors; scalar_t__* last_reply_idx; scalar_t__ max_scsi_cmds; } ;
typedef int MRSAS_REQUEST_DESCRIPTOR_UNION ;
typedef int MPI2_SGE_IO_UNION ;
typedef int MPI2_REPLY_DESCRIPTORS_UNION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mrsas_softc*) ;
 int FUNC_1 (struct mrsas_softc*) ;
 int FUNC_2 (struct mrsas_softc*,int ,char*,int,int,int) ;
 int FUNC_3 (struct mrsas_softc*) ;
 void* FUNC_4 (struct mrsas_softc*,int) ;
 int VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_6(struct mrsas_softc *VAR_14)
{
 uint32_t VAR_15;
 u_int32_t VAR_16;
 int VAR_17;
 int VAR_18 = 0;


 VAR_15 = FUNC_4(VAR_14, FUNC_5(VAR_11, VAR_12));

 VAR_14->max_fw_cmds = VAR_15 & VAR_4;


 VAR_14->max_fw_cmds = VAR_14->max_fw_cmds - 1;
 VAR_14->max_scsi_cmds = VAR_14->max_fw_cmds - VAR_6;


 VAR_14->reply_q_depth = ((VAR_14->max_fw_cmds + 1 + 15) / 16 * 16) * 2;
 VAR_14->request_alloc_sz = sizeof(MRSAS_REQUEST_DESCRIPTOR_UNION) * VAR_14->max_fw_cmds;
 VAR_14->reply_alloc_sz = sizeof(MPI2_REPLY_DESCRIPTORS_UNION) * (VAR_14->reply_q_depth);
 VAR_14->io_frames_alloc_sz = VAR_7 +
     (VAR_7 * (VAR_14->max_fw_cmds + 1));
 VAR_16 = FUNC_4(VAR_14, FUNC_5(VAR_11,
     VAR_13));






 if (VAR_16 & VAR_3)
  VAR_14->max_chain_frame_sz =
      ((VAR_16 & VAR_2) >> 5)
      * VAR_0;
 else
  VAR_14->max_chain_frame_sz =
      ((VAR_16 & VAR_2) >> 5)
      * VAR_1;

 VAR_14->chain_frames_alloc_sz = VAR_14->max_chain_frame_sz * VAR_14->max_fw_cmds;
 VAR_14->max_sge_in_main_msg = (VAR_7 -
     FUNC_5(VAR_8, VAR_9)) / 16;

 VAR_14->max_sge_in_chain = VAR_14->max_chain_frame_sz / sizeof(MPI2_SGE_IO_UNION);
 VAR_14->max_num_sge = VAR_14->max_sge_in_main_msg + VAR_14->max_sge_in_chain - 2;

 FUNC_2(VAR_14, VAR_5,
     "max sge: 0x%x, max chain frame size: 0x%x, "
     "max fw cmd: 0x%x\n", VAR_14->max_num_sge,
     VAR_14->max_chain_frame_sz, VAR_14->max_fw_cmds);


 VAR_14->chain_offset_mfi_pthru = FUNC_5(VAR_8, VAR_9) / 16;

 VAR_14->chain_offset_io_request = (VAR_7 -
     sizeof(MPI2_SGE_IO_UNION)) / 16;

 int VAR_19 = VAR_14->msix_vectors > 0 ? VAR_14->msix_vectors : 1;

 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
  VAR_14->last_reply_idx[VAR_18] = 0;

 VAR_17 = FUNC_0(VAR_14);
 if (VAR_17 != VAR_10)
  return (VAR_17);

 VAR_17 = FUNC_1(VAR_14);
 if (VAR_17 != VAR_10)
  return (VAR_17);

 VAR_17 = FUNC_3(VAR_14);
 if (VAR_17 != VAR_10)
  return (VAR_17);

 return (0);
}
