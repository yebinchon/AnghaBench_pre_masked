
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union mfi_mpi2_request_descriptor {int words; } ;
typedef int uint8_t ;
struct mfi_softc {int mfi_dev; scalar_t__ adpreset; } ;
struct mfi_frame_header {scalar_t__ cmd_status; scalar_t__ cmd; int flags; } ;
struct mfi_command {int cm_flags; TYPE_3__* cm_frame; int cm_timestamp; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_4__ {int* cdb; } ;
struct TYPE_6__ {TYPE_2__ dcmd; TYPE_1__ pass; struct mfi_frame_header header; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct mfi_softc*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 union mfi_mpi2_request_descriptor* FUNC_3 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_4 (struct mfi_command*) ;
 int VAR_11 ;
 union mfi_mpi2_request_descriptor* FUNC_5 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_6 (struct mfi_softc*) ;
 int VAR_12 ;

int
FUNC_7(struct mfi_softc *VAR_13, struct mfi_command *VAR_14)
{
 struct mfi_frame_header *VAR_15;
 uint8_t *VAR_16;
 union mfi_mpi2_request_descriptor *VAR_17 = ((void*)0);
 int VAR_18 = VAR_11 * 1000;

 VAR_15 = &VAR_14->cm_frame->header;
 VAR_16 = VAR_14->cm_frame->pass.cdb;
 if (VAR_13->adpreset)
  return 1;
 if ((VAR_14->cm_flags & VAR_5) == 0) {
  VAR_14->cm_timestamp = VAR_12;
  FUNC_4(VAR_14);
 } else {
  VAR_15->cmd_status = VAR_10;
  VAR_15->flags |= VAR_7;
 }

 if (VAR_15->cmd == VAR_4) {

  if (VAR_16[0] != 0x28 || VAR_16[0] != 0x2A) {
   if ((VAR_17 = FUNC_5(VAR_13, VAR_14)) ==
       ((void*)0)) {
    FUNC_2(VAR_13->mfi_dev, "Mapping from MFI "
        "to MPT Failed \n");
    return 1;
   }
  }
  else
   FUNC_2(VAR_13->mfi_dev, "DJA NA XXX SYSPDIO\n");
 } else if (VAR_15->cmd == VAR_2 ||
     VAR_15->cmd == VAR_1 || VAR_15->cmd == VAR_3) {
  VAR_14->cm_flags |= VAR_6;
  if ((VAR_17 = FUNC_3(VAR_13, VAR_14)) == ((void*)0)) {
   FUNC_2(VAR_13->mfi_dev, "LDIO Failed \n");
   return 1;
  }
 } else if ((VAR_17 = FUNC_5(VAR_13, VAR_14)) == ((void*)0)) {
  FUNC_2(VAR_13->mfi_dev, "Mapping from MFI to MPT Failed\n");
  return (1);
 }

 if (VAR_14->cm_flags & VAR_6) {





  VAR_15->flags &= ~VAR_7;
 }

 FUNC_1(VAR_13, VAR_9, (VAR_17->words & 0xFFFFFFFF));
 FUNC_1(VAR_13, VAR_8, (VAR_17->words >>0x20));

 if ((VAR_14->cm_flags & VAR_5) == 0)
  return 0;
 while (VAR_15->cmd_status == VAR_10) {
  FUNC_0(1000);
  VAR_18 -= 1;
  if (VAR_18 <= 0)
   break;
  if (VAR_14->cm_flags & VAR_6) {




   FUNC_6(VAR_13);
  }
 }


 FUNC_6(VAR_13);

 if (VAR_15->cmd_status == VAR_10) {
  FUNC_2(VAR_13->mfi_dev, "Frame %p timed out "
      "command 0x%X\n", VAR_15, VAR_14->cm_frame->dcmd.opcode);
  return (VAR_0);
 }
 return 0;
}
