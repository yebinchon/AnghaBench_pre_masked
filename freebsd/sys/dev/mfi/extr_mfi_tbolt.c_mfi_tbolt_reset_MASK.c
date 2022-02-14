
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mfi_softc {int mfi_flags; int (* mfi_read_fw_status ) (struct mfi_softc*) ;scalar_t__ disableOnlineCtrlReset; int adpreset; int mfi_io_lock; scalar_t__ last_reply_idx; scalar_t__ MFA_enabled; scalar_t__ issuepend_done; int mfi_dev; scalar_t__ hw_crit_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mfi_softc*) ;

int
FUNC_5(struct mfi_softc *VAR_3)
{
 uint32_t VAR_4;

 FUNC_2(&VAR_3->mfi_io_lock);
 if (VAR_3->hw_crit_error) {
  FUNC_0(VAR_3->mfi_dev, "HW CRITICAL ERROR\n");
  FUNC_3(&VAR_3->mfi_io_lock);
  return 1;
 }

 if (VAR_3->mfi_flags & VAR_0) {
  VAR_4 = VAR_3->mfi_read_fw_status(VAR_3);
  if ((VAR_4 & VAR_1) == VAR_1 ||
      VAR_2) {
   if ((VAR_3->disableOnlineCtrlReset == 0)
       && (VAR_3->adpreset == 0)) {
    FUNC_0(VAR_3->mfi_dev, "Adapter RESET "
        "condition is detected\n");
    VAR_3->adpreset = 1;
    VAR_3->issuepend_done = 0;
    VAR_3->MFA_enabled = 0;
    VAR_3->last_reply_idx = 0;
    FUNC_1((void *) VAR_3);
   }
   FUNC_3(&VAR_3->mfi_io_lock);
   return 0;
  }
 }
 FUNC_3(&VAR_3->mfi_io_lock);
 return 1;
}
