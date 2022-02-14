
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_stream {int length; int byte3; } ;
struct scsi_sense_sks {int length; int * sense_key_spec; } ;
struct scsi_sense_info {int length; int * info; } ;
struct scsi_sense_fru {int length; int fru; } ;
struct scsi_sense_desc_header {int length; } ;
struct scsi_sense_data_fixed {int dummy; } ;
struct scsi_sense_data_desc {int error_code; int extra_len; int* sense_desc; int sense_key; int add_sense_code_qual; int add_sense_code; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_sense_command {int length; int * command_info; } ;



 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct scsi_sense_data*,int *,int *,int ,int,int,int ,int ,int ,int,int *,int ,int,int *,int ,int,int *,int ,int,int *,int ,int,int *,int ) ;

void
FUNC_1(struct scsi_sense_data_desc *VAR_12,
     struct scsi_sense_data_fixed *VAR_13)
{
 int VAR_14;
 uint8_t *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 uint8_t *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 int VAR_23 = 0, VAR_24 = 0;
 int VAR_25;
 u_int VAR_26;

 if ((VAR_12->error_code & VAR_8) == VAR_0)
  VAR_14 = 1;
 else
  VAR_14 = 0;

 for (VAR_25 = 0; VAR_25 < (int)(VAR_12->extra_len - 1);) {
  struct scsi_sense_desc_header *VAR_27;

  VAR_27 = (struct scsi_sense_desc_header *)
      &VAR_12->sense_desc[VAR_25];





  if ((VAR_25 + VAR_27->length + sizeof(*VAR_27)) >
       VAR_12->extra_len)
   break;

  switch (VAR_12->sense_desc[VAR_25]) {
  case 130: {
   struct scsi_sense_info *VAR_28;

   VAR_28 = (struct scsi_sense_info *)VAR_27;

   VAR_15 = VAR_28->info;
   VAR_20 = sizeof(VAR_28->info);

   VAR_25 += VAR_28->length +
       sizeof(struct scsi_sense_desc_header);
   break;
  }
  case 132: {
   struct scsi_sense_command *VAR_29;

   VAR_29 = (struct scsi_sense_command *)VAR_27;
   VAR_16 = VAR_29->command_info;
   VAR_21 = sizeof(VAR_29->command_info);

   VAR_25 += VAR_29->length +
       sizeof(struct scsi_sense_desc_header);
   break;
  }
  case 131: {
   struct scsi_sense_fru *VAR_30;

   VAR_30 = (struct scsi_sense_fru *)VAR_27;
   VAR_17 = &VAR_30->fru;
   VAR_22 = sizeof(VAR_30->fru);
   VAR_25 += VAR_30->length +
       sizeof(struct scsi_sense_desc_header);
   break;
  }
  case 129: {
   struct scsi_sense_sks *VAR_31;

   VAR_31 = (struct scsi_sense_sks *)VAR_27;
   VAR_18 = VAR_31->sense_key_spec;
   VAR_23 = sizeof(VAR_31->sense_key_spec);

   VAR_25 = VAR_31->length +
       sizeof(struct scsi_sense_desc_header);
   break;
  }
  case 128: {
   struct scsi_sense_stream *VAR_32;

   VAR_32 = (struct scsi_sense_stream *)VAR_27;
   VAR_19 = &VAR_32->byte3;
   VAR_24 = sizeof(VAR_32->byte3);
   VAR_25 = VAR_32->length +
       sizeof(struct scsi_sense_desc_header);
   break;
  }
  default:




   VAR_25 += sizeof(*VAR_27) + VAR_27->length;
   break;
  }
 }

 VAR_26 = VAR_9;
 FUNC_0((struct scsi_sense_data *)VAR_13, &VAR_26,
              ((void*)0),
                       VAR_11,
      VAR_14,
                    VAR_12->sense_key & VAR_10,
              VAR_12->add_sense_code,
               VAR_12->add_sense_code_qual,


      (VAR_15 != ((void*)0)) ? VAR_3 : VAR_5,
      VAR_20,
      VAR_15,


      (VAR_16 != ((void*)0)) ? VAR_1 : VAR_5,
      VAR_21,
      VAR_16,


      (VAR_17 != ((void*)0)) ? VAR_2 : VAR_5,
      VAR_22,
      VAR_17,


      (VAR_18 != ((void*)0)) ? VAR_6 : VAR_5,
      VAR_23,
      VAR_18,


      (VAR_19 != ((void*)0)) ? VAR_7 : VAR_5,
      VAR_24,
      VAR_19,

      VAR_4);
}
