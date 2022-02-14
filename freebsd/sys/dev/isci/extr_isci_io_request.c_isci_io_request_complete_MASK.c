
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int status; int target_lun; int path; int target_id; int path_id; int func_code; } ;
struct ccb_scsiio {int scsi_status; int sense_data; scalar_t__ sense_len; scalar_t__ sense_resid; scalar_t__ dxfer_len; scalar_t__ resid; } ;
struct TYPE_9__ {scalar_t__ smp_response_len; int * smp_response; } ;
union ccb {TYPE_6__ ccb_h; struct ccb_scsiio csio; TYPE_2__ smpio; } ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int flags; int func_code; } ;
struct ccb_relsim {int openings; int release_flags; TYPE_4__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct ISCI_REQUEST {int dummy; } ;
struct ISCI_REMOTE_DEVICE {scalar_t__ frozen_lun_mask; int queued_ccbs; union ccb* queued_ccb_in_progress; int index; } ;
struct TYPE_8__ {int dma_map; int dma_tag; int timer; } ;
struct ISCI_IO_REQUEST {union ccb* ccb; TYPE_1__ parent; int sci_object; } ;
struct ISCI_CONTROLLER {scalar_t__ is_frozen; int sim; int request_pool; } ;
struct TYPE_12__ {int tqe; } ;
struct TYPE_10__ {void* data; int status; int sense_data_length; } ;
typedef TYPE_3__ SCI_SSP_RESPONSE_IU_T ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_STATUS ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef void* BOOL ;


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
 void* VAR_12 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_13 ;
 int FUNC_2 (int *,TYPE_6__*,int ) ;
 int FUNC_3 (int *,TYPE_6__*,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*,char*,union ccb*,int ,...) ;
 int FUNC_9 (struct ISCI_REMOTE_DEVICE*,int ) ;
 int FUNC_10 (struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_11 (struct ISCI_REMOTE_DEVICE*,int *) ;
 int FUNC_12 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,struct ISCI_REQUEST*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 void* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int*,int*,int*,int*) ;
 int FUNC_20 (struct ccb_scsiio*) ;
 TYPE_5__ VAR_17 ;
 int FUNC_21 (union ccb*) ;
 int FUNC_22 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_23 (union ccb*) ;
 int FUNC_24 (struct cam_path*) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,scalar_t__) ;
 int FUNC_27 (TYPE_4__*,struct cam_path*,int) ;

void
FUNC_28(SCI_CONTROLLER_HANDLE_T VAR_18,
    SCI_REMOTE_DEVICE_HANDLE_T VAR_19,
    struct ISCI_IO_REQUEST *VAR_20, SCI_IO_STATUS VAR_21)
{
 struct ISCI_CONTROLLER *VAR_22;
 struct ISCI_REMOTE_DEVICE *VAR_23;
 union ccb *VAR_24;
 BOOL VAR_25;
 struct ccb_scsiio *VAR_26;

 VAR_25 = VAR_14;
 VAR_22 = (struct ISCI_CONTROLLER *) FUNC_13(VAR_18);
 VAR_23 =
  (struct ISCI_REMOTE_DEVICE *) FUNC_13(VAR_19);

 VAR_24 = VAR_20->ccb;
 VAR_26 = &VAR_24->csio;
 VAR_24->ccb_h.status &= ~VAR_11;

 switch (VAR_21) {
 case 130:
 case 129:
  VAR_24->ccb_h.status |= VAR_6;
  break;

 case 128:
  VAR_24->ccb_h.status |= VAR_6;
  VAR_24->csio.resid = VAR_24->csio.dxfer_len -
      FUNC_16(
          VAR_20->sci_object);
  break;

 case 133:
 {
  SCI_SSP_RESPONSE_IU_T * VAR_27;
  uint32_t VAR_28;
  int VAR_29, VAR_30, VAR_31, VAR_32;

  VAR_27 = (SCI_SSP_RESPONSE_IU_T *)
      FUNC_17(
          VAR_20->sci_object);

  VAR_28 = FUNC_15(
      VAR_27->sense_data_length);

  VAR_28 = FUNC_1(VAR_26->sense_len, VAR_28);

  FUNC_12(&VAR_26->sense_data, VAR_27->data, VAR_28);

  VAR_26->sense_resid = VAR_26->sense_len - VAR_28;
  VAR_26->scsi_status = VAR_27->status;
  VAR_24->ccb_h.status |= VAR_9;
  VAR_24->ccb_h.status |= VAR_2;
  FUNC_19( &VAR_26->sense_data, &VAR_29, &VAR_30,
      &VAR_31, &VAR_32 );
  FUNC_8(1, "ISCI",
      "isci: bus=%x target=%x lun=%x cdb[0]=%x status=%x key=%x asc=%x ascq=%x\n",
      VAR_24->ccb_h.path_id, VAR_24->ccb_h.target_id,
      VAR_24->ccb_h.target_lun, FUNC_20(VAR_26),
      VAR_26->scsi_status, VAR_30, VAR_31, VAR_32);
  break;
 }

 case 135:
  FUNC_11(VAR_23, ((void*)0));
  VAR_24->ccb_h.status |= VAR_8;
  FUNC_8(0, "ISCI",
      "isci: bus=%x target=%x lun=%x cdb[0]=%x remote device reset required\n",
      VAR_24->ccb_h.path_id, VAR_24->ccb_h.target_id,
      VAR_24->ccb_h.target_lun, FUNC_20(VAR_26));
  break;

 case 132:
  VAR_24->ccb_h.status |= VAR_8;
  FUNC_8(0, "ISCI",
      "isci: bus=%x target=%x lun=%x cdb[0]=%x terminated\n",
      VAR_24->ccb_h.path_id, VAR_24->ccb_h.target_id,
      VAR_24->ccb_h.target_lun, FUNC_20(VAR_26));
  break;

 case 138:
 case 141:
  VAR_25 = VAR_12;
  break;

 case 139:
  VAR_24->ccb_h.status |= VAR_3;
  break;

 case 137:
  {
   struct ccb_relsim VAR_33;
   struct cam_path *VAR_34;

   FUNC_22(&VAR_34, ((void*)0),
       FUNC_7(VAR_22->sim),
       VAR_23->index, 0);

   FUNC_27(&VAR_33.ccb_h, VAR_34, 5);
   VAR_33.ccb_h.func_code = VAR_15;
   VAR_33.ccb_h.flags = VAR_4;
   VAR_33.release_flags = VAR_13;
   VAR_33.openings =
       FUNC_18(VAR_19);
   FUNC_21((union ccb *)&VAR_33);
   FUNC_24(VAR_34);
   VAR_25 = VAR_12;
  }
  break;

 case 143:
 case 134:
 case 131:
 case 136:
 case 140:
 case 142:
 default:
  FUNC_8(1, "ISCI",
      "isci: bus=%x target=%x lun=%x cdb[0]=%x completion status=%x\n",
      VAR_24->ccb_h.path_id, VAR_24->ccb_h.target_id,
      VAR_24->ccb_h.target_lun, FUNC_20(VAR_26),
      VAR_21);
  VAR_24->ccb_h.status |= VAR_7;
  break;
 }

 FUNC_6(&VAR_20->parent.timer);
 FUNC_4(VAR_20->parent.dma_tag,
     VAR_20->parent.dma_map,
     VAR_0 | VAR_1);

 FUNC_5(VAR_20->parent.dma_tag,
     VAR_20->parent.dma_map);

 VAR_20->ccb = ((void*)0);

 FUNC_14(VAR_22->request_pool,
     (struct ISCI_REQUEST *)VAR_20);

 if (VAR_25) {
  if ((VAR_24->ccb_h.status & VAR_11) != VAR_6) {






   VAR_24->ccb_h.status |= VAR_5;
   FUNC_25(VAR_24->ccb_h.path, 1);
  }

  if (VAR_24->ccb_h.status & VAR_10) {

   FUNC_0(VAR_24 == VAR_23->queued_ccb_in_progress,
       ("multiple internally queued ccbs in flight"));

   FUNC_3(&VAR_23->queued_ccbs,
       &VAR_24->ccb_h, VAR_17.tqe);
   VAR_24->ccb_h.status &= ~VAR_10;
   VAR_23->queued_ccb_in_progress = ((void*)0);
  }

  if (VAR_23->frozen_lun_mask != 0) {
   FUNC_10(VAR_23);
  }

  FUNC_23(VAR_24);

  if (VAR_22->is_frozen == VAR_14) {
   VAR_22->is_frozen = VAR_12;
   FUNC_26(VAR_22->sim, VAR_14);
  }
 } else {
  FUNC_9(VAR_23,
      VAR_24->ccb_h.target_lun);

  if (VAR_24->ccb_h.status & VAR_10) {

   FUNC_0(VAR_24 == VAR_23->queued_ccb_in_progress,
       ("multiple internally queued ccbs in flight"));







   FUNC_8(1, "ISCI", "already queued %p %x\n",
       VAR_24, FUNC_20(VAR_26));

   VAR_23->queued_ccb_in_progress = ((void*)0);

  } else {
   FUNC_8(1, "ISCI", "queue %p %x\n", VAR_24,
       FUNC_20(VAR_26));
   VAR_24->ccb_h.status |= VAR_10;

   FUNC_2(&VAR_23->queued_ccbs,
       &VAR_24->ccb_h, VAR_17.tqe);
  }
 }
}
