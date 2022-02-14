
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;
struct ctl_scsiio {int dummy; } ;
typedef int str ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_scsiio*,struct scsi_inquiry_data*,struct sbuf*,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,int,int ) ;

void
FUNC_5(struct ctl_scsiio *VAR_1,
       struct scsi_inquiry_data *VAR_2, FILE *VAR_3)
{
 struct sbuf VAR_4;
 char VAR_5[512];

 if ((VAR_1 == ((void*)0)) || (VAR_3 == ((void*)0)))
  return;

 FUNC_4(&VAR_4, VAR_5, sizeof(VAR_5), 0);

 FUNC_0(VAR_1, VAR_2, &VAR_4, VAR_0);

 FUNC_3(&VAR_4);

 FUNC_1(VAR_3, "%s", FUNC_2(&VAR_4));
}
