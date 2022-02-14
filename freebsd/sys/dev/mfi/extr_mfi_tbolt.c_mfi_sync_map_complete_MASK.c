
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_softc {int * mfi_map_sync_cm; scalar_t__ cm_map_abort; int mfi_io_lock; } ;
struct mfi_frame_header {scalar_t__ cmd_status; } ;
struct mfi_command {int cm_data; TYPE_1__* cm_frame; struct mfi_softc* cm_sc; } ;
struct TYPE_2__ {struct mfi_frame_header header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mfi_softc*) ;
 int FUNC_2 (struct mfi_command*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int **) ;

__attribute__((used)) static void
FUNC_5(struct mfi_command *VAR_3)
{
 struct mfi_frame_header *VAR_4;
 struct mfi_softc *VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_3->cm_sc;
 FUNC_3(&VAR_5->mfi_io_lock, VAR_0);

 VAR_4 = &VAR_3->cm_frame->header;

 if (VAR_5->mfi_map_sync_cm == ((void*)0))
  return;

 if (VAR_5->cm_map_abort ||
     VAR_4->cmd_status == VAR_1) {
  VAR_5->cm_map_abort = 0;
  VAR_6 = 1;
 }

 FUNC_0(VAR_3->cm_data, VAR_2);
 FUNC_4(&VAR_5->mfi_map_sync_cm);
 VAR_5->mfi_map_sync_cm = ((void*)0);
 FUNC_2(VAR_3);


 if (!VAR_6)
  FUNC_1(VAR_5);
}
