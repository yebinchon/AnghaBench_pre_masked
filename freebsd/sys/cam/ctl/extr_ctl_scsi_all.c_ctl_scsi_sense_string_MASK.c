
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;
struct ctl_scsiio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_scsiio*,struct scsi_inquiry_data*,struct sbuf*,int ) ;
 char* FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,char*,int,int ) ;

char *
FUNC_4(struct ctl_scsiio *VAR_1,
        struct scsi_inquiry_data *VAR_2, char *VAR_3,
        int VAR_4)
{
 struct sbuf VAR_5;

 FUNC_3(&VAR_5, VAR_3, VAR_4, 0);

 FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_0);

 FUNC_2(&VAR_5);

 return(FUNC_1(&VAR_5));
}
