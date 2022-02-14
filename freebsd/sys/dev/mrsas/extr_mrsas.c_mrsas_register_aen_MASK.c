
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ class; int locale; } ;
union mrsas_evt_class_locale {void* word; TYPE_1__ members; } ;
typedef void* u_int32_t ;
struct mrsas_softc {int mrsas_dev; struct mrsas_mfi_cmd* aen_cmd; scalar_t__ evt_detail_phys_addr; void* last_seq_num; int evt_detail_mem; } ;
struct mrsas_mfi_cmd {int abort_aen; TYPE_2__* frame; } ;
struct mrsas_evt_detail {int dummy; } ;
struct TYPE_10__ {TYPE_4__* sge32; } ;
struct TYPE_8__ {void** w; int b; } ;
struct mrsas_dcmd_frame {int cmd_status; int sge_count; int data_xfer_len; TYPE_5__ sgl; TYPE_3__ mbox; int opcode; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; } ;
struct TYPE_9__ {int length; void* phys_addr; } ;
struct TYPE_7__ {struct mrsas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 struct mrsas_mfi_cmd* FUNC_2 (struct mrsas_softc*) ;
 int FUNC_3 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 scalar_t__ FUNC_4 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_5 (struct mrsas_mfi_cmd*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct mrsas_softc *VAR_5, u_int32_t VAR_6,
    u_int32_t VAR_7)
{
 int VAR_8;
 struct mrsas_mfi_cmd *VAR_9;
 struct mrsas_dcmd_frame *VAR_10;
 union mrsas_evt_class_locale VAR_11;
 union mrsas_evt_class_locale VAR_12;
 VAR_11.word = VAR_7;

 if (VAR_5->aen_cmd) {

  VAR_12.word = VAR_5->aen_cmd->frame->dcmd.mbox.w[1];
  if ((VAR_12.members.class <= VAR_11.members.class) &&
      !((VAR_12.members.locale & VAR_11.members.locale) ^
      VAR_11.members.locale)) {




   return 0;
  } else {
   VAR_11.members.locale |= VAR_12.members.locale;

   if (VAR_12.members.class < VAR_11.members.class)
    VAR_11.members.class = VAR_12.members.class;

   VAR_5->aen_cmd->abort_aen = 1;
   VAR_8 = FUNC_3(VAR_5,
       VAR_5->aen_cmd);

   if (VAR_8) {
    FUNC_6("mrsas: Failed to abort previous AEN command\n");
    return VAR_8;
   } else
    VAR_5->aen_cmd = ((void*)0);
  }
 }
 VAR_9 = FUNC_2(VAR_5);
 if (!VAR_9)
  return VAR_0;

 VAR_10 = &VAR_9->frame->dcmd;

 FUNC_1(VAR_5->evt_detail_mem, 0, sizeof(struct mrsas_evt_detail));




 FUNC_1(VAR_10->mbox.b, 0, VAR_3);

 VAR_10->cmd = VAR_1;
 VAR_10->cmd_status = 0x0;
 VAR_10->sge_count = 1;
 VAR_10->flags = VAR_2;
 VAR_10->timeout = 0;
 VAR_10->pad_0 = 0;
 VAR_10->data_xfer_len = sizeof(struct mrsas_evt_detail);
 VAR_10->opcode = VAR_4;
 VAR_10->mbox.w[0] = VAR_6;
 VAR_5->last_seq_num = VAR_6;
 VAR_10->mbox.w[1] = VAR_11.word;
 VAR_10->sgl.sge32[0].phys_addr = (u_int32_t)VAR_5->evt_detail_phys_addr;
 VAR_10->sgl.sge32[0].length = sizeof(struct mrsas_evt_detail);

 if (VAR_5->aen_cmd != ((void*)0)) {
  FUNC_5(VAR_9);
  return 0;
 }





 VAR_5->aen_cmd = VAR_9;




 if (FUNC_4(VAR_5, VAR_9)) {
  FUNC_0(VAR_5->mrsas_dev, "Cannot issue AEN DCMD command.\n");
  return (1);
 }
 return 0;
}
