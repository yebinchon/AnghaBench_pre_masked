
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_progress {int add_sense_code_qual; int add_sense_code; int progress; int sense_key; } ;
struct scsi_sense_desc_header {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char const*) ;
 int FUNC_1 (struct sbuf*,char*,int ,int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sbuf*,int) ;
 int FUNC_4 (int ,int ,int ,struct scsi_inquiry_data*,char const**,char const**) ;

void
FUNC_5(struct sbuf *VAR_0, struct scsi_sense_data *VAR_1,
    u_int VAR_2, uint8_t *VAR_3, int VAR_4,
    struct scsi_inquiry_data *VAR_5,
    struct scsi_sense_desc_header *VAR_6)
{
 struct scsi_sense_progress *VAR_7;
 const char *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_7 = (struct scsi_sense_progress *)VAR_6;






 FUNC_4(VAR_7->sense_key, VAR_7->add_sense_code,
   VAR_7->add_sense_code_qual, VAR_5,
   &VAR_8, &VAR_9);

 VAR_10 = FUNC_2(VAR_7->progress);





 FUNC_0(VAR_0, VAR_8);
 FUNC_1(VAR_0, " asc:%x,%x (%s): ", VAR_7->add_sense_code,
      VAR_7->add_sense_code_qual, VAR_9);
 FUNC_3(VAR_0, VAR_10);
}
