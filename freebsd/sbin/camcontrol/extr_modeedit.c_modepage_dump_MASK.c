
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int8_t ;
struct scsi_mode_page_header_sp {int page_length; } ;
struct scsi_mode_page_header {int page_code; size_t page_length; } ;
struct scsi_mode_header_6 {int dummy; } ;
struct scsi_mode_header_10 {int dummy; } ;
struct cam_device {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_1 ;
 struct scsi_mode_page_header* FUNC_1 (struct scsi_mode_header_10*) ;
 struct scsi_mode_page_header* FUNC_2 (struct scsi_mode_header_6*) ;
 int FUNC_3 (struct cam_device*,int*,int,int ,int,int,int,int,int,int,int*,int) ;
 int FUNC_4 (char*,int,char) ;
 int FUNC_5 (char) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct cam_device *VAR_2, int VAR_3, int VAR_4, int VAR_5,
       int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 u_int8_t VAR_11[VAR_0];
 u_int8_t *VAR_12;
 struct scsi_mode_page_header *VAR_13;
 struct scsi_mode_page_header_sp *VAR_14;
 size_t VAR_15, VAR_16;

 FUNC_3(VAR_2, &VAR_3, VAR_4, 0, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11, sizeof(VAR_11));

 if (VAR_3 == 6) {
  struct scsi_mode_header_6 *VAR_17 =
      (struct scsi_mode_header_6 *)VAR_11;
  VAR_13 = FUNC_2(VAR_17);
 } else {
  struct scsi_mode_header_10 *VAR_18 =
      (struct scsi_mode_header_10 *)VAR_11;
  VAR_13 = FUNC_1(VAR_18);
 }
 if ((VAR_13->page_code & VAR_1) == 0) {
  VAR_12 = (uint8_t *)(VAR_13 + 1);
  VAR_16 = VAR_13->page_length;
 } else {
  VAR_14 = (struct scsi_mode_page_header_sp *)VAR_13;
  VAR_12 = (uint8_t *)(VAR_14 + 1);
  VAR_16 = FUNC_6(VAR_14->page_length);
 }
 VAR_16 = FUNC_0(VAR_16, sizeof(VAR_11) - (VAR_12 - VAR_11));


 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  FUNC_4("%02x%c",VAR_12[VAR_15],
      (((VAR_15 + 1) % 8) == 0) ? '\n' : ' ');
 }
 FUNC_5('\n');
}
