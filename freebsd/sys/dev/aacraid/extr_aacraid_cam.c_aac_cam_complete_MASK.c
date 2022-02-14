
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ func_code; int flags; scalar_t__ target_lun; int status; } ;
struct TYPE_6__ {scalar_t__* cdb_ptr; scalar_t__* cdb_bytes; } ;
struct TYPE_7__ {int sense_len; int* data_ptr; TYPE_2__ cdb_io; int sense_data; int scsi_status; } ;
union ccb {TYPE_4__ ccb_h; TYPE_3__ csio; } ;
typedef scalar_t__ u_int8_t ;
struct scsi_sense_data {int dummy; } ;
struct aac_srb_response {int sense_len; scalar_t__ fib_status; int * sense; int scsi_status; int srb_status; } ;
struct aac_softc {int aac_feature_bits; int hint_flags; int aac_dev; } ;
struct aac_command {int cm_flags; TYPE_1__* cm_fib; union ccb* cm_ccb; struct aac_softc* cm_sc; } ;
struct TYPE_5__ {int * data; } ;


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
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct aac_command*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct aac_softc*,char*,char*) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct aac_command *VAR_17)
{
 union ccb *VAR_18;
 struct aac_srb_response *VAR_19;
 struct aac_softc *VAR_20;

 VAR_20 = VAR_17->cm_sc;
 FUNC_4(VAR_20, VAR_10, "");
 VAR_18 = VAR_17->cm_ccb;
 VAR_19 = (struct aac_srb_response *)&VAR_17->cm_fib->data[0];

 if (VAR_17->cm_flags & VAR_0) {

  VAR_19->srb_status = VAR_7;
  VAR_19->scsi_status = VAR_12;
  VAR_19->sense_len = 0;
 }

 if (VAR_17->cm_flags & VAR_1) {
  VAR_18->ccb_h.status = VAR_8;
 } else if (VAR_19->fib_status != 0) {
  FUNC_3(VAR_20->aac_dev, "Passthru FIB failed!\n");
  VAR_18->ccb_h.status = VAR_6;
 } else {




  VAR_18->ccb_h.status = VAR_19->srb_status;


  if (VAR_18->ccb_h.func_code == VAR_16) {
   u_int8_t VAR_21, VAR_22;

   VAR_18->csio.scsi_status = VAR_19->scsi_status;


   if (VAR_19->sense_len) {
    int VAR_23, VAR_24;

    VAR_24 = sizeof(struct scsi_sense_data);
    FUNC_2(&VAR_18->csio.sense_data, VAR_24);
    VAR_23 = (VAR_19->sense_len >
        VAR_24) ? VAR_24 :
        VAR_19->sense_len;
    FUNC_1(&VAR_19->sense[0], &VAR_18->csio.sense_data,
        VAR_19->sense_len);
    VAR_18->csio.sense_len = VAR_23;
    VAR_18->ccb_h.status |= VAR_3;

   }


   if (VAR_18->ccb_h.flags & VAR_4)
    VAR_21 = VAR_18->csio.cdb_io.cdb_ptr[0];
   else
    VAR_21 = VAR_18->csio.cdb_io.cdb_bytes[0];

   if (VAR_21 == VAR_11) {
    if (VAR_18->ccb_h.status == VAR_7) {
      VAR_22 = VAR_18->csio.data_ptr[0] & 0x1f;




      if ((VAR_22 == VAR_13 &&
        !(VAR_20->aac_feature_bits & VAR_2)) ||
        (VAR_22 == VAR_15))
        VAR_18->csio.data_ptr[0] =
       ((VAR_22 & 0xe0) | VAR_14);


      if (VAR_18->csio.data_ptr[0] & 0x20) {
     if (VAR_20->hint_flags & 8) {

       VAR_18->csio.data_ptr[0] &= 0xdf;
     } else {

       VAR_18->csio.data_ptr[0] |= 0x10;
     }
      }
    } else if (VAR_18->ccb_h.status == VAR_9 &&
      VAR_18->ccb_h.target_lun != 0) {

      VAR_18->ccb_h.status = VAR_5;
    }
   }
  }
 }

 FUNC_0(VAR_17);
 FUNC_5(VAR_18);
}
