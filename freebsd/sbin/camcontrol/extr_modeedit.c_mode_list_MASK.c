
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct scsi_mode_page_header_sp {int page_code; int subpage; int page_length; } ;
struct scsi_mode_page_header {int page_code; scalar_t__ page_length; } ;
struct scsi_mode_header_6 {int data_length; int blk_desc_len; } ;
struct scsi_mode_header_10 {int blk_desc_len; int data_length; } ;
struct pagename {char* name; } ;
struct cam_device {int dummy; } ;
typedef int data ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (struct cam_device*,int*,int,int ,int,int ,int ,int,int,int,int *,int) ;
 struct pagename* FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (char*,char const*) ;

void
FUNC_7(struct cam_device *VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13,
   int VAR_14, int VAR_15, int VAR_16)
{
 u_int8_t VAR_17[VAR_2];
 struct scsi_mode_page_header *VAR_18;
 struct scsi_mode_page_header_sp *VAR_19;
 struct pagename *VAR_20;
 const char *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;

 if ((VAR_21 = FUNC_0("SCSI_MODES")) == ((void*)0))
  VAR_21 = VAR_0;

 if (FUNC_1(VAR_21, 0, 0) != 0 && VAR_8 && VAR_7 == VAR_1) {

  FUNC_6("cannot open modepage database \"%s\"", VAR_21);
 }


 FUNC_2(VAR_9, &VAR_10, VAR_11, 0, VAR_12, VAR_4,
     VAR_13 ? VAR_6 : 0,
     VAR_14, VAR_15, VAR_16, VAR_17, sizeof(VAR_17));


 if (VAR_10 == 6) {
  struct scsi_mode_header_6 *VAR_26 =
      (struct scsi_mode_header_6 *)VAR_17;
  VAR_22 = VAR_26->data_length;
  VAR_23 = sizeof(*VAR_26) + VAR_26->blk_desc_len;
 } else {
  struct scsi_mode_header_10 *VAR_27 =
      (struct scsi_mode_header_10 *)VAR_17;
  VAR_22 = FUNC_5(VAR_27->data_length);
  VAR_23 = sizeof(*VAR_27) + FUNC_5(VAR_27->blk_desc_len);
 }

 while (VAR_23 < VAR_22) {

  VAR_18 = (struct scsi_mode_page_header *)(VAR_17 + VAR_23);

  if ((VAR_18->page_code & VAR_3) == 0) {
   VAR_24 = VAR_18->page_code & VAR_5;
   VAR_25 = 0;
   VAR_23 += sizeof(*VAR_18) + VAR_18->page_length;
  } else {
   VAR_19 = (struct scsi_mode_page_header_sp *)VAR_18;
   VAR_24 = VAR_19->page_code & VAR_5;
   VAR_25 = VAR_19->subpage;
   VAR_23 += sizeof(*VAR_19) + FUNC_5(VAR_19->page_length);
  }

  VAR_20 = FUNC_3(VAR_24, VAR_25);
  if (VAR_25 == 0) {
   FUNC_4("0x%02x\t%s\n", VAR_24,
       VAR_20 ? VAR_20->name : "");
  } else {
   FUNC_4("0x%02x,0x%02x\t%s\n", VAR_24, VAR_25,
       VAR_20 ? VAR_20->name : "");
  }
 }
}
