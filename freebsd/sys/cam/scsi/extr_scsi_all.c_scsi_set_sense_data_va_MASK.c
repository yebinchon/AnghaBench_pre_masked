
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ u_int ;
struct scsi_sense_data {int dummy; } ;
typedef scalar_t__ scsi_sense_data_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct scsi_sense_data*,scalar_t__*,scalar_t__,int,int,int,int,int ) ;
 int FUNC_1 (struct scsi_sense_data*,scalar_t__*,scalar_t__,int,int,int,int,int ) ;

void
FUNC_2(struct scsi_sense_data *VAR_2, u_int *VAR_3,
        scsi_sense_data_type VAR_4, int VAR_5,
        int VAR_6, int VAR_7, int VAR_8, va_list VAR_9)
{

 if (*VAR_3 > VAR_0)
  *VAR_3 = VAR_0;
 if (VAR_4 == VAR_1)
  FUNC_0(VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 else
  FUNC_1(VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
