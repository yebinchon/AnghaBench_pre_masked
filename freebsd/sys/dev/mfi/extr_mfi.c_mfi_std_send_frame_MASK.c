
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_softc {int mfi_dev; int (* mfi_issue_cmd ) (struct mfi_softc*,int ,int) ;} ;
struct mfi_frame_header {scalar_t__ cmd_status; int flags; } ;
struct mfi_command {int cm_flags; int cm_extra_frames; TYPE_2__* cm_frame; int cm_frame_busaddr; int cm_timestamp; } ;
struct TYPE_3__ {int opcode; } ;
struct TYPE_4__ {TYPE_1__ dcmd; struct mfi_frame_header header; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,struct mfi_frame_header*,int ) ;
 int FUNC_2 (struct mfi_command*) ;
 int VAR_4 ;
 int FUNC_3 (struct mfi_softc*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct mfi_softc *VAR_6, struct mfi_command *VAR_7)
{
 struct mfi_frame_header *VAR_8;
 int VAR_9 = VAR_4 * 1000;

 VAR_8 = &VAR_7->cm_frame->header;

 if ((VAR_7->cm_flags & VAR_1) == 0) {
  VAR_7->cm_timestamp = VAR_5;
  FUNC_2(VAR_7);
 } else {
  VAR_8->cmd_status = VAR_3;
  VAR_8->flags |= VAR_2;
 }
 if (VAR_7->cm_extra_frames > 7)
  VAR_7->cm_extra_frames = 7;

 VAR_6->mfi_issue_cmd(VAR_6, VAR_7->cm_frame_busaddr, VAR_7->cm_extra_frames);

 if ((VAR_7->cm_flags & VAR_1) == 0)
  return (0);


 while (VAR_8->cmd_status == VAR_3) {
  FUNC_0(1000);
  VAR_9 -= 1;
  if (VAR_9 <= 0)
   break;
 }

 if (VAR_8->cmd_status == VAR_3) {
  FUNC_1(VAR_6->mfi_dev, "Frame %p timed out "
      "command 0x%X\n", VAR_8, VAR_7->cm_frame->dcmd.opcode);
  return (VAR_0);
 }

 return (0);
}
