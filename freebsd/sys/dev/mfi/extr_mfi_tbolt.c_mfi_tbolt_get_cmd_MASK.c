
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_softc {int mfi_cmd_tbolt_tqh; int mfi_io_lock; } ;
struct mfi_command {int cm_flags; int cm_extra_frames; int cm_index; } ;
struct mfi_cmd_tbolt {int index; int sync_cmd_idx; scalar_t__ io_request; scalar_t__ sg_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mfi_cmd_tbolt* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mfi_cmd_tbolt*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;

struct mfi_cmd_tbolt *
FUNC_4(struct mfi_softc *VAR_5, struct mfi_command *VAR_6)
{
 struct mfi_cmd_tbolt *VAR_7 = ((void*)0);

 FUNC_3(&VAR_5->mfi_io_lock, VAR_0);

 if ((VAR_7 = FUNC_0(&VAR_5->mfi_cmd_tbolt_tqh)) == ((void*)0))
  return (((void*)0));
 FUNC_1(&VAR_5->mfi_cmd_tbolt_tqh, VAR_7, VAR_4);
 FUNC_2((uint8_t *)VAR_7->sg_frame, 0, VAR_1);
 FUNC_2((uint8_t *)VAR_7->io_request, 0,
     VAR_2);

 VAR_7->sync_cmd_idx = VAR_6->cm_index;
 VAR_6->cm_extra_frames = VAR_7->index;
 VAR_6->cm_flags |= VAR_3;

 return VAR_7;
}
