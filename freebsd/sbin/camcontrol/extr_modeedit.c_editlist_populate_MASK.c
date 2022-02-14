
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct scsi_mode_page_header* FUNC_3 (struct scsi_mode_header_10*) ;
 struct scsi_mode_page_header* FUNC_4 (struct scsi_mode_header_6*) ;
 int VAR_5 ;
 int FUNC_5 (struct cam_device*,int*,int,int ,int,int,int,int,int,int,int *,int) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct cam_device *VAR_6, int VAR_7, int VAR_8, int VAR_9,
    int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
 u_int8_t VAR_15[VAR_0];
 u_int8_t *VAR_16;
 struct scsi_mode_page_header *VAR_17;
 struct scsi_mode_page_header_sp *VAR_18;
 size_t VAR_19;

 FUNC_1(&VAR_4);


 FUNC_5(VAR_6, &VAR_7, VAR_8, 0, 1, VAR_10, VAR_11, VAR_12,
     VAR_13, VAR_14, VAR_15, sizeof(VAR_15));

 if (VAR_7 == 6) {
  struct scsi_mode_header_6 *VAR_20 =
      (struct scsi_mode_header_6 *)VAR_15;
  VAR_17 = FUNC_4(VAR_20);
 } else {
  struct scsi_mode_header_10 *VAR_21 =
      (struct scsi_mode_header_10 *)VAR_15;
  VAR_17 = FUNC_3(VAR_21);
 }
 if ((VAR_17->page_code & VAR_1) == 0) {
  VAR_16 = (uint8_t *)(VAR_17 + 1);
  VAR_19 = VAR_17->page_length;
 } else {
  VAR_18 = (struct scsi_mode_page_header_sp *)VAR_17;
  VAR_16 = (uint8_t *)(VAR_18 + 1);
  VAR_19 = FUNC_6(VAR_18->page_length);
 }
 VAR_19 = FUNC_0(VAR_19, sizeof(VAR_15) - (VAR_16 - VAR_15));


 FUNC_2(VAR_16, VAR_19, VAR_5, VAR_2, 0);


 FUNC_5(VAR_6, &VAR_7, VAR_8, 0, VAR_9, VAR_10, VAR_11, VAR_12,
     VAR_13, VAR_14, VAR_15, sizeof(VAR_15));
 FUNC_2(VAR_16, VAR_19, VAR_5, VAR_3, 0);
}
