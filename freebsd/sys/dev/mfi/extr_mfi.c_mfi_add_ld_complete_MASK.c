
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_softc {int mfi_io_lock; int mfi_dev; int mfi_map_sync_cm; scalar_t__ cm_map_abort; } ;
struct mfi_ld_info {int dummy; } ;
struct mfi_frame_header {scalar_t__ cmd_status; } ;
struct mfi_command {struct mfi_ld_info* cm_private; TYPE_1__* cm_frame; struct mfi_softc* cm_sc; } ;
typedef int * device_t ;
struct TYPE_2__ {struct mfi_frame_header header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct mfi_ld_info*) ;
 int FUNC_5 (struct mfi_ld_info*,int ) ;
 int FUNC_6 (struct mfi_command*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct mfi_command *VAR_3)
{
 struct mfi_frame_header *VAR_4;
 struct mfi_ld_info *VAR_5;
 struct mfi_softc *VAR_6;
 device_t VAR_7;

 VAR_6 = VAR_3->cm_sc;
 VAR_4 = &VAR_3->cm_frame->header;
 VAR_5 = VAR_3->cm_private;

 if (VAR_6->cm_map_abort || VAR_4->cmd_status != VAR_1) {
  FUNC_5(VAR_5, VAR_2);
  FUNC_9(&VAR_6->mfi_map_sync_cm);
  FUNC_6(VAR_3);
  return;
 }
 FUNC_9(&VAR_6->mfi_map_sync_cm);
 FUNC_6(VAR_3);

 FUNC_8(&VAR_6->mfi_io_lock);
 FUNC_7(&VAR_0);
 if ((VAR_7 = FUNC_1(VAR_6->mfi_dev, "mfid", -1)) == ((void*)0)) {
  FUNC_2(VAR_6->mfi_dev, "Failed to add logical disk\n");
  FUNC_5(VAR_5, VAR_2);
  FUNC_8(&VAR_0);
  FUNC_7(&VAR_6->mfi_io_lock);
  return;
 }

 FUNC_4(VAR_7, VAR_5);
 FUNC_3(VAR_7, "MFI Logical Disk");
 FUNC_0(VAR_6->mfi_dev);
 FUNC_8(&VAR_0);
 FUNC_7(&VAR_6->mfi_io_lock);
}
