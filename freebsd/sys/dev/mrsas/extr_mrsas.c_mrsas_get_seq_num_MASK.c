
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct mrsas_softc {int do_timedout_reset; int el_info_mem; int el_info_phys_addr; int mrsas_dev; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct mrsas_evt_log_info {int dummy; } ;
struct TYPE_8__ {TYPE_3__* sge32; } ;
struct TYPE_6__ {int b; } ;
struct mrsas_dcmd_frame {int cmd_status; int sge_count; int data_xfer_len; TYPE_4__ sgl; int opcode; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_2__ mbox; } ;
struct TYPE_7__ {int length; int phys_addr; } ;
struct TYPE_5__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mrsas_evt_log_info*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mrsas_softc*) ;
 int FUNC_4 (struct mrsas_softc*) ;
 struct mrsas_mfi_cmd* FUNC_5 (struct mrsas_softc*) ;
 scalar_t__ FUNC_6 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_7 (struct mrsas_mfi_cmd*) ;

__attribute__((used)) static int
FUNC_8(struct mrsas_softc *VAR_8,
    struct mrsas_evt_log_info *VAR_9)
{
 struct mrsas_mfi_cmd *VAR_10;
 struct mrsas_dcmd_frame *VAR_11;
 u_int8_t VAR_12 = 1, VAR_13 = 0;

 VAR_10 = FUNC_5(VAR_8);

 if (!VAR_10) {
  FUNC_0(VAR_8->mrsas_dev, "Failed to get a free cmd\n");
  return -VAR_0;
 }
 VAR_11 = &VAR_10->frame->dcmd;

 if (FUNC_3(VAR_8) != VAR_7) {
  FUNC_0(VAR_8->mrsas_dev, "Cannot allocate evt log info cmd\n");
  FUNC_7(VAR_10);
  return -VAR_0;
 }
 FUNC_2(VAR_11->mbox.b, 0, VAR_5);

 VAR_11->cmd = VAR_2;
 VAR_11->cmd_status = 0x0;
 VAR_11->sge_count = 1;
 VAR_11->flags = VAR_4;
 VAR_11->timeout = 0;
 VAR_11->pad_0 = 0;
 VAR_11->data_xfer_len = sizeof(struct mrsas_evt_log_info);
 VAR_11->opcode = VAR_6;
 VAR_11->sgl.sge32[0].phys_addr = VAR_8->el_info_phys_addr;
 VAR_11->sgl.sge32[0].length = sizeof(struct mrsas_evt_log_info);

 VAR_13 = FUNC_6(VAR_8, VAR_10);
 if (VAR_13 == VAR_1)
  goto dcmd_timeout;

 VAR_12 = 0;



 FUNC_1(VAR_9, VAR_8->el_info_mem, sizeof(struct mrsas_evt_log_info));
 FUNC_4(VAR_8);

dcmd_timeout:
 if (VAR_12)
  VAR_8->do_timedout_reset = VAR_3;
 else
  FUNC_7(VAR_10);

 return VAR_13;
}
