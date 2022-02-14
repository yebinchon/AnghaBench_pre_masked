
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_inquiry_data {int dummy; } ;
typedef int str ;
typedef int FILE ;


 char* FUNC_0 (union ctl_io*,struct scsi_inquiry_data*,char*,int) ;
 int FUNC_1 (int *,char*,char*) ;

void
FUNC_2(union ctl_io *VAR_0, struct scsi_inquiry_data *VAR_1,
     FILE *VAR_2)
{
 char VAR_3[512];

 FUNC_1(VAR_2, "%s", FUNC_0(VAR_0, VAR_1, VAR_3,
  sizeof(VAR_3)));
}
