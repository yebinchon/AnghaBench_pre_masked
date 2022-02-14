
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; } ;
union mfi_frame {TYPE_1__ header; } ;
struct mfi_softc {int mfi_max_fw_cmds; int mfi_cmd_size; struct mfi_command* mfi_commands; int mfi_buffer_dmat; int mfi_dev; int mfi_io_lock; scalar_t__ mfi_sense_busaddr; int * mfi_sense; scalar_t__ mfi_frames_busaddr; scalar_t__ mfi_frames; } ;
struct mfi_command {int cm_index; int cm_dmamap; struct mfi_softc* cm_sc; scalar_t__ cm_sense_busaddr; int * cm_sense; union mfi_frame* cm_frame; scalar_t__ cm_frame_busaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct mfi_command*,int ) ;
 struct mfi_command* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct mfi_command*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct mfi_softc *VAR_5)
{
 struct mfi_command *VAR_6;
 int VAR_7, VAR_8;





 VAR_5->mfi_commands = FUNC_4(sizeof(VAR_5->mfi_commands[0]) *
     VAR_5->mfi_max_fw_cmds, VAR_2, VAR_3 | VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_5->mfi_max_fw_cmds; VAR_7++) {
  VAR_6 = &VAR_5->mfi_commands[VAR_7];
  VAR_6->cm_frame = (union mfi_frame *)((uintptr_t)VAR_5->mfi_frames +
      VAR_5->mfi_cmd_size * VAR_7);
  VAR_6->cm_frame_busaddr = VAR_5->mfi_frames_busaddr +
      VAR_5->mfi_cmd_size * VAR_7;
  VAR_6->cm_frame->header.context = VAR_7;
  VAR_6->cm_sense = &VAR_5->mfi_sense[VAR_7];
  VAR_6->cm_sense_busaddr= VAR_5->mfi_sense_busaddr + VAR_1 * VAR_7;
  VAR_6->cm_sc = VAR_5;
  VAR_6->cm_index = VAR_7;
  if (FUNC_0(VAR_5->mfi_buffer_dmat, 0,
      &VAR_6->cm_dmamap) == 0) {
   FUNC_6(&VAR_5->mfi_io_lock);
   FUNC_5(VAR_6);
   FUNC_7(&VAR_5->mfi_io_lock);
  } else {
   FUNC_2(VAR_5->mfi_dev, "Failed to allocate %d "
      "command blocks, only allocated %d\n",
       VAR_5->mfi_max_fw_cmds, VAR_7 - 1);
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
    VAR_6 = &VAR_5->mfi_commands[VAR_7];
    FUNC_1(VAR_5->mfi_buffer_dmat,
        VAR_6->cm_dmamap);
   }
   FUNC_3(VAR_5->mfi_commands, VAR_2);
   VAR_5->mfi_commands = ((void*)0);

   return (VAR_0);
  }
 }

 return (0);
}
