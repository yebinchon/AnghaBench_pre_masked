
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sense_key_table_entry {char* desc; } ;
struct scsi_inquiry_data {int dummy; } ;
struct asc_table_entry {char* desc; } ;


 int FUNC_0 (int,int,int,struct scsi_inquiry_data*,struct sense_key_table_entry const**,struct asc_table_entry const**) ;

void
FUNC_1(int VAR_0, int VAR_1, int VAR_2,
  struct scsi_inquiry_data *VAR_3,
  const char **VAR_4, const char **VAR_5)
{
 const struct asc_table_entry *VAR_6;
 const struct sense_key_table_entry *VAR_7;

 FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3,
     &VAR_7,
     &VAR_6);

 if (VAR_7 != ((void*)0))
  *VAR_4 = VAR_7->desc;
 else
  *VAR_4 = "Invalid Sense Key";

 if (VAR_6 != ((void*)0))
  *VAR_5 = VAR_6->desc;
 else if (VAR_1 >= 0x80 && VAR_1 <= 0xff)
  *VAR_5 = "Vendor Specific ASC";
 else if (VAR_2 >= 0x80 && VAR_2 <= 0xff)
  *VAR_5 = "Vendor Specific ASCQ";
 else
  *VAR_5 = "Reserved ASC/ASCQ pair";
}
