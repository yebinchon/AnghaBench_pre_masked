
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_forwarded {scalar_t__ length; scalar_t__ sense_data; } ;
struct scsi_sense_desc_header {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,int,int,char const*) ;
 int FUNC_1 (struct scsi_sense_data*,scalar_t__,int*,int*,int*,int*,int) ;
 int FUNC_2 (int,int,int,int *,char const**,char const**) ;

void
FUNC_3(struct sbuf *VAR_0, struct scsi_sense_data *VAR_1,
    u_int VAR_2, uint8_t *VAR_3, int VAR_4,
    struct scsi_inquiry_data *VAR_5,
    struct scsi_sense_desc_header *VAR_6)
{
 struct scsi_sense_forwarded *VAR_7;
 const char *VAR_8;
 const char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_7 = (struct scsi_sense_forwarded *)VAR_6;
 FUNC_1((struct scsi_sense_data *)VAR_7->sense_data,
     VAR_7->length - 2, &VAR_10, &VAR_11, &VAR_12, &VAR_13, 1);
 FUNC_2(VAR_11, VAR_12, VAR_13, ((void*)0), &VAR_8, &VAR_9);

 FUNC_0(VAR_0, "Forwarded sense: %s asc:%x,%x (%s): ",
     VAR_8, VAR_12, VAR_13, VAR_9);
}
