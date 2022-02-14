
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_sense_data {int dummy; } ;
struct ciss_softc {int ciss_flags; } ;
struct ciss_request {scalar_t__ cr_private; struct ciss_command* cr_cc; struct ciss_softc* cr_sc; } ;
struct ciss_error_info {int * sense_info; int residual_count; scalar_t__ sense_length; } ;
struct ciss_command {int * sg; } ;
struct TYPE_2__ {int status; int path; } ;
struct ccb_scsiio {int scsi_status; TYPE_1__ ccb_h; scalar_t__ sense_resid; scalar_t__ sense_len; int resid; int sense_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ciss_softc*,struct ccb_scsiio*) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*,int*,int*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct scsi_sense_data*,scalar_t__,int) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct ciss_request *VAR_8)
{
    struct ciss_softc *VAR_9;
    struct ciss_command *VAR_10;
    struct ciss_error_info *VAR_11;
    struct ccb_scsiio *VAR_12;
    int VAR_13;
    int VAR_14;

    FUNC_6(2);

    VAR_9 = VAR_8->cr_sc;
    VAR_10 = VAR_8->cr_cc;
    VAR_11 = (struct ciss_error_info *)&(VAR_10->sg[0]);
    VAR_12 = (struct ccb_scsiio *)VAR_8->cr_private;




    FUNC_4(VAR_8, &VAR_14, &VAR_13);
    VAR_12->scsi_status = VAR_13;




    switch(VAR_13) {

    case -1:
 FUNC_5(0, "adapter error");
 VAR_12->ccb_h.status |= VAR_3;
 break;


    case 128:
 FUNC_5(2, "SCSI_STATUS_OK");
 VAR_12->ccb_h.status |= VAR_2;
 break;


    case 129:
 FUNC_5(0, "SCSI_STATUS_CHECK_COND  sense size %d  resid %d\n",
       VAR_11->sense_length, VAR_11->residual_count);
 FUNC_1(&VAR_12->sense_data, VAR_7);
 FUNC_0(&VAR_11->sense_info[0], &VAR_12->sense_data, VAR_11->sense_length);
 if (VAR_12->sense_len > VAR_11->sense_length)
  VAR_12->sense_resid = VAR_12->sense_len - VAR_11->sense_length;
 else
  VAR_12->sense_resid = 0;
 VAR_12->resid = VAR_11->residual_count;
 VAR_12->ccb_h.status |= VAR_5 | VAR_0;







 break;

    case 130:
 FUNC_5(0, "SCSI_STATUS_BUSY");
 VAR_12->ccb_h.status |= VAR_4;
 break;

    default:
 FUNC_5(0, "unknown status 0x%x", VAR_12->scsi_status);
 VAR_12->ccb_h.status |= VAR_3;
 break;
    }


    FUNC_2(VAR_9, VAR_12);

    FUNC_3(VAR_8);
    if (VAR_9->ciss_flags & VAR_6) {
 VAR_9->ciss_flags &= ~VAR_6;
 if (VAR_12->ccb_h.status & VAR_1)
     FUNC_10(FUNC_9(VAR_12->ccb_h.path), 0);
 else
     VAR_12->ccb_h.status |= VAR_1;
    }
    FUNC_8((union ccb *)VAR_12);
}
