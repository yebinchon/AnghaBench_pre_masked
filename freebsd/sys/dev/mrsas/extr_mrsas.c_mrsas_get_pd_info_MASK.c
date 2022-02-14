
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
typedef scalar_t__ u_int32_t ;
typedef size_t u_int16_t ;
struct mrsas_softc {int mask_interrupts; int do_timedout_reset; TYPE_9__* pd_info_mem; TYPE_5__* target_list; scalar_t__ pd_info_phys_addr; int mrsas_dev; } ;
struct mrsas_pd_info {int dummy; } ;
struct mrsas_mfi_cmd {TYPE_1__* frame; } ;
struct TYPE_13__ {TYPE_3__* sge32; } ;
struct TYPE_11__ {size_t* s; TYPE_9__* b; } ;
struct mrsas_dcmd_frame {int cmd_status; int sge_count; int data_xfer_len; TYPE_4__ sgl; int opcode; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_2__ mbox; } ;
struct TYPE_15__ {int intf; } ;
struct TYPE_16__ {TYPE_6__ pdType; } ;
struct TYPE_17__ {TYPE_7__ ddf; } ;
struct TYPE_18__ {TYPE_8__ state; } ;
struct TYPE_14__ {int interface_type; } ;
struct TYPE_12__ {int length; scalar_t__ phys_addr; } ;
struct TYPE_10__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_9__*,int ,int) ;
 struct mrsas_mfi_cmd* FUNC_2 (struct mrsas_softc*) ;
 int FUNC_3 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_4 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_5 (struct mrsas_mfi_cmd*) ;

__attribute__((used)) static void
FUNC_6(struct mrsas_softc *VAR_6, u_int16_t VAR_7)
{
 int VAR_8;
 u_int8_t VAR_9 = 1;
 struct mrsas_mfi_cmd *VAR_10;
 struct mrsas_dcmd_frame *VAR_11;

 VAR_10 = FUNC_2(VAR_6);

 if (!VAR_10) {
  FUNC_0(VAR_6->mrsas_dev,
      "Cannot alloc for get PD info cmd\n");
  return;
 }
 VAR_11 = &VAR_10->frame->dcmd;

 FUNC_1(VAR_6->pd_info_mem, 0, sizeof(struct mrsas_pd_info));
 FUNC_1(VAR_11->mbox.b, 0, VAR_4);

 VAR_11->mbox.s[0] = VAR_7;
 VAR_11->cmd = VAR_1;
 VAR_11->cmd_status = 0xFF;
 VAR_11->sge_count = 1;
 VAR_11->flags = VAR_3;
 VAR_11->timeout = 0;
 VAR_11->pad_0 = 0;
 VAR_11->data_xfer_len = sizeof(struct mrsas_pd_info);
 VAR_11->opcode = VAR_5;
 VAR_11->sgl.sge32[0].phys_addr = (u_int32_t)VAR_6->pd_info_phys_addr;
 VAR_11->sgl.sge32[0].length = sizeof(struct mrsas_pd_info);

 if (!VAR_6->mask_interrupts)
  VAR_8 = FUNC_3(VAR_6, VAR_10);
 else
  VAR_8 = FUNC_4(VAR_6, VAR_10);

 if (VAR_8 == VAR_0)
  goto dcmd_timeout;

 VAR_6->target_list[VAR_7].interface_type =
  VAR_6->pd_info_mem->state.ddf.pdType.intf;

 VAR_9 = 0;

dcmd_timeout:

 if (VAR_9)
  VAR_6->do_timedout_reset = VAR_2;

 if (!VAR_6->mask_interrupts)
  FUNC_5(VAR_10);
}
