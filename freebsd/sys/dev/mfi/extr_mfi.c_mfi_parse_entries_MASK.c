
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int evt_class; int locale; scalar_t__ reserved; } ;
union mfi_evt {int word; TYPE_1__ members; } ;
typedef int uint32_t ;
struct mfi_softc {int mfi_dev; int mfi_buffer_dmat; int mfi_io_lock; } ;
struct mfi_evt_list {int count; TYPE_4__* event; } ;
struct mfi_evt_detail {int dummy; } ;
struct TYPE_7__ {int data_len; scalar_t__ cmd_status; scalar_t__ timeout; int cmd; } ;
struct mfi_dcmd_frame {TYPE_3__ header; int sgl; int mbox; int opcode; } ;
struct mfi_command {int cm_flags; int cm_len; int cm_dmamap; struct mfi_evt_list* cm_data; int cm_total_frame_size; int * cm_sg; TYPE_2__* cm_frame; } ;
struct TYPE_8__ {int seq; } ;
struct TYPE_6__ {struct mfi_dcmd_frame dcmd; } ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct mfi_evt_list*,int ) ;
 struct mfi_evt_list* FUNC_5 (int,int ,int) ;
 struct mfi_command* FUNC_6 (struct mfi_softc*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_8 (struct mfi_softc*,TYPE_4__*) ;
 int FUNC_9 (struct mfi_command*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int
FUNC_11(struct mfi_softc *VAR_19, int VAR_20, int VAR_21)
{
 struct mfi_command *VAR_22;
 struct mfi_dcmd_frame *VAR_23;
 struct mfi_evt_list *VAR_24;
 union mfi_evt VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;

 FUNC_10(&VAR_19->mfi_io_lock, VAR_5);

 VAR_25.members.reserved = 0;
 VAR_25.members.locale = VAR_18;
 VAR_25.members.evt_class = VAR_17;

 VAR_29 = sizeof(struct mfi_evt_list) + sizeof(struct mfi_evt_detail)
  * (VAR_4 - 1);
 VAR_24 = FUNC_5(VAR_29, VAR_14, VAR_15 | VAR_16);
 if (VAR_24 == ((void*)0))
  return (VAR_3);

 for (VAR_28 = VAR_20;;) {
  if ((VAR_22 = FUNC_6(VAR_19)) == ((void*)0)) {
   FUNC_4(VAR_24, VAR_14);
   return (VAR_1);
  }

  VAR_23 = &VAR_22->cm_frame->dcmd;
  FUNC_2(VAR_23->mbox, VAR_11);
  VAR_23->header.cmd = VAR_7;
  VAR_23->header.timeout = 0;
  VAR_23->header.data_len = VAR_29;
  VAR_23->opcode = VAR_9;
  ((uint32_t *)&VAR_23->mbox)[0] = VAR_28;
  ((uint32_t *)&VAR_23->mbox)[1] = VAR_25.word;
  VAR_22->cm_sg = &VAR_23->sgl;
  VAR_22->cm_total_frame_size = VAR_10;
  VAR_22->cm_flags = VAR_6 | VAR_8;
  VAR_22->cm_data = VAR_24;
  VAR_22->cm_len = VAR_29;

  if ((VAR_26 = FUNC_7(VAR_19, VAR_22)) != 0) {
   FUNC_3(VAR_19->mfi_dev,
       "Failed to get controller entries\n");
   FUNC_9(VAR_22);
   break;
  }

  FUNC_0(VAR_19->mfi_buffer_dmat, VAR_22->cm_dmamap,
      VAR_0);
  FUNC_1(VAR_19->mfi_buffer_dmat, VAR_22->cm_dmamap);

  if (VAR_23->header.cmd_status == VAR_12) {
   FUNC_9(VAR_22);
   break;
  }
  if (VAR_23->header.cmd_status != VAR_13) {
   FUNC_3(VAR_19->mfi_dev,
       "Error %d fetching controller entries\n",
       VAR_23->header.cmd_status);
   FUNC_9(VAR_22);
   VAR_26 = VAR_2;
   break;
  }
  FUNC_9(VAR_22);

  for (VAR_27 = 0; VAR_27 < VAR_24->count; VAR_27++) {







   if (VAR_24->event[VAR_27].seq >= VAR_21) {
    if (VAR_20 <= VAR_21)
     break;
    else if (VAR_24->event[VAR_27].seq < VAR_20)
     break;
   }
   FUNC_8(VAR_19, &VAR_24->event[VAR_27]);
  }
  VAR_28 = VAR_24->event[VAR_24->count - 1].seq + 1;
 }

 FUNC_4(VAR_24, VAR_14);
 return (VAR_26);
}
