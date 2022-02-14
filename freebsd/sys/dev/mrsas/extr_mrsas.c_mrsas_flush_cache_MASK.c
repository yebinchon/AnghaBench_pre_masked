
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mrsas_softc {scalar_t__ adprecovery; int mrsas_dev; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct TYPE_4__ {int* b; } ;
struct mrsas_dcmd_frame {int cmd_status; TYPE_2__ mbox; int opcode; scalar_t__ data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; int flags; scalar_t__ sge_count; int cmd; } ;
struct TYPE_3__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int ,int ) ;
 struct mrsas_mfi_cmd* FUNC_2 (struct mrsas_softc*) ;
 int FUNC_3 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_4 (struct mrsas_mfi_cmd*) ;

__attribute__((used)) static void
FUNC_5(struct mrsas_softc *VAR_7)
{
 struct mrsas_mfi_cmd *VAR_8;
 struct mrsas_dcmd_frame *VAR_9;

 if (VAR_7->adprecovery == VAR_3)
  return;

 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8) {
  FUNC_0(VAR_7->mrsas_dev, "Cannot allocate for flush cache cmd.\n");
  return;
 }
 VAR_9 = &VAR_8->frame->dcmd;
 FUNC_1(VAR_9->mbox.b, 0, VAR_2);

 VAR_9->cmd = VAR_0;
 VAR_9->cmd_status = 0x0;
 VAR_9->sge_count = 0;
 VAR_9->flags = VAR_1;
 VAR_9->timeout = 0;
 VAR_9->pad_0 = 0;
 VAR_9->data_xfer_len = 0;
 VAR_9->opcode = VAR_4;
 VAR_9->mbox.b[0] = VAR_5 | VAR_6;

 FUNC_3(VAR_7, VAR_8);
 FUNC_4(VAR_8);

 return;
}
