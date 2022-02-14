
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int8_t ;
struct mrsas_tmp_dcmd {int tmp_dcmd_phys_addr; struct MR_LD_LIST* tmp_dcmd_mem; } ;
struct mrsas_softc {int fw_supported_vd_count; int CurLdCount; int* ld_ids; int mask_interrupts; int do_timedout_reset; TYPE_8__* target_list; scalar_t__ max256vdSupport; int mrsas_dev; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct TYPE_12__ {TYPE_3__* sge32; } ;
struct TYPE_10__ {int* b; } ;
struct mrsas_dcmd_frame {int cmd_status; int sge_count; int data_xfer_len; scalar_t__ pad_0; TYPE_4__ sgl; int opcode; scalar_t__ timeout; int flags; int cmd; TYPE_2__ mbox; } ;
struct MR_LD_LIST {int ldCount; TYPE_7__* ldList; } ;
typedef int bus_addr_t ;
struct TYPE_16__ {int target_id; } ;
struct TYPE_13__ {int targetId; } ;
struct TYPE_14__ {TYPE_5__ ld_context; } ;
struct TYPE_15__ {scalar_t__ state; TYPE_6__ ref; } ;
struct TYPE_11__ {int length; int phys_addr; } ;
struct TYPE_9__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mrsas_tmp_dcmd*,int ) ;
 struct mrsas_tmp_dcmd* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int*,int,int ) ;
 int FUNC_4 (struct mrsas_softc*,int) ;
 scalar_t__ FUNC_5 (struct mrsas_softc*,struct mrsas_tmp_dcmd*,int) ;
 int FUNC_6 (struct mrsas_tmp_dcmd*) ;
 struct mrsas_mfi_cmd* FUNC_7 (struct mrsas_softc*) ;
 int FUNC_8 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_9 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_10 (struct mrsas_mfi_cmd*) ;
 int FUNC_11 (struct mrsas_softc*,int) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static int
FUNC_13(struct mrsas_softc *VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17;
 u_int8_t VAR_18 = 1;
 struct mrsas_mfi_cmd *VAR_19;
 struct mrsas_dcmd_frame *VAR_20;
 struct MR_LD_LIST *VAR_21;
 bus_addr_t VAR_22 = 0;
 struct mrsas_tmp_dcmd *VAR_23;

 VAR_19 = FUNC_7(VAR_12);
 if (!VAR_19) {
  FUNC_0(VAR_12->mrsas_dev,
      "Cannot alloc for get LD list cmd\n");
  return 1;
 }
 VAR_20 = &VAR_19->frame->dcmd;

 VAR_23 = FUNC_2(sizeof(struct mrsas_tmp_dcmd), VAR_9, VAR_10);
 VAR_13 = sizeof(struct MR_LD_LIST);
 if (FUNC_5(VAR_12, VAR_23, VAR_13) != VAR_11) {
  FUNC_0(VAR_12->mrsas_dev,
      "Cannot alloc dmamap for get LD list cmd\n");
  FUNC_10(VAR_19);
  FUNC_6(VAR_23);
  FUNC_1(VAR_23, VAR_9);
  return (VAR_0);
 } else {
  VAR_21 = VAR_23->tmp_dcmd_mem;
  VAR_22 = VAR_23->tmp_dcmd_phys_addr;
 }
 FUNC_3(VAR_20->mbox.b, 0, VAR_6);

 if (VAR_12->max256vdSupport)
  VAR_20->mbox.b[0] = 1;

 VAR_20->cmd = VAR_3;
 VAR_20->cmd_status = 0xFF;
 VAR_20->sge_count = 1;
 VAR_20->flags = VAR_5;
 VAR_20->timeout = 0;
 VAR_20->data_xfer_len = sizeof(struct MR_LD_LIST);
 VAR_20->opcode = VAR_8;
 VAR_20->sgl.sge32[0].phys_addr = VAR_22;
 VAR_20->sgl.sge32[0].length = sizeof(struct MR_LD_LIST);
 VAR_20->pad_0 = 0;

 if (!VAR_12->mask_interrupts)
  VAR_14 = FUNC_8(VAR_12, VAR_19);
 else
  VAR_14 = FUNC_9(VAR_12, VAR_19);

 if (VAR_14 == VAR_1)
  goto dcmd_timeout;






 if (VAR_21->ldCount <= VAR_12->fw_supported_vd_count) {
  VAR_12->CurLdCount = VAR_21->ldCount;
  FUNC_3(VAR_12->ld_ids, 0xff, VAR_2);
  for (VAR_15 = 0; VAR_15 < VAR_21->ldCount; VAR_15++) {
   VAR_16 = VAR_21->ldList[VAR_15].ref.ld_context.targetId;
   VAR_17 = VAR_16 + VAR_7;
   if (VAR_21->ldList[VAR_15].state != 0) {
    VAR_12->ld_ids[VAR_16] = VAR_21->ldList[VAR_15].ref.ld_context.targetId;
    if (VAR_12->target_list[VAR_17].target_id ==
     0xffff)
     FUNC_4(VAR_12, VAR_17);
   } else {
    if (VAR_12->target_list[VAR_17].target_id !=
     0xffff)
     FUNC_11(VAR_12,
      VAR_17);
   }
  }

  VAR_18 = 0;
 }
dcmd_timeout:
 FUNC_6(VAR_23);
 FUNC_1(VAR_23, VAR_9);

 if (VAR_18)
  VAR_12->do_timedout_reset = VAR_4;
 if (!VAR_12->mask_interrupts)
  FUNC_10(VAR_19);

 return (VAR_14);
}
