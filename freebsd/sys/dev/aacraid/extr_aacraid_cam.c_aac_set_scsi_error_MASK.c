
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_data {int error_code; int extra_len; scalar_t__ add_sense_code_qual; scalar_t__ add_sense_code; scalar_t__ flags; } ;
struct TYPE_4__ {int sense_len; struct scsi_sense_data sense_data; scalar_t__ scsi_status; } ;
struct TYPE_3__ {int status; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef scalar_t__ u_int8_t ;
struct scsi_sense_data_fixed {int dummy; } ;
struct aac_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_sense_data*,int) ;
 int FUNC_1 (struct aac_softc*,char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct aac_softc *VAR_6, union ccb *VAR_7, u_int8_t VAR_8,
 u_int8_t VAR_9, u_int8_t VAR_10, u_int8_t VAR_11)
{




 struct scsi_sense_data *VAR_12 = &VAR_7->csio.sense_data;


 FUNC_1(VAR_6, VAR_2, "Error %d!", VAR_8);

 VAR_7->ccb_h.status = VAR_1;
 VAR_7->csio.scsi_status = VAR_8;
 if (VAR_8 == VAR_3) {
  VAR_7->ccb_h.status |= VAR_0;
  FUNC_0(&VAR_7->csio.sense_data, VAR_7->csio.sense_len);
  VAR_7->csio.sense_data.error_code =
   VAR_4 | VAR_5;
  VAR_12->flags = VAR_9;
  if (VAR_7->csio.sense_len >= 14) {
   VAR_12->extra_len = 6;
   VAR_12->add_sense_code = VAR_10;
   VAR_12->add_sense_code_qual = VAR_11;
  }
 }
}
