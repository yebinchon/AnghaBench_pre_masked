
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct TYPE_12__ {int status; } ;
struct ccb_scsiio {unsigned int sense_len; unsigned int sense_resid; TYPE_2__ ccb_h; int sense_data; int scsi_status; int resid; } ;
struct TYPE_13__ {TYPE_9__* dvp; int * softs; TYPE_1__* cm_ccb; int status; } ;
typedef TYPE_3__ rcb_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_14__ {int service_resp; int status; scalar_t__ data_pres; int * data; int data_len; int resd_count; } ;
typedef TYPE_4__ aio_path_error_info_elem_t ;
struct TYPE_15__ {int offload_enabled; } ;
struct TYPE_11__ {int csio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_9__*,char*,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_9__*,char*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;







 int VAR_6 ;






 int VAR_7 ;
 int FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,struct ccb_scsiio*) ;
 int FUNC_11 (union ccb*) ;

void FUNC_12(rcb_t *VAR_8, aio_path_error_info_elem_t *VAR_9)
{
 struct ccb_scsiio *VAR_10;
 pqisrc_softstate_t *VAR_11;

 FUNC_1("IN\n");

        if (VAR_8 == ((void*)0))
  FUNC_7("rcb is null");

 VAR_8->status = VAR_7;
 VAR_10 = (struct ccb_scsiio *)&VAR_8->cm_ccb->csio;
 if (VAR_10 == ((void*)0))
                FUNC_7("csio is null");

 VAR_11 = VAR_8->softs;

 switch (VAR_9->service_resp) {
  case 140:
   VAR_10->ccb_h.status = VAR_9->status;
   break;
  case 139:
   switch(VAR_9->status) {
    case 132:
     VAR_10->ccb_h.status = VAR_2;
     FUNC_2(VAR_8->dvp, "IO aborted\n");
     break;
    case 128:
     VAR_10->ccb_h.status = VAR_3;
     VAR_10->resid =
      FUNC_4(VAR_9->resd_count);
     break;
    case 129:
     VAR_10->ccb_h.status = VAR_3;
     break;
    case 134:
     FUNC_2(VAR_8->dvp,"AIO Path Disabled\n");
     VAR_8->dvp->offload_enabled = 0;
     VAR_10->ccb_h.status |= VAR_1;
     break;
    case 131:
    case 130:
    case 133:
    default:
     FUNC_2(VAR_8->dvp,"IO Error/Invalid/No device\n");
     VAR_10->ccb_h.status |=
      VAR_4;
     break;
   }
   break;
  case 138:
  case 135:
   VAR_10->ccb_h.status = VAR_3;
   break;
  case 136:
  case 137:
   FUNC_2(VAR_8->dvp,"TMF rejected/Incorrect Lun\n");
   VAR_10->ccb_h.status |= VAR_4;
   break;
  default:
   FUNC_2(VAR_8->dvp,"Scsi Status Error\n");
   VAR_10->ccb_h.status |= VAR_4;
   break;
 }
 if(VAR_9->data_pres == VAR_5 ) {
  VAR_10->scsi_status = VAR_6;
  uint8_t *VAR_12 = ((void*)0);
  unsigned VAR_13 = FUNC_3(VAR_9->data_len);
  if (VAR_13)
   VAR_12 = VAR_9->data;
  FUNC_0(VAR_8->dvp, "SCSI_STATUS_CHECK_COND  sense size %u\n",
   VAR_13);
  FUNC_6(&VAR_10->sense_data, 0, VAR_10->sense_len);
  if (VAR_12)
   FUNC_5(&VAR_10->sense_data, VAR_12, ((VAR_13 >
                         VAR_10->sense_len) ? VAR_10->sense_len : VAR_13));
  if (VAR_10->sense_len > VAR_13)
   VAR_10->sense_resid = VAR_10->sense_len - VAR_13;
         else
   VAR_10->sense_resid = 0;
  VAR_10->ccb_h.status = VAR_4 | VAR_0;
 }

 FUNC_10(VAR_11, VAR_10);
 FUNC_8(VAR_8);
 FUNC_9(VAR_8);
 FUNC_11((union ccb *)VAR_10);
 FUNC_1("OUT\n");
}
