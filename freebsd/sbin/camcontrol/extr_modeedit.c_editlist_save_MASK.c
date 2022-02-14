
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int8_t ;
struct scsi_mode_page_header_sp {int page_length; } ;
struct scsi_mode_page_header {int page_code; size_t page_length; } ;
struct scsi_mode_header_6 {scalar_t__ blk_desc_len; int data_length; scalar_t__ dev_spec; } ;
struct scsi_mode_header_10 {scalar_t__ blk_desc_len; int data_length; scalar_t__ dev_spec; } ;
struct cam_device {scalar_t__ pd_type; } ;
typedef int data ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct scsi_mode_page_header*,struct scsi_mode_header_6*,int) ;
 int FUNC_2 (int *,size_t,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct scsi_mode_page_header* FUNC_3 (struct scsi_mode_header_6*) ;
 struct scsi_mode_page_header* FUNC_4 (struct scsi_mode_header_6*) ;
 int VAR_8 ;
 int FUNC_5 (struct cam_device*,int,int,int,int,int,int *,size_t) ;
 int FUNC_6 (struct cam_device*,int*,int,int ,int,int,int,int,int,int,int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct cam_device *VAR_9, int VAR_10, int VAR_11, int VAR_12,
    int VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17)
{
 u_int8_t VAR_18[VAR_0];
 u_int8_t *VAR_19;
 struct scsi_mode_page_header *VAR_20;
 struct scsi_mode_page_header_sp *VAR_21;
 size_t VAR_22, VAR_23, VAR_24;


 if (! VAR_7)
  return;


 FUNC_6(VAR_9, &VAR_10, VAR_11, 0, VAR_12, VAR_13, VAR_14, VAR_15,
     VAR_16, VAR_17, VAR_18, sizeof(VAR_18));
 if (VAR_10 == 6) {
  struct scsi_mode_header_6 *VAR_25 =
      (struct scsi_mode_header_6 *)VAR_18;
  VAR_23 = sizeof(*VAR_25);

  if (VAR_25->blk_desc_len > 0) {
   FUNC_1(FUNC_4(VAR_25), VAR_25 + 1,
       VAR_25->data_length + 1 - VAR_23 -
       VAR_25->blk_desc_len);
   VAR_25->blk_desc_len = 0;
  }
  VAR_25->data_length = 0;
  if (VAR_9->pd_type != VAR_5)
   VAR_25->dev_spec = 0;
  VAR_20 = FUNC_4(VAR_25);
 } else {
  struct scsi_mode_header_10 *VAR_26 =
      (struct scsi_mode_header_10 *)VAR_18;
  VAR_23 = sizeof(*VAR_26);

  if (FUNC_7(VAR_26->blk_desc_len) > 0) {
   FUNC_1(FUNC_3(VAR_26), VAR_26 + 1,
       FUNC_7(VAR_26->data_length) + 1 - VAR_23 -
       FUNC_7(VAR_26->blk_desc_len));
   FUNC_8(0, VAR_26->blk_desc_len);
  }
  FUNC_8(0, VAR_26->data_length);
  if (VAR_9->pd_type != VAR_5)
   VAR_26->dev_spec = 0;
  VAR_20 = FUNC_3(VAR_26);
 }
 if ((VAR_20->page_code & VAR_3) == 0) {
  VAR_24 = sizeof(*VAR_20);
  VAR_19 = (uint8_t *)(VAR_20 + 1);
  VAR_22 = VAR_20->page_length;
 } else {
  VAR_21 = (struct scsi_mode_page_header_sp *)VAR_20;
  VAR_24 = sizeof(*VAR_21);
  VAR_19 = (uint8_t *)(VAR_21 + 1);
  VAR_22 = FUNC_7(VAR_21->page_length);
 }
 VAR_22 = FUNC_0(VAR_22, sizeof(VAR_18) - (VAR_19 - VAR_18));


 FUNC_2(VAR_19, VAR_22, VAR_8, VAR_6, 0);

 VAR_20->page_code &= ~VAR_2;






 FUNC_5(VAR_9, VAR_10, (VAR_12 << VAR_1 == VAR_4),
     VAR_15, VAR_16, VAR_17, VAR_18, VAR_23 + VAR_24 + VAR_22);
}
