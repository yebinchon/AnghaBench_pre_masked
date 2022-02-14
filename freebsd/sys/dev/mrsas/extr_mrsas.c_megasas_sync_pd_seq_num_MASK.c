
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int u_int8_t ;
struct mrsas_softc {int pd_seq_map_id; int do_timedout_reset; int mrsas_dev; struct mrsas_mfi_cmd* jbod_seq_cmd; int * jbodmap_phys_addr; scalar_t__* jbodmap_mem; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct TYPE_8__ {struct MR_PD_CFG_SEQ_NUM_SYNC* b; } ;
struct TYPE_7__ {TYPE_2__* sge32; } ;
struct mrsas_dcmd_frame {int cmd_status; int sge_count; int flags; TYPE_4__ mbox; TYPE_3__ sgl; int opcode; void* data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; int cmd; } ;
struct MR_PD_CFG_SEQ_NUM_SYNC {int count; } ;
struct MR_PD_CFG_SEQ {int dummy; } ;
typedef int bus_addr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {void* length; int phys_addr; } ;
struct TYPE_5__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 struct MR_PD_CFG_SEQ_NUM_SYNC VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct MR_PD_CFG_SEQ_NUM_SYNC*,int ,void*) ;
 struct mrsas_mfi_cmd* FUNC_2 (struct mrsas_softc*) ;
 scalar_t__ FUNC_3 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_4 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_5 (struct mrsas_mfi_cmd*) ;

int
FUNC_6(struct mrsas_softc *VAR_11, boolean_t VAR_12)
{
 int VAR_13 = 0;
 u_int8_t VAR_14 = 1;
 struct mrsas_mfi_cmd *VAR_15;
 struct mrsas_dcmd_frame *VAR_16;
 uint32_t VAR_17;
 struct MR_PD_CFG_SEQ_NUM_SYNC *VAR_18;
 bus_addr_t VAR_19;

 VAR_17 = sizeof(struct MR_PD_CFG_SEQ_NUM_SYNC) +
     (sizeof(struct MR_PD_CFG_SEQ) *
     (VAR_3 - 1));

 VAR_15 = FUNC_2(VAR_11);
 if (!VAR_15) {
  FUNC_0(VAR_11->mrsas_dev,
      "Cannot alloc for ld map info cmd.\n");
  return 1;
 }
 VAR_16 = &VAR_15->frame->dcmd;

 VAR_18 = (void *)VAR_11->jbodmap_mem[(VAR_11->pd_seq_map_id & 1)];
 VAR_19 = VAR_11->jbodmap_phys_addr[(VAR_11->pd_seq_map_id & 1)];
 if (!VAR_18) {
  FUNC_0(VAR_11->mrsas_dev,
      "Failed to alloc mem for jbod map info.\n");
  FUNC_5(VAR_15);
  return (VAR_1);
 }
 FUNC_1(VAR_18, 0, VAR_17);
 FUNC_1(VAR_16->mbox.b, 0, VAR_8);
 VAR_16->cmd = VAR_4;
 VAR_16->cmd_status = 0xFF;
 VAR_16->sge_count = 1;
 VAR_16->timeout = 0;
 VAR_16->pad_0 = 0;
 VAR_16->data_xfer_len = (VAR_17);
 VAR_16->opcode = (VAR_10);
 VAR_16->sgl.sge32[0].phys_addr = (VAR_19);
 VAR_16->sgl.sge32[0].length = (VAR_17);

 if (VAR_12) {
  VAR_16->mbox.b[0] = VAR_9;
  VAR_16->flags = (VAR_7);
  VAR_11->jbod_seq_cmd = VAR_15;
  if (FUNC_3(VAR_11, VAR_15)) {
   FUNC_0(VAR_11->mrsas_dev,
       "Fail to send sync map info command.\n");
   return 1;
  } else
   return 0;
 } else
  VAR_16->flags = VAR_6;

 VAR_13 = FUNC_4(VAR_11, VAR_15);
 if (VAR_13 == VAR_2)
  goto dcmd_timeout;

 if (VAR_18->count > VAR_3) {
  FUNC_0(VAR_11->mrsas_dev,
      "driver supports max %d JBOD, but FW reports %d\n",
      VAR_3, VAR_18->count);
  VAR_13 = -VAR_0;
 }
 if (!VAR_13)
  VAR_11->pd_seq_map_id++;
 VAR_14 = 0;

dcmd_timeout:
 if (VAR_14)
  VAR_11->do_timedout_reset = VAR_5;

 return (VAR_13);
}
