
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
typedef scalar_t__ u_int ;
struct scsi_sense_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ max_sense; } ;
struct TYPE_3__ {int rlec; } ;
struct ctl_lun {TYPE_2__ MODE_CTRLE; TYPE_1__ MODE_CTRL; } ;
typedef scalar_t__ scsi_sense_data_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct scsi_sense_data*,scalar_t__*,scalar_t__,int,int,int,int,int ) ;

void
FUNC_1(struct scsi_sense_data *VAR_5, u_int *VAR_6,
    void *VAR_7, scsi_sense_data_type VAR_8, int VAR_9,
    int VAR_10, int VAR_11, int VAR_12, va_list VAR_13)
{
 struct ctl_lun *VAR_14;

 VAR_14 = (struct ctl_lun *)VAR_7;





 if (VAR_8 == VAR_4) {



  if (VAR_11 == 0x29 || (VAR_11 == 0x2A && VAR_12 == 0x01))
   VAR_8 = VAR_3;
  else





  if ((VAR_14 != ((void*)0)) && (VAR_14->MODE_CTRL.rlec & VAR_0))
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_3;
 }




 if (*VAR_6 == 0) {
  if ((VAR_14 != ((void*)0)) && (VAR_14->MODE_CTRLE.max_sense != 0))
   *VAR_6 = VAR_14->MODE_CTRLE.max_sense;
  else
   *VAR_6 = VAR_1;
 }

 FUNC_0(VAR_5, VAR_6, VAR_8,
     VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
