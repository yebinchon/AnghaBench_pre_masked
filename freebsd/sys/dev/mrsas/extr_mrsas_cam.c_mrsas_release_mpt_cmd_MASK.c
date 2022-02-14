
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int32_t ;
struct mrsas_softc {int mpt_cmd_pool_lock; int mrsas_mpt_cmd_list_head; } ;
struct mrsas_mpt_cmd {scalar_t__ io_request; scalar_t__ cmd_completed; int * peer_cmd; scalar_t__ sync_cmd_idx; int r1_alt_dev_handle; struct mrsas_softc* sc; } ;
typedef int MRSAS_RAID_SCSI_IO_REQUEST ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mrsas_mpt_cmd*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

void
FUNC_4(struct mrsas_mpt_cmd *VAR_3)
{
 struct mrsas_softc *VAR_4 = VAR_3->sc;

 FUNC_2(&VAR_4->mpt_cmd_pool_lock);
 VAR_3->r1_alt_dev_handle = VAR_1;
 VAR_3->sync_cmd_idx = (u_int32_t)VAR_0;
 VAR_3->peer_cmd = ((void*)0);
 VAR_3->cmd_completed = 0;
 FUNC_1((uint8_t *)VAR_3->io_request, 0,
  sizeof(MRSAS_RAID_SCSI_IO_REQUEST));
 FUNC_0(&(VAR_4->mrsas_mpt_cmd_list_head), VAR_3, VAR_2);
 FUNC_3(&VAR_4->mpt_cmd_pool_lock);

 return;
}
