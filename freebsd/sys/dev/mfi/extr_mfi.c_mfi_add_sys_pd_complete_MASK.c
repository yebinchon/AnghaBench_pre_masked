
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mfi_softc {int mfi_io_lock; int mfi_dev; } ;
struct TYPE_5__ {int device_id; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct mfi_pd_info {scalar_t__ fw_state; TYPE_3__ ref; } ;
struct mfi_frame_header {scalar_t__ cmd_status; } ;
struct mfi_command {struct mfi_pd_info* cm_private; TYPE_1__* cm_frame; struct mfi_softc* cm_sc; } ;
typedef int * device_t ;
struct TYPE_4__ {struct mfi_frame_header header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct mfi_pd_info*) ;
 int FUNC_5 (struct mfi_pd_info*,int ) ;
 int FUNC_6 (struct mfi_command*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct mfi_command *VAR_4)
{
 struct mfi_frame_header *VAR_5;
 struct mfi_pd_info *VAR_6;
 struct mfi_softc *VAR_7;
 device_t VAR_8;

 VAR_7 = VAR_4->cm_sc;
 VAR_5 = &VAR_4->cm_frame->header;
 VAR_6 = VAR_4->cm_private;

 if (VAR_5->cmd_status != VAR_2) {
  FUNC_5(VAR_6, VAR_3);
  FUNC_6(VAR_4);
  return;
 }
 if (VAR_6->fw_state != VAR_1) {
  FUNC_2(VAR_7->mfi_dev, "PD=%x is not SYSTEM PD\n",
      VAR_6->ref.v.device_id);
  FUNC_5(VAR_6, VAR_3);
  FUNC_6(VAR_4);
  return;
 }
 FUNC_6(VAR_4);

 FUNC_8(&VAR_7->mfi_io_lock);
 FUNC_7(&VAR_0);
 if ((VAR_8 = FUNC_1(VAR_7->mfi_dev, "mfisyspd", -1)) == ((void*)0)) {
  FUNC_2(VAR_7->mfi_dev, "Failed to add system pd\n");
  FUNC_5(VAR_6, VAR_3);
  FUNC_8(&VAR_0);
  FUNC_7(&VAR_7->mfi_io_lock);
  return;
 }

 FUNC_4(VAR_8, VAR_6);
 FUNC_3(VAR_8, "MFI System PD");
 FUNC_0(VAR_7->mfi_dev);
 FUNC_8(&VAR_0);
 FUNC_7(&VAR_7->mfi_io_lock);
}
