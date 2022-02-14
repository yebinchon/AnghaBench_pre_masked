
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ scsi_status; scalar_t__ sense_resid; scalar_t__ sense_len; struct scsi_sense_data sense_data; } ;
struct TYPE_3__ {scalar_t__ func_code; int status; int flags; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct scsi_sense_data**,struct scsi_sense_data**,int) ;
 int FUNC_1 (struct scsi_sense_data*,scalar_t__,int*,int*,int*,int*,int) ;

int
FUNC_2(union ccb *VAR_7,
    int *VAR_8, int *VAR_9, int *VAR_10, int *VAR_11)
{
 struct scsi_sense_data *VAR_12;


 if (VAR_7->ccb_h.func_code != VAR_6 ||
     (VAR_7->ccb_h.status & VAR_4) != VAR_1 ||
     (VAR_7->csio.scsi_status != VAR_5) ||
     (VAR_7->ccb_h.status & VAR_0) == 0 ||
     (VAR_7->ccb_h.flags & VAR_2))
  return (0);

 if (VAR_7->ccb_h.flags & VAR_3)
  FUNC_0((struct scsi_sense_data **)&VAR_7->csio.sense_data,
      &VAR_12, sizeof(struct scsi_sense_data *));
 else
  VAR_12 = &VAR_7->csio.sense_data;
 FUNC_1(VAR_12,
     VAR_7->csio.sense_len - VAR_7->csio.sense_resid,
     VAR_8, VAR_9, VAR_10, VAR_11, 1);
 if (*VAR_8 == -1)
  return (0);
 return (1);
}
