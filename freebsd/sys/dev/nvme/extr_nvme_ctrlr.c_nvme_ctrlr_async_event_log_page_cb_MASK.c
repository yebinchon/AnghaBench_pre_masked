
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nvme_sanitize_status_page {int dummy; } ;
struct nvme_res_notification_page {int dummy; } ;
struct nvme_ns_list {scalar_t__* ns; } ;
struct nvme_health_information_page {int critical_warning; } ;
struct nvme_firmware_page {int dummy; } ;
struct nvme_error_information_entry {int dummy; } ;
struct nvme_completion {int dummy; } ;
struct nvme_command_effects_page {int dummy; } ;
struct nvme_async_event_request {int log_page_id; TYPE_2__* ctrlr; int log_page_size; int * log_page_buffer; int cpl; } ;
struct intel_log_temp_stats {int dummy; } ;
struct TYPE_7__ {int elpe; } ;
struct TYPE_8__ {int async_event_config; TYPE_1__ cdata; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_log_temp_stats*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct nvme_command_effects_page*) ;
 scalar_t__ FUNC_3 (struct nvme_completion const*) ;
 int FUNC_4 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_5 (TYPE_2__*,struct nvme_async_event_request*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nvme_firmware_page*) ;
 int FUNC_9 (struct nvme_health_information_page*) ;
 int FUNC_10 (TYPE_2__*,int *,int,int *,int ) ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (struct nvme_ns_list*) ;
 int FUNC_13 (struct nvme_res_notification_page*) ;
 int FUNC_14 (struct nvme_sanitize_status_page*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_15(void *VAR_2, const struct nvme_completion *VAR_3)
{
 struct nvme_async_event_request *VAR_4 = VAR_2;
 struct nvme_health_information_page *VAR_5;
 struct nvme_ns_list *VAR_6;
 struct nvme_error_information_entry *VAR_7;
 int VAR_8;






 if (FUNC_3(VAR_3))
  FUNC_10(VAR_4->ctrlr, &VAR_4->cpl,
      VAR_4->log_page_id, ((void*)0), 0);
 else {

  switch (VAR_4->log_page_id) {
  case 132:
   VAR_7 = (struct nvme_error_information_entry *)VAR_4->log_page_buffer;
   for (VAR_8 = 0; VAR_8 < (VAR_4->ctrlr->cdata.elpe + 1); VAR_8++)
    FUNC_7(VAR_7++);
   break;
  case 130:
   FUNC_9(
       (struct nvme_health_information_page *)VAR_4->log_page_buffer);
   break;
  case 131:
   FUNC_8(
       (struct nvme_firmware_page *)VAR_4->log_page_buffer);
   break;
  case 134:
   FUNC_12(
       (struct nvme_ns_list *)VAR_4->log_page_buffer);
   break;
  case 133:
   FUNC_2(
       (struct nvme_command_effects_page *)VAR_4->log_page_buffer);
   break;
  case 129:
   FUNC_13(
       (struct nvme_res_notification_page *)VAR_4->log_page_buffer);
   break;
  case 128:
   FUNC_14(
       (struct nvme_sanitize_status_page *)VAR_4->log_page_buffer);
   break;
  case 135:
   FUNC_0(
       (struct intel_log_temp_stats *)VAR_4->log_page_buffer);
   break;
  default:
   break;
  }

  if (VAR_4->log_page_id == 130) {
   VAR_5 = (struct nvme_health_information_page *)
       VAR_4->log_page_buffer;
   FUNC_6(VAR_4->ctrlr,
       VAR_5->critical_warning);







   VAR_4->ctrlr->async_event_config &=
       ~VAR_5->critical_warning;
   FUNC_4(VAR_4->ctrlr,
       VAR_4->ctrlr->async_event_config, ((void*)0), ((void*)0));
  } else if (VAR_4->log_page_id == 134 &&
      !VAR_1) {
   VAR_6 = (struct nvme_ns_list *)VAR_4->log_page_buffer;
   for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_6->ns) && VAR_6->ns[VAR_8] != 0; VAR_8++) {
    if (VAR_6->ns[VAR_8] > VAR_0)
     break;
    FUNC_11(VAR_4->ctrlr, VAR_6->ns[VAR_8]);
   }
  }






  FUNC_10(VAR_4->ctrlr, &VAR_4->cpl,
      VAR_4->log_page_id, VAR_4->log_page_buffer, VAR_4->log_page_size);
 }





 FUNC_5(VAR_4->ctrlr, VAR_4);
}
