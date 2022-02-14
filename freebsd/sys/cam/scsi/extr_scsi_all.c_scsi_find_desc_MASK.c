
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_find_desc_info {int * header; int desc_type; } ;


 int FUNC_0 (struct scsi_sense_data_desc*,int ,int ,struct scsi_find_desc_info*) ;
 int VAR_0 ;

uint8_t *
FUNC_1(struct scsi_sense_data_desc *VAR_1, u_int VAR_2,
        uint8_t VAR_3)
{
 struct scsi_find_desc_info VAR_4;

 VAR_4.desc_type = VAR_3;
 VAR_4.header = ((void*)0);

 FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_4);

 return ((uint8_t *)VAR_4.header);
}
