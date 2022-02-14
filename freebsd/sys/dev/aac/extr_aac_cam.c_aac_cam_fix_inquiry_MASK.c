
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ status; scalar_t__ target_lun; } ;
struct TYPE_4__ {scalar_t__* cdb_bytes; scalar_t__* cdb_ptr; } ;
struct TYPE_5__ {scalar_t__* data_ptr; TYPE_1__ cdb_io; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
typedef scalar_t__ uint8_t ;
struct scsi_inquiry_data {int dummy; } ;
struct aac_softc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct scsi_inquiry_data*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_2(struct aac_softc *VAR_12, union ccb *VAR_13)
{
 struct scsi_inquiry_data *VAR_14;
 uint8_t *VAR_15;
 uint8_t VAR_16, VAR_17;


 if (VAR_13->ccb_h.flags & VAR_1)
  VAR_15 = VAR_13->csio.cdb_io.cdb_ptr;
 else
  VAR_15 = VAR_13->csio.cdb_io.cdb_bytes;

 if (VAR_15[0] != VAR_5)
  return;

 if (VAR_13->ccb_h.status == VAR_3) {
  VAR_14 = (struct scsi_inquiry_data *)VAR_13->csio.data_ptr;
  VAR_16 = FUNC_1(VAR_14);
  VAR_17 = FUNC_0(VAR_14);





  if (((VAR_16 == VAR_9) ||
      (VAR_16 == VAR_11) ||
      (VAR_12->flags & VAR_0))) {







   if ((VAR_15[1] & VAR_8) == 0 && VAR_16 == VAR_9 &&
       VAR_17 == VAR_7)
    VAR_17 = VAR_6;
   VAR_13->csio.data_ptr[0] = (VAR_17 << 5) | VAR_10;
  }
 } else if (VAR_13->ccb_h.status == VAR_4 &&
  VAR_13->ccb_h.target_lun != 0) {

  VAR_13->ccb_h.status = VAR_2;
 }
}
