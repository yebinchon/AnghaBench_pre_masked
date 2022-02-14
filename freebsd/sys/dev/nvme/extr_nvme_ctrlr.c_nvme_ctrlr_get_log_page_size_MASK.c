
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_sanitize_status_page {int dummy; } ;
struct nvme_res_notification_page {int dummy; } ;
struct nvme_ns_list {int dummy; } ;
struct nvme_health_information_page {int dummy; } ;
struct nvme_firmware_page {int dummy; } ;
struct nvme_error_information_entry {int dummy; } ;
struct TYPE_2__ {int elpe; } ;
struct nvme_controller {TYPE_1__ cdata; } ;
struct nvme_command_effects_page {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct nvme_controller *VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3;

 switch (VAR_2) {
 case 132:
  VAR_3 = FUNC_0(
      sizeof(struct nvme_error_information_entry) *
      (VAR_1->cdata.elpe + 1), VAR_0);
  break;
 case 130:
  VAR_3 = sizeof(struct nvme_health_information_page);
  break;
 case 131:
  VAR_3 = sizeof(struct nvme_firmware_page);
  break;
 case 134:
  VAR_3 = sizeof(struct nvme_ns_list);
  break;
 case 133:
  VAR_3 = sizeof(struct nvme_command_effects_page);
  break;
 case 129:
  VAR_3 = sizeof(struct nvme_res_notification_page);
  break;
 case 128:
  VAR_3 = sizeof(struct nvme_sanitize_status_page);
  break;
 default:
  VAR_3 = 0;
  break;
 }

 return (VAR_3);
}
