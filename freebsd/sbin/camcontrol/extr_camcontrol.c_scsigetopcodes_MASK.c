
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dxfer_len; int resid; } ;
struct TYPE_4__ {int status; int flags; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_report_supported_opcodes_timeout {int length; } ;
struct scsi_report_supported_opcodes_one {int support; int cdb_length; } ;
struct scsi_report_supported_opcodes_descr {int dummy; } ;
struct scsi_report_supported_opcodes_all {int length; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int,int *,int,int,int,int,int *,int,int ,int) ;
 int VAR_14 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;

int
FUNC_13(struct cam_device *VAR_15, int VAR_16, int VAR_17,
        int VAR_18, int VAR_19, int VAR_20,
        int VAR_21, int VAR_22, int VAR_23, int VAR_24,
        int VAR_25, uint32_t *VAR_26, uint8_t **VAR_27)
{
 union ccb *VAR_28 = ((void*)0);
 uint8_t *VAR_29 = ((void*)0);
 uint32_t VAR_30 = 0, VAR_31;
 uint32_t VAR_32 = 0;
 uint32_t VAR_33 = 0;
 struct scsi_report_supported_opcodes_all *VAR_34;
 struct scsi_report_supported_opcodes_one *VAR_35;
 int VAR_36 = 0;
 int VAR_37 = 0;




 *VAR_26 = 0;
 *VAR_27 = ((void*)0);

 VAR_28 = FUNC_4(VAR_15);
 if (VAR_28 == ((void*)0)) {
  FUNC_12("couldn't allocate CCB");
  VAR_37 = 1;
  goto bailout;
 }


 FUNC_0(&VAR_28->csio);

 if (VAR_16 != 0) {
  VAR_36 |= VAR_10;
  VAR_31 = 1;
  VAR_30 = sizeof(*VAR_35) + VAR_3;
 } else {
  VAR_31 = 256;
  VAR_30 = sizeof(*VAR_34) + (VAR_31 *
      sizeof(struct scsi_report_supported_opcodes_descr));
 }

 if (VAR_21 != 0) {
  VAR_36 |= VAR_12;
  VAR_30 += VAR_31 *
      sizeof(struct scsi_report_supported_opcodes_timeout);
 }

 if (VAR_19 != 0) {
  VAR_36 |= VAR_11;
  if (VAR_18 != 0)
   VAR_36 &= ~VAR_10;
 }

retry_alloc:
 if (VAR_29 != ((void*)0)) {
  FUNC_6(VAR_29);
  VAR_29 = ((void*)0);
 }

 VAR_29 = FUNC_7(VAR_30);
 if (VAR_29 == ((void*)0)) {
  FUNC_11("Unable to allocate %u bytes", VAR_30);
  VAR_37 = 1;
  goto bailout;
 }
 FUNC_1(VAR_29, VAR_30);

 FUNC_10(&VAR_28->csio,
                      VAR_23,
                     ((void*)0),
                         VAR_22,
                      VAR_36,
                         VAR_17,
                                 VAR_20,
                       VAR_29,
                        VAR_30,
                        VAR_13,
                      VAR_24 ? VAR_24 : 10000);

 VAR_28->ccb_h.flags |= VAR_0;

 if (VAR_23 != 0)
  VAR_28->ccb_h.flags |= VAR_4;

 if (FUNC_5(VAR_15, VAR_28) < 0) {
  FUNC_11("error sending REPORT SUPPORTED OPERATION CODES command");
  VAR_37 = 1;
  goto bailout;
 }

 if ((VAR_28->ccb_h.status & VAR_6) != VAR_5) {
  if (VAR_25 != 0)
   FUNC_2(VAR_15, VAR_28, VAR_2,
     VAR_1, VAR_14);
  VAR_37 = 1;
  goto bailout;
 }

 VAR_32 = VAR_28->csio.dxfer_len - VAR_28->csio.resid;

 if (((VAR_36 & VAR_9) == VAR_8)
  && (VAR_32 >= sizeof(*VAR_34))) {
  VAR_34 = (struct scsi_report_supported_opcodes_all *)VAR_29;
  VAR_33 = FUNC_9(VAR_34->length) + sizeof(*VAR_34);
 } else if (((VAR_36 & VAR_9) != VAR_8)
  && (VAR_32 >= sizeof(*VAR_35))) {
  uint32_t VAR_38;

  VAR_35 = (struct scsi_report_supported_opcodes_one *)VAR_29;
  VAR_38 = FUNC_8(VAR_35->cdb_length);
  VAR_33 = sizeof(*VAR_35) + VAR_38;
  if (VAR_35->support & VAR_7) {
   struct scsi_report_supported_opcodes_timeout *VAR_39;

   VAR_39 = (struct scsi_report_supported_opcodes_timeout *)
       &VAR_29[VAR_33];
   if (VAR_32 >= (VAR_33 + sizeof(VAR_39->length))) {
    VAR_33 += FUNC_8(VAR_39->length) +
        sizeof(VAR_39->length);
   } else {
    VAR_33 += sizeof(*VAR_39);
   }
  }
 }





 if ((VAR_33 != 0)
  && (VAR_33 > VAR_32)) {
  VAR_30 = VAR_33;
  goto retry_alloc;
 }

 *VAR_26 = VAR_32;
 *VAR_27 = VAR_29;
bailout:
 if (VAR_37 != 0)
  FUNC_6(VAR_29);

 FUNC_3(VAR_28);

 return (VAR_37);
}
