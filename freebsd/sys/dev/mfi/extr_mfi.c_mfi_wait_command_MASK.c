
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mfi_softc {int mfi_io_lock; } ;
struct mfi_command {int cm_error; int cm_flags; TYPE_2__* cm_frame; int * cm_complete; } ;
struct TYPE_6__ {scalar_t__ opcode; } ;
struct TYPE_4__ {int cmd_status; } ;
struct TYPE_5__ {TYPE_1__ header; TYPE_3__ dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mfi_command*) ;
 int FUNC_1 (struct mfi_softc*) ;
 int FUNC_2 (struct mfi_command*,int *,int ,char*,int ) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(struct mfi_softc *VAR_4, struct mfi_command *VAR_5)
{

 FUNC_3(&VAR_4->mfi_io_lock, VAR_0);
 VAR_5->cm_complete = ((void*)0);





 if (VAR_5->cm_frame->dcmd.opcode == 0) {
  VAR_5->cm_frame->header.cmd_status = VAR_2;
  VAR_5->cm_error = 0;
  return (VAR_5->cm_error);
 }
 FUNC_0(VAR_5);
 FUNC_1(VAR_4);
 if ((VAR_5->cm_flags & VAR_1) == 0)
  FUNC_2(VAR_5, &VAR_4->mfi_io_lock, VAR_3, "mfiwait", 0);
 return (VAR_5->cm_error);
}
