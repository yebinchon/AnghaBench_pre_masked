
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mfi_softc {int mfi_dev; } ;
struct TYPE_11__ {int isSSCD; } ;
struct TYPE_12__ {TYPE_5__ params; } ;
struct mfi_ld_info {TYPE_6__ ld_config; } ;
struct TYPE_7__ {int isSSCD; } ;
struct mfi_ld_config {TYPE_1__ params; } ;
struct mfi_config_data {int array_size; int array_count; scalar_t__ array; } ;
struct mfi_command {scalar_t__ cm_private; TYPE_4__* cm_frame; int cm_flags; scalar_t__ cm_data; } ;
struct TYPE_9__ {scalar_t__ cmd_status; int target_id; } ;
struct TYPE_8__ {scalar_t__ opcode; int * mbox; } ;
struct TYPE_10__ {TYPE_3__ header; TYPE_2__ dcmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mfi_ld_info*,int ) ;
 int FUNC_2 (struct mfi_softc*,struct mfi_command**,int ,void**,int) ;
 int FUNC_3 (struct mfi_command*) ;
 scalar_t__ FUNC_4 (struct mfi_softc*,struct mfi_command*) ;

__attribute__((used)) static int
FUNC_5(struct mfi_softc *VAR_6, struct mfi_command *VAR_7)
{
 struct mfi_config_data *VAR_8;
 struct mfi_command *VAR_9 = ((void*)0);
 struct mfi_ld_info *VAR_10 = ((void*)0);
 struct mfi_ld_config *VAR_11;
 char *VAR_12;
 int VAR_13 = 0;

 VAR_8 = (struct mfi_config_data *)VAR_7->cm_data;

 if (VAR_7->cm_frame->dcmd.opcode == VAR_1) {
  VAR_12 = (char *)VAR_8->array;
  VAR_12 += VAR_8->array_size * VAR_8->array_count;
  VAR_11 = (struct mfi_ld_config *)VAR_12;
  if (VAR_11->params.isSSCD == 1)
   VAR_13 = 1;
 } else if (VAR_7->cm_frame->dcmd.opcode == VAR_2) {
  VAR_13 = FUNC_2 (VAR_6, &VAR_9, VAR_3,
      (void **)&VAR_10, sizeof(*VAR_10));
  if (VAR_13) {
   FUNC_0(VAR_6->mfi_dev, "Failed to allocate"
       "MFI_DCMD_LD_GET_INFO %d", VAR_13);
   if (VAR_10)
    FUNC_1(VAR_10, VAR_5);
   return 0;
  }
  VAR_9->cm_flags = VAR_0;
  VAR_9->cm_frame->dcmd.mbox[0]= VAR_7->cm_frame->dcmd.mbox[0];
  VAR_9->cm_frame->header.target_id = VAR_7->cm_frame->dcmd.mbox[0];
  if (FUNC_4(VAR_6, VAR_9) != 0) {
   FUNC_0(VAR_6->mfi_dev, "failed to get log drv\n");
   FUNC_3(VAR_9);
   FUNC_1(VAR_10, VAR_5);
   return 0;
  }

  if (VAR_9->cm_frame->header.cmd_status != VAR_4) {
   FUNC_1(VAR_10, VAR_5);
   FUNC_3(VAR_9);
   return 0;
  }
  else
   VAR_10 = (struct mfi_ld_info *)VAR_9->cm_private;

  if (VAR_10->ld_config.params.isSSCD == 1)
   VAR_13 = 1;

  FUNC_3(VAR_9);
  FUNC_1(VAR_10, VAR_5);

 }
 return VAR_13;
}
