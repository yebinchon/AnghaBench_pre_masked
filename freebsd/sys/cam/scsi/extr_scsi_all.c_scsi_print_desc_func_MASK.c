
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scsi_sense_desc_header {int desc_type; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_print_sense_info {int sb; int inq_data; int cdb_len; int cdb; int path_str; } ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,struct scsi_sense_data*,int ,int ,int ,int ,struct scsi_sense_desc_header*) ;

__attribute__((used)) static int
FUNC_2(struct scsi_sense_data_desc *VAR_0, u_int VAR_1,
       struct scsi_sense_desc_header *VAR_2, void *VAR_3)
{
 struct scsi_print_sense_info *VAR_4;

 VAR_4 = (struct scsi_print_sense_info *)VAR_3;

 switch (VAR_2->desc_type) {
 case 130:
 case 131:
 case 132:
 case 129:
 case 133:
 case 128:




  break;
 default: {
  FUNC_0(VAR_4->sb, "%s", VAR_4->path_str);
  FUNC_1(VAR_4->sb,
         (struct scsi_sense_data *)VAR_0, VAR_1,
         VAR_4->cdb, VAR_4->cdb_len,
         VAR_4->inq_data, VAR_2);
  FUNC_0(VAR_4->sb, "\n");
  break;
 }
 }





 return (0);
}
