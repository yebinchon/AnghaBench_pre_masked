
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int u_int ;
struct scsi_sense_data_fixed {int dummy; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {scalar_t__ error_code; } ;
struct scsi_request_sense {int byte2; int length; } ;
struct ctl_softc {scalar_t__ ha_link; } ;
struct TYPE_4__ {int flags; int nexus; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_total_len; int kern_data_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ kern_data_ptr; scalar_t__ cdb; } ;
struct TYPE_3__ {scalar_t__ mrie; } ;
struct ctl_lun {int flags; int ie_asc; int ie_ascq; int lun_lock; TYPE_1__ MODE_IE; struct scsi_sense_data** pending_sense; } ;
typedef scalar_t__ scsi_sense_data_type ;
typedef scalar_t__ ctl_ua_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct ctl_softc* FUNC_2 (struct ctl_scsiio*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (struct ctl_lun*,size_t,struct scsi_sense_data*,int *,scalar_t__) ;
 int VAR_16 ;
 int FUNC_4 (union ctl_io*) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (struct scsi_sense_data_fixed*,struct scsi_sense_data_desc*) ;
 int FUNC_7 (struct scsi_sense_data_desc*,struct scsi_sense_data_fixed*) ;
 int FUNC_8 (struct scsi_sense_data*,int *,struct ctl_lun*,scalar_t__,int,int ,int,int,int ) ;
 int FUNC_9 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 (struct scsi_sense_data*,struct scsi_sense_data*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct scsi_sense_data*) ;

int
FUNC_15(struct ctl_scsiio *VAR_17)
{
 struct ctl_softc *VAR_18 = FUNC_2(VAR_17);
 struct ctl_lun *VAR_19 = FUNC_1(VAR_17);
 struct scsi_request_sense *VAR_20;
 struct scsi_sense_data *VAR_21, *VAR_22;
 uint32_t VAR_23;
 int VAR_24;
 u_int VAR_25 = VAR_11;
 scsi_sense_data_type VAR_26;
 ctl_ua_type VAR_27;
 uint8_t VAR_28 = 0, VAR_29 = 0;

 VAR_20 = (struct scsi_request_sense *)VAR_17->cdb;

 FUNC_0(("ctl_request_sense\n"));




 if (VAR_20->byte2 & VAR_9)
  VAR_26 = VAR_14;
 else
  VAR_26 = VAR_15;

 VAR_17->kern_data_ptr = FUNC_10(sizeof(*VAR_21), VAR_6, VAR_7);
 VAR_21 = (struct scsi_sense_data *)VAR_17->kern_data_ptr;
 VAR_17->kern_sg_entries = 0;
 VAR_17->kern_rel_offset = 0;






 VAR_17->kern_data_len = VAR_20->length;
 VAR_17->kern_total_len = VAR_20->length;




 if (VAR_19 == ((void*)0) ||
     ((VAR_19->flags & VAR_2) == 0 &&
      VAR_18->ha_link < VAR_1)) {

  FUNC_8(VAR_21, &VAR_25, ((void*)0), VAR_26,
                        1,
                    VAR_12,
              0x25,
               0x00,
      VAR_10);
  goto send;
 }

 VAR_24 = 0;
 VAR_23 = FUNC_5(&VAR_17->io_hdr.nexus);




 FUNC_12(&VAR_19->lun_lock);
 VAR_22 = VAR_19->pending_sense[VAR_23 / VAR_3];
 if (VAR_22 != ((void*)0))
  VAR_22 += VAR_23 % VAR_3;
 if (VAR_22 != ((void*)0) && VAR_22->error_code != 0) {
  scsi_sense_data_type VAR_30;





  VAR_30 = FUNC_14(VAR_22);
  if ((VAR_30 == VAR_15)
   && (VAR_26 == VAR_14))
   FUNC_6((struct scsi_sense_data_fixed *)
       VAR_22, (struct scsi_sense_data_desc *)VAR_21);
  else if ((VAR_30 == VAR_14)
        && (VAR_26 == VAR_15))
   FUNC_7((struct scsi_sense_data_desc *)
       VAR_22, (struct scsi_sense_data_fixed *)VAR_21);
  else
   FUNC_11(VAR_21, VAR_22, sizeof(*VAR_21));

  VAR_22->error_code = 0;
  VAR_24 = 1;
 } else {
  VAR_27 = FUNC_3(VAR_19, VAR_23, VAR_21, &VAR_25,
      VAR_26);
  if (VAR_27 != VAR_5)
   VAR_24 = 1;
 }
 if (VAR_24 == 0) {



  if (VAR_19->MODE_IE.mrie != VAR_8) {
   VAR_28 = VAR_19->ie_asc;
   VAR_29 = VAR_19->ie_ascq;
  }
  FUNC_8(VAR_21, &VAR_25, VAR_19, VAR_26,
                        1,
                    VAR_13,
              VAR_28,
               VAR_29,
      VAR_10);
 }
 FUNC_13(&VAR_19->lun_lock);

send:




 FUNC_9(VAR_17);
 VAR_17->io_hdr.flags |= VAR_0;
 VAR_17->be_move_done = VAR_16;
 FUNC_4((union ctl_io *)VAR_17);
 return (VAR_4);
}
