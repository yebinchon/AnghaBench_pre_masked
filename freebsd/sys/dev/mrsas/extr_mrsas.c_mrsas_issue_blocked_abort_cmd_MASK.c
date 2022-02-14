
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u_int8_t ;
struct mrsas_softc {int mrsas_dev; void* chan; } ;
struct mrsas_mfi_cmd {int sync_cmd; int cmd_status; int frame_phys_addr; int index; TYPE_1__* frame; } ;
struct mrsas_abort_frame {int cmd_status; scalar_t__ abort_mfi_phys_addr_hi; int abort_mfi_phys_addr_lo; int abort_context; scalar_t__ flags; int cmd; } ;
struct TYPE_2__ {struct mrsas_abort_frame abort; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 struct mrsas_mfi_cmd* FUNC_1 (struct mrsas_softc*) ;
 scalar_t__ FUNC_2 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_3 (struct mrsas_mfi_cmd*) ;
 int FUNC_4 (void*,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mrsas_softc *VAR_3,
    struct mrsas_mfi_cmd *VAR_4)
{
 struct mrsas_mfi_cmd *VAR_5;
 struct mrsas_abort_frame *VAR_6;
 u_int8_t VAR_7 = 0;
 unsigned long VAR_8 = 0;
 u_int8_t VAR_9 = VAR_1;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_3->mrsas_dev, "Cannot alloc for abort cmd\n");
  return (1);
 }
 VAR_6 = &VAR_5->frame->abort;


 VAR_6->cmd = VAR_0;
 VAR_6->cmd_status = 0xFF;
 VAR_6->flags = 0;
 VAR_6->abort_context = VAR_4->index;
 VAR_6->abort_mfi_phys_addr_lo = VAR_4->frame_phys_addr;
 VAR_6->abort_mfi_phys_addr_hi = 0;

 VAR_5->sync_cmd = 1;
 VAR_5->cmd_status = 0xFF;

 if (FUNC_2(VAR_3, VAR_5)) {
  FUNC_0(VAR_3->mrsas_dev, "Fail to send abort command.\n");
  return (1);
 }

 VAR_3->chan = (void *)&VAR_5;
 while (1) {
  if (VAR_5->cmd_status == 0xFF) {
   FUNC_4((void *)&VAR_3->chan, 0, "mrsas_sleep", VAR_2);
  } else
   break;
  VAR_8++;
  if (VAR_8 >= VAR_9) {
   FUNC_0(VAR_3->mrsas_dev, "Abort cmd timed out after %d sec.\n", VAR_9);
   VAR_7 = 1;
   break;
  }
 }

 VAR_5->sync_cmd = 0;
 FUNC_3(VAR_5);
 return (VAR_7);
}
