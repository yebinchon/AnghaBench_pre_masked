
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int8_t ;
struct mrsas_softc {int mask_interrupts; int do_timedout_reset; TYPE_9__* ctrl_info; int disableOnlineCtrlReset; int support_morethan256jbod; int use_seqnum_jbod_fp; int ctlr_info_mem; int ctlr_info_phys_addr; int mrsas_dev; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct TYPE_13__ {TYPE_3__* sge32; } ;
struct TYPE_11__ {int b; } ;
struct mrsas_dcmd_frame {int cmd_status; int sge_count; int data_xfer_len; TYPE_4__ sgl; int opcode; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_2__ mbox; } ;
struct mrsas_ctrl_info {int dummy; } ;
struct TYPE_16__ {int disableOnlineCtrlReset; } ;
struct TYPE_17__ {TYPE_7__ OnOffProperties; } ;
struct TYPE_15__ {int supportPdMapTargetId; } ;
struct TYPE_14__ {int useSeqNumJbodFP; } ;
struct TYPE_18__ {TYPE_8__ properties; TYPE_6__ adapterOperations4; TYPE_5__ adapterOperations3; } ;
struct TYPE_12__ {int length; int phys_addr; } ;
struct TYPE_10__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_9__*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mrsas_softc*) ;
 int FUNC_4 (struct mrsas_softc*) ;
 struct mrsas_mfi_cmd* FUNC_5 (struct mrsas_softc*) ;
 int FUNC_6 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_7 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_8 (struct mrsas_mfi_cmd*) ;
 int FUNC_9 (struct mrsas_softc*) ;

__attribute__((used)) static int
FUNC_10(struct mrsas_softc *VAR_8)
{
 int VAR_9 = 0;
 u_int8_t VAR_10 = 1;
 struct mrsas_mfi_cmd *VAR_11;
 struct mrsas_dcmd_frame *VAR_12;

 VAR_11 = FUNC_5(VAR_8);

 if (!VAR_11) {
  FUNC_0(VAR_8->mrsas_dev, "Failed to get a free cmd\n");
  return -VAR_0;
 }
 VAR_12 = &VAR_11->frame->dcmd;

 if (FUNC_3(VAR_8) != VAR_7) {
  FUNC_0(VAR_8->mrsas_dev, "Cannot allocate get ctlr info cmd\n");
  FUNC_8(VAR_11);
  return -VAR_0;
 }
 FUNC_2(VAR_12->mbox.b, 0, VAR_5);

 VAR_12->cmd = VAR_2;
 VAR_12->cmd_status = 0xFF;
 VAR_12->sge_count = 1;
 VAR_12->flags = VAR_4;
 VAR_12->timeout = 0;
 VAR_12->pad_0 = 0;
 VAR_12->data_xfer_len = sizeof(struct mrsas_ctrl_info);
 VAR_12->opcode = VAR_6;
 VAR_12->sgl.sge32[0].phys_addr = VAR_8->ctlr_info_phys_addr;
 VAR_12->sgl.sge32[0].length = sizeof(struct mrsas_ctrl_info);

 if (!VAR_8->mask_interrupts)
  VAR_9 = FUNC_6(VAR_8, VAR_11);
 else
  VAR_9 = FUNC_7(VAR_8, VAR_11);

 if (VAR_9 == VAR_1)
  goto dcmd_timeout;
 else
  FUNC_1(VAR_8->ctrl_info, VAR_8->ctlr_info_mem, sizeof(struct mrsas_ctrl_info));

 VAR_10 = 0;
 FUNC_9(VAR_8);

 VAR_8->use_seqnum_jbod_fp =
     VAR_8->ctrl_info->adapterOperations3.useSeqNumJbodFP;
 VAR_8->support_morethan256jbod =
  VAR_8->ctrl_info->adapterOperations4.supportPdMapTargetId;

 VAR_8->disableOnlineCtrlReset =
     VAR_8->ctrl_info->properties.OnOffProperties.disableOnlineCtrlReset;

dcmd_timeout:
 FUNC_4(VAR_8);

 if (VAR_10)
  VAR_8->do_timedout_reset = VAR_3;

 if (!VAR_8->mask_interrupts)
  FUNC_8(VAR_11);

 return (VAR_9);
}
