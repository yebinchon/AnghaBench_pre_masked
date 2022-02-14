
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;
struct ctl_scsiio {int * cdb; } ;
typedef int cdb_str ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct scsi_inquiry_data*) ;

int
FUNC_3(struct ctl_scsiio *VAR_1,
   struct scsi_inquiry_data *VAR_2, struct sbuf *VAR_3)
{
 char VAR_4[(VAR_0 * 3) + 1];

 FUNC_0(VAR_3, "%s. CDB: %s",
      FUNC_2(VAR_1->cdb[0], VAR_2),
      FUNC_1(VAR_1->cdb, VAR_4, sizeof(VAR_4)));

 return(0);
}
