
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct nvme_sanitize_status_page {int dummy; } ;
struct nvme_res_notification_page {int dummy; } ;
struct TYPE_2__ {scalar_t__ cdw14; scalar_t__ cdw13; scalar_t__ cdw12; void* cdw11; void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {int len; int is_read; int cpl; void* buf; TYPE_1__ cmd; } ;
struct nvme_ns_list {int dummy; } ;
struct nvme_health_information_page {int dummy; } ;
struct nvme_firmware_page {int dummy; } ;
struct nvme_error_information_entry {int dummy; } ;
struct nvme_command_effects_page {int dummy; } ;
struct intel_log_temp_stats {int dummy; } ;
typedef int pt ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct intel_log_temp_stats*) ;
 scalar_t__ FUNC_4 (int,int ,struct nvme_pt_command*) ;
 int FUNC_5 (struct nvme_pt_command*,int ,int) ;
 int FUNC_6 (struct nvme_command_effects_page*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nvme_firmware_page*) ;
 int FUNC_10 (struct nvme_health_information_page*) ;
 int FUNC_11 (struct nvme_ns_list*) ;
 int FUNC_12 (struct nvme_res_notification_page*) ;
 int FUNC_13 (struct nvme_sanitize_status_page*) ;

void
FUNC_14(int VAR_2, uint8_t VAR_3, uint32_t VAR_4, uint8_t VAR_5,
    uint16_t VAR_6, uint8_t VAR_7, void *VAR_8, uint32_t VAR_9)
{
 struct nvme_pt_command VAR_10;
 struct nvme_error_information_entry *VAR_11;
 u_int VAR_12, VAR_13, VAR_14;

 VAR_14 = VAR_9 / sizeof(uint32_t) - 1;
 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cmd.opc = VAR_0;
 VAR_10.cmd.nsid = FUNC_2(VAR_4);
 VAR_10.cmd.cdw10 = FUNC_2(
     (VAR_14 << 16) |
     (VAR_7 << 15) |
     (VAR_5 << 8) |
     VAR_3);
 VAR_10.cmd.cdw11 = FUNC_2(
     ((uint32_t)VAR_6 << 16) |
     (VAR_14 >> 16));
 VAR_10.cmd.cdw12 = 0;
 VAR_10.cmd.cdw13 = 0;
 VAR_10.cmd.cdw14 = 0;
 VAR_10.buf = VAR_8;
 VAR_10.len = VAR_9;
 VAR_10.is_read = 1;

 if (FUNC_4(VAR_2, VAR_1, &VAR_10) < 0)
  FUNC_0(1, "get log page request failed");


 switch (VAR_3) {
 case 132:
  VAR_11 = (struct nvme_error_information_entry *)VAR_8;
  VAR_13 = VAR_9 / sizeof(struct nvme_error_information_entry);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   FUNC_8(VAR_11++);
  break;
 case 130:
  FUNC_10(
      (struct nvme_health_information_page *)VAR_8);
  break;
 case 131:
  FUNC_9(
      (struct nvme_firmware_page *)VAR_8);
  break;
 case 134:
  FUNC_11((struct nvme_ns_list *)VAR_8);
  break;
 case 133:
  FUNC_6(
      (struct nvme_command_effects_page *)VAR_8);
  break;
 case 129:
  FUNC_12(
      (struct nvme_res_notification_page *)VAR_8);
  break;
 case 128:
  FUNC_13(
      (struct nvme_sanitize_status_page *)VAR_8);
  break;
 case 135:
  FUNC_3(
      (struct intel_log_temp_stats *)VAR_8);
  break;
 default:
  break;
 }

 if (FUNC_7(&VAR_10.cpl))
  FUNC_1(1, "get log page request returned error");
}
