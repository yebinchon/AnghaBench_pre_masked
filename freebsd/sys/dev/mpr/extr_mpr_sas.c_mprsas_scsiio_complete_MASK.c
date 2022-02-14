
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int status; int path; } ;
struct TYPE_14__ {size_t target_id; int flags; } ;
struct TYPE_10__ {scalar_t__* cdb_bytes; scalar_t__* cdb_ptr; } ;
struct ccb_scsiio {int resid; int sense_len; int* data_ptr; TYPE_5__ ccb_h; int sense_data; int sense_resid; int scsi_status; TYPE_1__ cdb_io; } ;
union ccb {TYPE_6__ ccb_h; struct ccb_scsiio csio; } ;
typedef scalar_t__ u8 ;
typedef int u16 ;
typedef size_t target_id_t ;
struct scsi_vpd_supported_page_list {int* list; int length; } ;
struct scsi_sense_data {int dummy; } ;
struct mprsas_target {scalar_t__ is_nvme; int supports_SSU; } ;
struct mprsas_softc {int flags; struct mprsas_target* targets; int sim; } ;
struct mpr_softc {int mpr_flags; TYPE_2__* mapping_table; int control_TLR; int SSU_refcount; scalar_t__ SSU_started; int buffer_dmat; struct mprsas_softc* sassc; int mpr_mtx; } ;
struct TYPE_12__ {int SMID; } ;
struct TYPE_13__ {TYPE_3__ Default; } ;
struct mpr_command {int cm_flags; scalar_t__ cm_state; int cm_length; TYPE_9__* cm_targ; TYPE_4__ cm_desc; int cm_sense; int * cm_reply; int cm_ccb; int cm_dmamap; int * cm_data; union ccb* cm_complete_data; int cm_callout; } ;
struct TYPE_17__ {int devinfo; int * tm; int timedout_commands; int commands; int outstanding; int completed; } ;
struct TYPE_16__ {int SCSIState; int TransferCount; int SCSIStatus; int IOCLogInfo; int IOCStatus; int SenseCount; int ResponseInfo; } ;
struct TYPE_11__ {scalar_t__ TLR_bits; int device_info; } ;
typedef TYPE_7__ MPI2_SCSI_IO_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int,char*) ;
 int VAR_23 ;
 int FUNC_1 (int ,int) ;






 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int FUNC_2 (struct mpr_softc*) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 int FUNC_3 (int *,struct mpr_command*,int ) ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 scalar_t__ VAR_60 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct mpr_softc*,int ,char*,...) ;
 int FUNC_14 (struct mpr_softc*,struct mpr_command*) ;
 int VAR_63 ;
 int FUNC_15 (struct mpr_softc*,struct mpr_command*) ;
 int FUNC_16 (struct mpr_softc*,struct ccb_scsiio*,TYPE_7__*,TYPE_9__*) ;
 int FUNC_17 (struct mpr_softc*,struct mpr_command*) ;
 scalar_t__ FUNC_18 (union ccb*) ;
 int FUNC_19 (struct mpr_command*,int ,char*,...) ;
 int FUNC_20 (union ccb*,scalar_t__) ;
 int FUNC_21 (int *,int ) ;
 scalar_t__* FUNC_22 (struct ccb_scsiio*) ;
 int FUNC_23 (union ccb*) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ,int) ;

__attribute__((used)) static void
FUNC_26(struct mpr_softc *VAR_64, struct mpr_command *VAR_65)
{
 MPI2_SCSI_IO_REPLY *VAR_66;
 union ccb *VAR_67;
 struct ccb_scsiio *VAR_68;
 struct mprsas_softc *VAR_69;
 struct scsi_vpd_supported_page_list *VAR_70 = ((void*)0);
 u8 *VAR_71, VAR_72, *VAR_73;
 int VAR_74 = 0, VAR_75;
 u16 VAR_76;
 struct mprsas_target *VAR_77;
 target_id_t VAR_78;

 FUNC_2(VAR_64);
 FUNC_13(VAR_64, VAR_51,
     "cm %p SMID %u ccb %p reply %p outstanding %u\n", VAR_65,
     VAR_65->cm_desc.Default.SMID, VAR_65->cm_ccb, VAR_65->cm_reply,
     VAR_65->cm_targ->outstanding);

 FUNC_8(&VAR_65->cm_callout);
 FUNC_21(&VAR_64->mpr_mtx, VAR_23);

 VAR_69 = VAR_64->sassc;
 VAR_67 = VAR_65->cm_complete_data;
 VAR_68 = &VAR_67->csio;
 VAR_78 = VAR_68->ccb_h.target_id;
 VAR_66 = (MPI2_SCSI_IO_REPLY *)VAR_65->cm_reply;





 if (VAR_65->cm_data != ((void*)0)) {
  if (VAR_65->cm_flags & VAR_41)
   VAR_74 = VAR_0;
  else if (VAR_65->cm_flags & VAR_42)
   VAR_74 = VAR_1;
  FUNC_5(VAR_64->buffer_dmat, VAR_65->cm_dmamap, VAR_74);
  FUNC_6(VAR_64->buffer_dmat, VAR_65->cm_dmamap);
 }

 VAR_65->cm_targ->completed++;
 VAR_65->cm_targ->outstanding--;
 FUNC_3(&VAR_65->cm_targ->commands, VAR_65, VAR_61);
 VAR_67->ccb_h.status &= ~(VAR_20 | VAR_19);

 if (VAR_65->cm_flags & VAR_44) {
  FUNC_3(&VAR_65->cm_targ->timedout_commands, VAR_65, VAR_62);
  FUNC_0(VAR_65->cm_state == VAR_46,
      ("Not busy for CM_FLAGS_TIMEDOUT: %d\n", VAR_65->cm_state));
  VAR_65->cm_flags &= ~VAR_44;
  if (VAR_65->cm_reply != ((void*)0))
   FUNC_19(VAR_65, VAR_49,
       "completed timedout cm %p ccb %p during recovery "
       "ioc %x scsi %x state %x xfer %u\n", VAR_65, VAR_65->cm_ccb,
       FUNC_9(VAR_66->IOCStatus), VAR_66->SCSIStatus,
       VAR_66->SCSIState, FUNC_10(VAR_66->TransferCount));
  else
   FUNC_19(VAR_65, VAR_49,
       "completed timedout cm %p ccb %p during recovery\n",
       VAR_65, VAR_65->cm_ccb);
 } else if (VAR_65->cm_targ->tm != ((void*)0)) {
  if (VAR_65->cm_reply != ((void*)0))
   FUNC_19(VAR_65, VAR_49,
       "completed cm %p ccb %p during recovery "
       "ioc %x scsi %x state %x xfer %u\n",
       VAR_65, VAR_65->cm_ccb, FUNC_9(VAR_66->IOCStatus),
       VAR_66->SCSIStatus, VAR_66->SCSIState,
       FUNC_10(VAR_66->TransferCount));
  else
   FUNC_19(VAR_65, VAR_49,
       "completed cm %p ccb %p during recovery\n",
       VAR_65, VAR_65->cm_ccb);
 } else if ((VAR_64->mpr_flags & VAR_47) != 0) {
  FUNC_19(VAR_65, VAR_49,
      "reset completed cm %p ccb %p\n", VAR_65, VAR_65->cm_ccb);
 }

 if ((VAR_65->cm_flags & VAR_43) != 0) {
  FUNC_20(VAR_67, VAR_12);
  if ((VAR_69->flags & VAR_40) == 0) {
   FUNC_25(VAR_69->sim, 1);
   VAR_69->flags |= VAR_40;
   FUNC_13(VAR_64, VAR_52, "Error sending command, "
       "freezing SIM queue\n");
  }
 }
 if (VAR_68->ccb_h.flags & VAR_4)
  VAR_73 = VAR_68->cdb_io.cdb_ptr;
 else
  VAR_73 = VAR_68->cdb_io.cdb_bytes;
 if (VAR_64->SSU_started && (VAR_73[0] == VAR_55)) {
  FUNC_13(VAR_64, VAR_48, "Decrementing SSU count.\n");
  VAR_64->SSU_refcount--;
 }


 if (VAR_65->cm_reply == ((void*)0)) {
  if (FUNC_18(VAR_67) == VAR_16) {
   if ((VAR_64->mpr_flags & VAR_47) != 0)
    FUNC_20(VAR_67, VAR_17);
   else {
    FUNC_20(VAR_67, VAR_14);
    VAR_68->scsi_status = VAR_53;
   }
   if (VAR_69->flags & VAR_40) {
    VAR_67->ccb_h.status |= VAR_11;
    VAR_69->flags &= ~VAR_40;
    FUNC_13(VAR_64, VAR_52,
        "Unfreezing SIM queue\n");
   }
  }






  if (FUNC_18(VAR_67) != VAR_14) {





   VAR_67->ccb_h.status |= VAR_10;
   FUNC_24(VAR_67->ccb_h.path, 1);
  }
  FUNC_14(VAR_64, VAR_65);
  FUNC_23(VAR_67);
  return;
 }

 VAR_77 = &VAR_69->targets[VAR_78];
 if (VAR_73[0] == VAR_60 &&
     VAR_77->is_nvme &&
     (VAR_68->ccb_h.flags & VAR_6) == VAR_8) {
  VAR_66->SCSIStatus = FUNC_17(VAR_64, VAR_65);
  VAR_68->scsi_status = VAR_66->SCSIStatus;
 }

 FUNC_19(VAR_65, VAR_52,
     "ioc %x scsi %x state %x xfer %u\n",
     FUNC_9(VAR_66->IOCStatus), VAR_66->SCSIStatus, VAR_66->SCSIState,
     FUNC_10(VAR_66->TransferCount));

 switch (FUNC_9(VAR_66->IOCStatus) & VAR_24) {
 case 139:
  VAR_68->resid = VAR_65->cm_length - FUNC_10(VAR_66->TransferCount);

 case 128:
 case 132:
  if ((FUNC_9(VAR_66->IOCStatus) & VAR_24) ==
      132)
   FUNC_19(VAR_65, VAR_52, "recovered error\n");


  if (VAR_66->SCSIState & (VAR_34 |
      VAR_36)) {
   FUNC_20(VAR_67, VAR_15);
   break;
  }





  if (VAR_66->SCSIState & VAR_32) {
   FUNC_20(VAR_67, VAR_2);
   break;
  }






  if ((VAR_66->SCSIState & VAR_35) &&
      ((FUNC_10(VAR_66->ResponseInfo) & VAR_31)
      == VAR_50)) {
   VAR_64->mapping_table[VAR_78].TLR_bits =
       (u8)VAR_29;
  }







  if ((VAR_66->SCSIStatus == VAR_37) ||
      (VAR_66->SCSIStatus == VAR_39)) {
   FUNC_20(VAR_67, VAR_13);
   break;
  }


  VAR_68->scsi_status = VAR_66->SCSIStatus;
  if (VAR_66->SCSIStatus == VAR_38)
   FUNC_20(VAR_67, VAR_14);
  else
   FUNC_20(VAR_67, VAR_18);

  if (VAR_66->SCSIState & VAR_33) {
   int VAR_79, VAR_80;

   VAR_80 = FUNC_11(FUNC_10(VAR_66->SenseCount),
       sizeof(struct scsi_sense_data));
   if (VAR_80 < VAR_68->sense_len)
    VAR_68->sense_resid = VAR_68->sense_len -
        VAR_80;
   else
    VAR_68->sense_resid = 0;

   VAR_79 = FUNC_11(VAR_80,
       VAR_68->sense_len - VAR_68->sense_resid);
   FUNC_7(&VAR_68->sense_data, sizeof(VAR_68->sense_data));
   FUNC_4(VAR_65->cm_sense, &VAR_68->sense_data, VAR_79);
   VAR_67->ccb_h.status |= VAR_3;
  }
  if ((VAR_73[0] == VAR_22) &&
      (VAR_73[1] & VAR_54) &&
      (VAR_73[2] == VAR_56) &&
      ((VAR_68->ccb_h.flags & VAR_6) == VAR_8) &&
      (VAR_68->data_ptr != ((void*)0)) &&
      ((VAR_68->data_ptr[0] & 0x1f) == VAR_59) &&
      (VAR_64->control_TLR) &&
      (VAR_64->mapping_table[VAR_78].device_info &
      VAR_28)) {
   VAR_70 = (struct scsi_vpd_supported_page_list *)
       VAR_68->data_ptr;
   VAR_71 = &VAR_64->mapping_table[VAR_78].TLR_bits;
   *VAR_71 = (u8)VAR_29;
   VAR_72 = (u8)VAR_30;
   VAR_76 = ((u16)VAR_73[3] << 8) + VAR_73[4];
   VAR_76 -= VAR_68->resid;
   for (VAR_75 = 0; VAR_75 < FUNC_1(VAR_70->length, VAR_76); VAR_75++) {
    if (VAR_70->list[VAR_75] == 0x90) {
     *VAR_71 = VAR_72;
     break;
    }
   }
  }






  if ((VAR_73[0] == VAR_22) &&
      (VAR_68->data_ptr != ((void*)0)) &&
      ((VAR_68->data_ptr[0] & 0x1f) == VAR_58) &&
      (VAR_64->mapping_table[VAR_78].device_info &
      VAR_27) &&
      ((VAR_64->mapping_table[VAR_78].device_info &
      VAR_26) ==
      VAR_25)) {
   VAR_77 = &VAR_69->targets[VAR_78];
   VAR_77->supports_SSU = VAR_57;
   FUNC_13(VAR_64, VAR_52, "Target %d supports SSU\n",
       VAR_78);
  }
  break;
 case 136:
 case 138:






  if (VAR_65->cm_targ->devinfo == 0)
   FUNC_20(VAR_67, VAR_14);
  else
   FUNC_20(VAR_67, VAR_9);
  break;
 case 144:
  FUNC_15(VAR_64, VAR_65);
  FUNC_20(VAR_67, VAR_21);
  break;
 case 129:
  if (VAR_65->cm_flags & VAR_45)
   FUNC_20(VAR_67, VAR_5);
  else
   FUNC_20(VAR_67, VAR_13);
  break;
 case 140:

  VAR_68->resid = 0;
  FUNC_20(VAR_67, VAR_7);
  break;
 case 135:
 case 137:
  FUNC_20(VAR_67, VAR_15);
  FUNC_13(VAR_64, VAR_48,
      "Controller reported %s tgt %u SMID %u loginfo %x\n",
      FUNC_12(VAR_63,
      FUNC_9(VAR_66->IOCStatus) & VAR_24),
      VAR_78, VAR_65->cm_desc.Default.SMID,
      FUNC_10(VAR_66->IOCLogInfo));
  FUNC_13(VAR_64, VAR_52,
      "SCSIStatus %x SCSIState %x xfercount %u\n",
      VAR_66->SCSIStatus, VAR_66->SCSIState,
      FUNC_10(VAR_66->TransferCount));
  break;
 case 145:
 case 147:
 case 142:
 case 146:
 case 143:
 case 141:
 case 134:
 case 133:
 case 131:
 case 130:
 default:
  FUNC_19(VAR_65, VAR_52,
      "completed ioc %x loginfo %x scsi %x state %x xfer %u\n",
      FUNC_9(VAR_66->IOCStatus), FUNC_10(VAR_66->IOCLogInfo),
      VAR_66->SCSIStatus, VAR_66->SCSIState,
      FUNC_10(VAR_66->TransferCount));
  VAR_68->resid = VAR_65->cm_length;

  if (VAR_73[0] == VAR_60 &&
      VAR_77->is_nvme &&
      (VAR_68->ccb_h.flags & VAR_6) == VAR_8)
   FUNC_20(VAR_67, VAR_14);
  else
   FUNC_20(VAR_67, VAR_15);

  break;
 }

 FUNC_16(VAR_64, VAR_68, VAR_66, VAR_65->cm_targ);

 if (VAR_69->flags & VAR_40) {
  VAR_67->ccb_h.status |= VAR_11;
  VAR_69->flags &= ~VAR_40;
  FUNC_13(VAR_64, VAR_52, "Command completed, unfreezing SIM "
      "queue\n");
 }

 if (FUNC_18(VAR_67) != VAR_14) {
  VAR_67->ccb_h.status |= VAR_10;
  FUNC_24(VAR_67->ccb_h.path, 1);
 }

 FUNC_14(VAR_64, VAR_65);
 FUNC_23(VAR_67);
}
