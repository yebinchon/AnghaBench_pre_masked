
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mfi_softc {size_t mfi_max_fw_cmds; TYPE_1__* mfi_comms; int (* mfi_read_fw_status ) (struct mfi_softc*) ;int mfi_io_lock; int mfi_flags; struct mfi_command* mfi_commands; scalar_t__ (* mfi_check_clear_intr ) (struct mfi_softc*) ;} ;
struct mfi_command {scalar_t__ cm_error; } ;
struct TYPE_2__ {size_t hw_pi; size_t hw_ci; size_t* hw_reply_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_1 (struct mfi_command*) ;
 int FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct mfi_softc*) ;
 int FUNC_6 (struct mfi_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct mfi_softc *VAR_2;
 struct mfi_command *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_2 = (struct mfi_softc *)VAR_1;

 if (VAR_2->mfi_check_clear_intr(VAR_2))
  return;

restart:
 VAR_4 = VAR_2->mfi_comms->hw_pi;
 VAR_5 = VAR_2->mfi_comms->hw_ci;
 FUNC_3(&VAR_2->mfi_io_lock);
 while (VAR_5 != VAR_4) {
  VAR_6 = VAR_2->mfi_comms->hw_reply_q[VAR_5];
  if (VAR_6 < VAR_2->mfi_max_fw_cmds) {
   VAR_3 = &VAR_2->mfi_commands[VAR_6];
   FUNC_1(VAR_3);
   VAR_3->cm_error = 0;
   FUNC_0(VAR_2, VAR_3);
  }
  if (++VAR_5 == (VAR_2->mfi_max_fw_cmds + 1))
   VAR_5 = 0;
 }

 VAR_2->mfi_comms->hw_ci = VAR_5;


 VAR_2->mfi_flags &= ~VAR_0;
 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->mfi_io_lock);





 (void)VAR_2->mfi_read_fw_status(VAR_2);
 if (VAR_4 != VAR_2->mfi_comms->hw_pi)
  goto restart;

 return;
}
