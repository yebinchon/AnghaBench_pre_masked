
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_mode_header_6 {size_t blk_desc_len; } ;
struct scsi_mode_header_10 {int blk_desc_len; } ;
struct cam_device {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 int FUNC_1 (struct cam_device*,int*,int ,int,int,int,int,int,int,int,int*,int) ;
 int FUNC_2 (char*,int,char) ;
 int FUNC_3 (char) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct cam_device *VAR_1, int VAR_2, int VAR_3, int VAR_4,
       int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 uint8_t VAR_10[VAR_0];
 uint8_t *VAR_11;
 size_t VAR_12, VAR_13;

 FUNC_1(VAR_1, &VAR_2, 0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_10, sizeof(VAR_10));

 if (VAR_2 == 6) {
  struct scsi_mode_header_6 *VAR_14 =
      (struct scsi_mode_header_6 *)VAR_10;
  VAR_11 = (uint8_t *)(VAR_14 + 1);
  VAR_13 = VAR_14->blk_desc_len;
 } else {
  struct scsi_mode_header_10 *VAR_15 =
      (struct scsi_mode_header_10 *)VAR_10;
  VAR_11 = (uint8_t *)(VAR_15 + 1);
  VAR_13 = FUNC_4(VAR_15->blk_desc_len);
 }
 VAR_13 = FUNC_0(VAR_13, sizeof(VAR_10) - (VAR_11 - VAR_10));


 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  FUNC_2("%02x%c", VAR_11[VAR_12],
      (((VAR_12 + 1) % 8) == 0) ? '\n' : ' ');
 }
 FUNC_3('\n');
}
