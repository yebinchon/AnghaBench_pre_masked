
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_softc {int adpreset; int hw_crit_error; int issuepend_done; int mfi_dev; int last_seq_num; TYPE_1__* mfi_map_sync_cm; TYPE_1__* mfi_aen_cm; int (* mfi_enable_intr ) (struct mfi_softc*) ;scalar_t__ last_reply_idx; scalar_t__ mfi_max_fw_cmds; int (* mfi_disable_intr ) (struct mfi_softc*) ;int (* mfi_adp_reset ) (struct mfi_softc*) ;} ;
struct TYPE_3__ {int cm_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mfi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mfi_softc*,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mfi_softc*,int ) ;
 int FUNC_6 (struct mfi_softc*) ;
 int FUNC_7 (struct mfi_softc*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct mfi_softc*) ;
 int FUNC_11 (struct mfi_softc*) ;
 scalar_t__ FUNC_12 (struct mfi_softc*) ;
 int FUNC_13 (struct mfi_softc*) ;
 int FUNC_14 (struct mfi_softc*) ;
 int FUNC_15 (struct mfi_softc*) ;
 int FUNC_16 (struct mfi_softc*) ;

__attribute__((used)) static void
FUNC_17(void *VAR_4)
{
 struct mfi_softc *VAR_5= (struct mfi_softc *)VAR_4;
 int VAR_6, VAR_7;

 if (VAR_5->adpreset == 1) {
  FUNC_3(VAR_5->mfi_dev, "First stage of FW reset "
       "initiated...\n");

  VAR_5->mfi_adp_reset(VAR_5);
  VAR_5->mfi_enable_intr(VAR_5);

  FUNC_3(VAR_5->mfi_dev, "First stage of reset complete, "
      "second stage initiated...\n");

  VAR_5->adpreset = 2;


  for (int VAR_8 = 0; VAR_8 < 20000; VAR_8++)
   FUNC_0(1000);
  FUNC_3(VAR_5->mfi_dev, "Second stage of FW reset "
       "initiated...\n");
  while ((VAR_7 = FUNC_1(VAR_5, VAR_2)) & 0x04);

  VAR_5->mfi_disable_intr(VAR_5);


  if (FUNC_12(VAR_5)) {
   FUNC_3(VAR_5->mfi_dev, "controller is not in "
       "ready state\n");
   FUNC_7(VAR_5);
   VAR_5->hw_crit_error = 1;
   return;
  }
  if ((VAR_6 = FUNC_10(VAR_5)) != 0) {
   FUNC_3(VAR_5->mfi_dev, "Failed to initialise MFI "
       "queue\n");
   FUNC_7(VAR_5);
   VAR_5->hw_crit_error = 1;
   return;
  }


  FUNC_2(VAR_5, VAR_0, VAR_5->mfi_max_fw_cmds - 1);
  FUNC_2(VAR_5, VAR_1, VAR_5->last_reply_idx);

  VAR_5->mfi_enable_intr(VAR_5);
  VAR_5->adpreset = 0;
  if (VAR_5->mfi_aen_cm != ((void*)0)) {
   FUNC_4(VAR_5->mfi_aen_cm->cm_data, VAR_3);
   FUNC_9(VAR_5->mfi_aen_cm);
   FUNC_8(VAR_5->mfi_aen_cm);
   VAR_5->mfi_aen_cm = ((void*)0);
  }

  if (VAR_5->mfi_map_sync_cm != ((void*)0)) {
   FUNC_9(VAR_5->mfi_map_sync_cm);
   FUNC_8(VAR_5->mfi_map_sync_cm);
   VAR_5->mfi_map_sync_cm = ((void*)0);
  }
  FUNC_6(VAR_5);






  if (!VAR_5->hw_crit_error) {




   FUNC_5(VAR_5, VAR_5->last_seq_num);
   FUNC_11(VAR_5);

   VAR_5->issuepend_done = 1;
   FUNC_3(VAR_5->mfi_dev, "second stage of reset "
       "complete, FW is ready now.\n");
  } else {
   FUNC_3(VAR_5->mfi_dev, "second stage of reset "
        "never completed, hba was marked offline.\n");
  }
 } else {
  FUNC_3(VAR_5->mfi_dev, "mfi_process_fw_state_chg_isr "
      "called with unhandled value:%d\n", VAR_5->adpreset);
 }
}
