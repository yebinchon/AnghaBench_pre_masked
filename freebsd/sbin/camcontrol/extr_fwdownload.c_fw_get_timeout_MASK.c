
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_write_buffer {int dummy; } ;
struct scsi_report_supported_opcodes_timeout {int recommended_time; } ;
struct scsi_report_supported_opcodes_one {int support; int cdb_length; } ;
struct fw_vendor {scalar_t__ timeout_type; int timeout_ms; } ;
struct cam_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cam_device*,int,int ,int,int ,int ,int,int,int,int,int ,int*,int **) ;

__attribute__((used)) static int
FUNC_3(struct cam_device *VAR_6, struct fw_vendor *VAR_7,
        int VAR_8, int VAR_9, int VAR_10)
{
 struct scsi_report_supported_opcodes_one *VAR_11;
 struct scsi_report_supported_opcodes_timeout *VAR_12;
 uint8_t *VAR_13 = ((void*)0);
 uint32_t VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;





 if (VAR_10 != 0) {
  VAR_7->timeout_type = VAR_2;
  VAR_7->timeout_ms = VAR_10;
  goto bailout;
 }





 if (VAR_7->timeout_type == VAR_1)
  goto bailout;

 VAR_17 = FUNC_2( VAR_6,
                   1,
               VAR_5,
                       1,
               0,
                       0,
                     1,
                  VAR_8,
                    VAR_9,
                10000,
                0,
                 &VAR_14,
                 &VAR_13);




 if (VAR_17 != 0) {
  VAR_17 = 0;
  goto bailout;
 }
 if (VAR_14 < (sizeof(*VAR_11) + sizeof(struct scsi_write_buffer) +
     sizeof(*VAR_12)))
  goto bailout;

 VAR_11 = (struct scsi_report_supported_opcodes_one *)VAR_13;






 if ((VAR_11->support & VAR_3) == VAR_4)
  goto bailout;

 VAR_15 = FUNC_0(VAR_11->cdb_length);
 VAR_12 = (struct scsi_report_supported_opcodes_timeout *)
     &VAR_13[sizeof(*VAR_11) + VAR_15];

 VAR_16 = FUNC_1(VAR_12->recommended_time);




 if (VAR_16 == 0)
  goto bailout;


 VAR_16 *= 1000;

 VAR_7->timeout_ms = VAR_16;
 VAR_7->timeout_type = VAR_0;

bailout:
 return (VAR_17);
}
