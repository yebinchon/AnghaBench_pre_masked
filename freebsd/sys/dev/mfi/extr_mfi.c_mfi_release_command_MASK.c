
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mfi_frame_header {scalar_t__ sg_count; } ;
struct mfi_command {int cm_flags; int cm_extra_frames; scalar_t__ retry_for_fw_reset; scalar_t__ cm_total_frame_size; TYPE_3__* cm_sg; int * cm_data; int * cm_private; int * cm_complete; TYPE_2__* cm_frame; TYPE_4__* cm_sc; } ;
struct TYPE_8__ {int * mfi_cmd_pool_tbolt; int mfi_io_lock; } ;
struct TYPE_7__ {TYPE_1__* sg32; } ;
struct TYPE_6__ {struct mfi_frame_header header; } ;
struct TYPE_5__ {scalar_t__ addr; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mfi_command*) ;
 int FUNC_1 (struct mfi_command*) ;
 int FUNC_2 (struct mfi_command*) ;
 int FUNC_3 (TYPE_4__*,int ,struct mfi_command*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,struct mfi_command*,int) ;

void
FUNC_6(struct mfi_command *VAR_5)
{
 struct mfi_frame_header *VAR_6;
 uint32_t *VAR_7;

 FUNC_4(&VAR_5->cm_sc->mfi_io_lock, VAR_0);






 VAR_6 = &VAR_5->cm_frame->header;
 if (VAR_5->cm_data != ((void*)0) && VAR_6->sg_count) {
  VAR_5->cm_sg->sg32[0].len = 0;
  VAR_5->cm_sg->sg32[0].addr = 0;
 }






 if ((VAR_5->cm_flags & VAR_2) != 0)
  FUNC_1(VAR_5);
 if ((VAR_5->cm_flags & VAR_4) != 0)
  FUNC_2(VAR_5);


 if ((VAR_5->cm_flags & VAR_3) != 0) {
  FUNC_5("Command %p is still on another queue, flags = %#x",
      VAR_5, VAR_5->cm_flags);
 }


 if ((VAR_5->cm_flags & VAR_1) != 0) {
  FUNC_3(VAR_5->cm_sc,
      VAR_5->cm_sc->mfi_cmd_pool_tbolt[VAR_5->cm_extra_frames - 1],
      VAR_5);
 }

 VAR_7 = (uint32_t *)VAR_5->cm_frame;
 VAR_7[0] = 0;
 VAR_7[1] = 0;
 VAR_7[4] = 0;
 VAR_7[5] = 0;

 VAR_5->cm_extra_frames = 0;
 VAR_5->cm_flags = 0;
 VAR_5->cm_complete = ((void*)0);
 VAR_5->cm_private = ((void*)0);
 VAR_5->cm_data = ((void*)0);
 VAR_5->cm_sg = 0;
 VAR_5->cm_total_frame_size = 0;
 VAR_5->retry_for_fw_reset = 0;

 FUNC_0(VAR_5);
}
