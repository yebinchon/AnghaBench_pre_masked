
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_softc {int mfi_dev; } ;
struct mfi_frame_header {scalar_t__ cmd_status; scalar_t__ scsi_status; } ;
struct mfi_command {scalar_t__ cm_error; int cm_sense; struct mfi_softc* cm_sc; TYPE_1__* cm_frame; struct bio* cm_private; } ;
struct bio {scalar_t__ bio_error; int bio_flags; } ;
struct TYPE_2__ {struct mfi_frame_header header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,struct mfi_command*,scalar_t__,...) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct mfi_softc*,int ) ;
 int FUNC_3 (struct mfi_command*) ;

__attribute__((used)) static void
FUNC_4(struct mfi_command *VAR_3)
{
 struct bio *VAR_4;
 struct mfi_frame_header *VAR_5;
 struct mfi_softc *VAR_6;

 VAR_4 = VAR_3->cm_private;
 VAR_5 = &VAR_3->cm_frame->header;
 VAR_6 = VAR_3->cm_sc;

 if ((VAR_5->cmd_status != VAR_2) || (VAR_5->scsi_status != 0)) {
  VAR_4->bio_flags |= VAR_0;
  VAR_4->bio_error = VAR_1;
  FUNC_0(VAR_6->mfi_dev, "I/O error, cmd=%p, status=%#x, "
      "scsi_status=%#x\n", VAR_3, VAR_5->cmd_status, VAR_5->scsi_status);
  FUNC_2(VAR_3->cm_sc, VAR_3->cm_sense);
 } else if (VAR_3->cm_error != 0) {
  VAR_4->bio_flags |= VAR_0;
  VAR_4->bio_error = VAR_3->cm_error;
  FUNC_0(VAR_6->mfi_dev, "I/O error, cmd=%p, error=%#x\n",
      VAR_3, VAR_3->cm_error);
 }

 FUNC_3(VAR_3);
 FUNC_1(VAR_4);
}
