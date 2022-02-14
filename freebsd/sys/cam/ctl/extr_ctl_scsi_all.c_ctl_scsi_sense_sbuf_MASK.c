
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;
struct ctl_scsiio {int cdb_len; int cdb; int sense_len; int sense_data; } ;
typedef int scsi_sense_string_flags ;
typedef int path_str ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_scsiio*,struct scsi_inquiry_data*,struct sbuf*) ;
 int FUNC_1 (union ctl_io*,char*,int) ;
 int FUNC_2 (struct sbuf*,char*) ;
 int FUNC_3 (struct sbuf*,char*) ;
 int FUNC_4 (int *,int ,struct sbuf*,char*,struct scsi_inquiry_data*,int ,int ) ;

int
FUNC_5(struct ctl_scsiio *VAR_1,
      struct scsi_inquiry_data *VAR_2, struct sbuf *VAR_3,
      scsi_sense_string_flags VAR_4)
{
 char VAR_5[64];

 if ((VAR_1 == ((void*)0)) || (VAR_3 == ((void*)0)))
  return(-1);

 FUNC_1((union ctl_io *)VAR_1, VAR_5, sizeof(VAR_5));

 if (VAR_4 & VAR_0) {

  FUNC_2(VAR_3, VAR_5);

  FUNC_0(VAR_1, VAR_2, VAR_3);

  FUNC_3(VAR_3, "\n");
 }

 FUNC_4(&VAR_1->sense_data, VAR_1->sense_len, VAR_3,
        VAR_5, VAR_2, VAR_1->cdb, VAR_1->cdb_len);

 return(0);
}
