
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_cmd_tbolt_tqh; int mfi_max_fw_cmds; int mfi_io_lock; } ;
struct mfi_command {scalar_t__ cm_extra_frames; int cm_flags; } ;
struct mfi_cmd_tbolt {int sync_cmd_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mfi_cmd_tbolt*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;

void
FUNC_2(struct mfi_softc *VAR_3, struct mfi_cmd_tbolt *VAR_4,
    struct mfi_command *VAR_5)
{
 FUNC_1(&VAR_3->mfi_io_lock, VAR_0);

 VAR_5->cm_flags &= ~VAR_1;
 VAR_5->cm_extra_frames = 0;
 VAR_4->sync_cmd_idx = VAR_3->mfi_max_fw_cmds;

 FUNC_0(&VAR_3->mfi_cmd_tbolt_tqh, VAR_4, VAR_2);
}
