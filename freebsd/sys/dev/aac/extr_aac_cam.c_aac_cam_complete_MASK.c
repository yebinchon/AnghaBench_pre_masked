
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ func_code; int status; } ;
struct TYPE_5__ {int sense_len; int sense_resid; int sense_data; int scsi_status; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
struct scsi_sense_data {int dummy; } ;
struct aac_srb_response {scalar_t__ fib_status; int sense_len; int * sense; int scsi_status; int srb_status; } ;
struct aac_softc {int aac_dev; } ;
struct aac_command {TYPE_1__* cm_fib; union ccb* cm_private; struct aac_softc* cm_sc; } ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct aac_softc*,union ccb*) ;
 int FUNC_1 (struct aac_command*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct aac_softc*,char*,char*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(struct aac_command *VAR_4)
{
 union ccb *VAR_5;
 struct aac_srb_response *VAR_6;
 struct aac_softc *VAR_7;
 int VAR_8;

 VAR_7 = VAR_4->cm_sc;
 FUNC_5(VAR_7, VAR_2, "");
 VAR_5 = VAR_4->cm_private;
 VAR_6 = (struct aac_srb_response *)&VAR_4->cm_fib->data[0];

 if (VAR_6->fib_status != 0) {
  FUNC_4(VAR_7->aac_dev, "Passthru FIB failed!\n");
  VAR_5->ccb_h.status = VAR_1;
 } else {




  VAR_5->ccb_h.status = VAR_6->srb_status;


  if (VAR_5->ccb_h.func_code == VAR_3) {
   VAR_5->csio.scsi_status = VAR_6->scsi_status;


   if (VAR_6->sense_len) {
    VAR_8 = VAR_6->sense_len;
    if (VAR_8 < VAR_5->csio.sense_len)
     VAR_5->csio.sense_resid =
        VAR_5->csio.sense_len -
        VAR_8;
     else
         VAR_5->csio.sense_resid = 0;
    FUNC_3(&VAR_5->csio.sense_data,
        sizeof(struct scsi_sense_data));
    FUNC_2(&VAR_6->sense[0], &VAR_5->csio.sense_data,
        FUNC_6(VAR_5->csio.sense_len, VAR_8));
    VAR_5->ccb_h.status |= VAR_0;

   }

   FUNC_0(VAR_7, VAR_5);
  }
 }

 FUNC_1(VAR_4);
 FUNC_7(VAR_5);
}
