
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_mode_header_6 {size_t blk_desc_len; scalar_t__ dev_spec; scalar_t__ data_length; } ;
struct scsi_mode_header_10 {scalar_t__ dev_spec; int data_length; int blk_desc_len; } ;
struct cam_device {scalar_t__ pd_type; } ;
typedef int data ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,size_t,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cam_device*,int,int,int,int,int,int *,size_t) ;
 int FUNC_3 (struct cam_device*,int*,int ,int,int,int,int,int,int,int,int *,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct cam_device *VAR_7, int VAR_8, int VAR_9, int VAR_10,
    int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 uint8_t VAR_16[VAR_0];
 uint8_t *VAR_17;
 size_t VAR_18, VAR_19;


 if (! VAR_5)
  return;


 FUNC_3(VAR_7, &VAR_8, 0, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
     VAR_14, VAR_15, VAR_16, sizeof(VAR_16));


 if (VAR_8 == 6) {
  struct scsi_mode_header_6 *VAR_20 =
      (struct scsi_mode_header_6 *)VAR_16;
  VAR_19 = sizeof(*VAR_20);
  VAR_17 = (uint8_t *)(VAR_20 + 1);
  VAR_18 = VAR_20->blk_desc_len;
  VAR_20->data_length = 0;
  if (VAR_7->pd_type != VAR_3)
   VAR_20->dev_spec = 0;
 } else {
  struct scsi_mode_header_10 *VAR_21 =
      (struct scsi_mode_header_10 *)VAR_16;
  VAR_19 = sizeof(*VAR_21);
  VAR_17 = (uint8_t *)(VAR_21 + 1);
  VAR_18 = FUNC_4(VAR_21->blk_desc_len);
  FUNC_5(0, VAR_21->data_length);
  if (VAR_7->pd_type != VAR_3)
   VAR_21->dev_spec = 0;
 }
 VAR_18 = FUNC_0(VAR_18, sizeof(VAR_16) - (VAR_17 - VAR_16));


 FUNC_1(VAR_17, VAR_18, VAR_6, VAR_4, 0);






 FUNC_2(VAR_7, VAR_8, (VAR_10 << VAR_1 == VAR_2),
     VAR_13, VAR_14, VAR_15, VAR_16, VAR_19 + VAR_18);
}
