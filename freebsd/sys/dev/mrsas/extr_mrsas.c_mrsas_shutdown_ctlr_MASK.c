
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct mrsas_softc {scalar_t__ adprecovery; int mrsas_dev; scalar_t__ jbod_seq_cmd; scalar_t__ map_update_cmd; scalar_t__ aen_cmd; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct TYPE_4__ {int b; } ;
struct mrsas_dcmd_frame {int cmd_status; int opcode; scalar_t__ data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; int flags; scalar_t__ sge_count; int cmd; TYPE_2__ mbox; } ;
struct TYPE_3__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct mrsas_mfi_cmd* FUNC_2 (struct mrsas_softc*) ;
 int FUNC_3 (struct mrsas_softc*,scalar_t__) ;
 int FUNC_4 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_5 (struct mrsas_mfi_cmd*) ;

__attribute__((used)) static void
FUNC_6(struct mrsas_softc *VAR_4, u_int32_t VAR_5)
{
 struct mrsas_mfi_cmd *VAR_6;
 struct mrsas_dcmd_frame *VAR_7;

 if (VAR_4->adprecovery == VAR_3)
  return;

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6) {
  FUNC_0(VAR_4->mrsas_dev, "Cannot allocate for shutdown cmd.\n");
  return;
 }
 if (VAR_4->aen_cmd)
  FUNC_3(VAR_4, VAR_4->aen_cmd);
 if (VAR_4->map_update_cmd)
  FUNC_3(VAR_4, VAR_4->map_update_cmd);
 if (VAR_4->jbod_seq_cmd)
  FUNC_3(VAR_4, VAR_4->jbod_seq_cmd);

 VAR_7 = &VAR_6->frame->dcmd;
 FUNC_1(VAR_7->mbox.b, 0, VAR_2);

 VAR_7->cmd = VAR_0;
 VAR_7->cmd_status = 0x0;
 VAR_7->sge_count = 0;
 VAR_7->flags = VAR_1;
 VAR_7->timeout = 0;
 VAR_7->pad_0 = 0;
 VAR_7->data_xfer_len = 0;
 VAR_7->opcode = VAR_5;

 FUNC_0(VAR_4->mrsas_dev, "Preparing to shut down controller.\n");

 FUNC_4(VAR_4, VAR_6);
 FUNC_5(VAR_6);

 return;
}
