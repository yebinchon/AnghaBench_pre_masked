
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct scsi_sense_info {int byte2; int info; } ;
struct scsi_sense_fru {int fru; } ;
struct scsi_sense_data_fixed {int error_code; int fru; int cmd_spec_info; int info; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_sense_command {int command_info; } ;
typedef int scsi_sense_data_type ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;





 int VAR_0 ;
 int FUNC_0 (struct scsi_sense_data_fixed*,int *) ;
 int FUNC_1 (struct scsi_sense_data_fixed*,scalar_t__,int *) ;
 int VAR_1 ;


 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct scsi_sense_data_desc*,scalar_t__,int ) ;
 int FUNC_5 (struct scsi_sense_data*) ;

int
FUNC_6(struct scsi_sense_data *VAR_4, u_int VAR_5,
      uint8_t VAR_6, uint64_t *VAR_7, int64_t *VAR_8)
{
 scsi_sense_data_type VAR_9;

 if (VAR_5 == 0)
  goto bailout;

 VAR_9 = FUNC_5(VAR_4);

 switch (VAR_9) {
 case 129: {
  struct scsi_sense_data_desc *VAR_10;
  uint8_t *VAR_11;

  VAR_10 = (struct scsi_sense_data_desc *)VAR_4;

  VAR_11 = FUNC_4(VAR_10, VAR_5, VAR_6);
  if (VAR_11 == ((void*)0))
   goto bailout;

  switch (VAR_6) {
  case 130: {
   struct scsi_sense_info *VAR_12;

   VAR_12 = (struct scsi_sense_info *)VAR_11;

   if ((VAR_12->byte2 & VAR_1) == 0)
    goto bailout;

   *VAR_7 = FUNC_3(VAR_12->info);
   if (VAR_8 != ((void*)0))
    *VAR_8 = *VAR_7;
   break;
  }
  case 132: {
   struct scsi_sense_command *VAR_13;

   VAR_13 = (struct scsi_sense_command *)VAR_11;

   *VAR_7 = FUNC_3(VAR_13->command_info);
   if (VAR_8 != ((void*)0))
    *VAR_8 = *VAR_7;
   break;
  }
  case 131: {
   struct scsi_sense_fru *VAR_14;

   VAR_14 = (struct scsi_sense_fru *)VAR_11;

   if (VAR_14->fru == 0)
    goto bailout;

   *VAR_7 = VAR_14->fru;
   if (VAR_8 != ((void*)0))
    *VAR_8 = (int8_t)VAR_14->fru;
   break;
  }
  default:
   goto bailout;
   break;
  }
  break;
 }
 case 128: {
  struct scsi_sense_data_fixed *VAR_15;

  VAR_15 = (struct scsi_sense_data_fixed *)VAR_4;

  switch (VAR_6) {
  case 130: {
   uint32_t VAR_16;

   if ((VAR_15->error_code & VAR_0) == 0)
    goto bailout;

   if (FUNC_1(VAR_15, VAR_5, VAR_7) == 0)
    goto bailout;

   VAR_16 = FUNC_2(VAR_15->info);

   *VAR_7 = VAR_16;
   if (VAR_8 != ((void*)0))
    *VAR_8 = (int32_t)VAR_16;
   break;
  }
  case 132: {
   uint32_t VAR_17;

   if ((FUNC_1(VAR_15, VAR_5,
        VAR_2) == 0)
    || (FUNC_0(VAR_15, VAR_2) == 0))
    goto bailout;

   VAR_17 = FUNC_2(VAR_15->cmd_spec_info);
   if (VAR_17 == 0)
    goto bailout;

   *VAR_7 = VAR_17;
   if (VAR_8 != ((void*)0))
    *VAR_8 = (int32_t)VAR_17;
   break;
  }
  case 131:
   if ((FUNC_1(VAR_15, VAR_5, VAR_3) == 0)
    || (FUNC_0(VAR_15, VAR_3) == 0))
    goto bailout;

   if (VAR_15->fru == 0)
    goto bailout;

   *VAR_7 = VAR_15->fru;
   if (VAR_8 != ((void*)0))
    *VAR_8 = (int8_t)VAR_15->fru;
   break;
  default:
   goto bailout;
   break;
  }
  break;
 }
 default:
  goto bailout;
  break;
 }

 return (0);
bailout:
 return (1);
}
