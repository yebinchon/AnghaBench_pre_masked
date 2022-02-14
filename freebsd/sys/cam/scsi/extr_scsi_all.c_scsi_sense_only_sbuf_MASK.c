
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct scsi_sense_data_fixed {int info; } ;
struct scsi_sense_data_desc {int dummy; } ;
struct scsi_sense_data {int error_code; } ;
struct scsi_print_sense_info {char* path_str; int cdb_len; struct scsi_inquiry_data* inq_data; int * cdb; struct sbuf* sb; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_sense_data_fixed*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sbuf*,char const*) ;
 int FUNC_2 (struct sbuf*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sbuf*,int ) ;
 int FUNC_5 (struct sbuf*,int *,int,struct scsi_inquiry_data*,int ) ;
 int FUNC_6 (struct scsi_sense_data_desc*,int ,int ,struct scsi_print_sense_info*) ;
 int FUNC_7 (struct scsi_sense_data*,int ,int*,int*,int*,int*,int) ;
 int FUNC_8 (struct sbuf*,int ) ;
 int FUNC_9 (struct scsi_sense_data*,int ,struct scsi_inquiry_data*,int *) ;
 int FUNC_10 (struct scsi_sense_data*,int ,int ,int *,int *) ;
 int FUNC_11 (struct scsi_sense_data*,int ,int *) ;
 int FUNC_12 (struct scsi_sense_data*,int ,struct scsi_inquiry_data*,int *) ;
 int FUNC_13 (struct sbuf*,int *,int,struct scsi_inquiry_data*,int ) ;
 int VAR_6 ;
 int FUNC_14 (int,int,int,struct scsi_inquiry_data*,char const**,char const**) ;
 int FUNC_15 (struct scsi_sense_data*) ;
 int FUNC_16 (struct sbuf*,int,int *) ;
 int FUNC_17 (struct sbuf*,int ) ;

void
FUNC_18(struct scsi_sense_data *VAR_7, u_int VAR_8,
       struct sbuf *VAR_9, char *VAR_10,
       struct scsi_inquiry_data *VAR_11, uint8_t *VAR_12,
       int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_1(VAR_9, VAR_10);

 FUNC_7(VAR_7, VAR_8, &VAR_14, &VAR_15,
          &VAR_16, &VAR_17, 1);

 FUNC_2(VAR_9, "SCSI sense: ");
 switch (VAR_14) {
 case 130:
 case 128:
  FUNC_2(VAR_9, "Deferred error: ");


 case 131:
 case 129:
 {
  struct scsi_sense_data_desc *VAR_18;
  struct scsi_print_sense_info VAR_19;
  const char *VAR_20;
  const char *VAR_21;
  uint8_t VAR_22[3];
  uint64_t VAR_23;
  uint8_t VAR_24;
  FUNC_14(VAR_15, VAR_16, VAR_17, VAR_11,
    &VAR_20, &VAR_21);




  FUNC_1(VAR_9, VAR_20);
  FUNC_2(VAR_9, " asc:%x,%x (%s)\n", VAR_16, VAR_17, VAR_21);




  if (FUNC_9(VAR_7, VAR_8, VAR_11,
      &VAR_24) == 0 && VAR_24 != 0) {
   FUNC_1(VAR_9, VAR_10);
   FUNC_4(VAR_9, VAR_24);
   FUNC_2(VAR_9, "\n");
  } else if (FUNC_12(VAR_7, VAR_8, VAR_11,
      &VAR_24) == 0 && VAR_24 != 0) {
   FUNC_1(VAR_9, VAR_10);
   FUNC_17(VAR_9, VAR_24);
   FUNC_2(VAR_9, "\n");
  }




  if (FUNC_10(VAR_7, VAR_8, VAR_2,
     &VAR_23, ((void*)0)) == 0) {
   FUNC_1(VAR_9, VAR_10);
   FUNC_13(VAR_9, VAR_12, VAR_13, VAR_11, VAR_23);
   FUNC_2(VAR_9, "\n");
  }




  if (FUNC_10(VAR_7, VAR_8, VAR_1,
     &VAR_23, ((void*)0)) == 0) {
   FUNC_1(VAR_9, VAR_10);
   FUNC_8(VAR_9, VAR_23);
   FUNC_2(VAR_9, "\n");
  }




  if (FUNC_10(VAR_7, VAR_8, VAR_0,
     &VAR_23, ((void*)0)) == 0) {
   FUNC_1(VAR_9, VAR_10);
   FUNC_5(VAR_9, VAR_12, VAR_13, VAR_11, VAR_23);
   FUNC_2(VAR_9, "\n");
  }




  if (FUNC_11(VAR_7, VAR_8, VAR_22) == 0) {
   FUNC_1(VAR_9, VAR_10);
   FUNC_16(VAR_9, VAR_15, VAR_22);
   FUNC_2(VAR_9, "\n");
  }






  if (FUNC_15(VAR_7) != VAR_4)
   break;

  VAR_18 = (struct scsi_sense_data_desc *)VAR_7;

  VAR_19.sb = VAR_9;
  VAR_19.path_str = VAR_10;
  VAR_19.cdb = VAR_12;
  VAR_19.cdb_len = VAR_13;
  VAR_19.inq_data = VAR_11;




  FUNC_6(VAR_18, VAR_8, VAR_6,
      &VAR_19);
  break;

 }
 case -1:





  FUNC_2(VAR_9, "No sense data present\n");
  break;
 default: {
  FUNC_2(VAR_9, "Error code 0x%x", VAR_14);
  if (VAR_7->error_code & VAR_3) {
   struct scsi_sense_data_fixed *VAR_25;

   VAR_25 = (struct scsi_sense_data_fixed *)VAR_7;

   if (FUNC_0(VAR_25, VAR_8, VAR_5)){
    uint32_t VAR_26;

    VAR_26 = FUNC_3(VAR_25->info);

    FUNC_2(VAR_9, " at block no. %d (decimal)",
         VAR_26);
   }
  }
  FUNC_2(VAR_9, "\n");
  break;
 }
 }
}
