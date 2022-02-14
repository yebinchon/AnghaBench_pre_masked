
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_health_information_page {void* ttftmt2; void* ttftmt1; void* tmt2tc; void* tmt1tc; void** temp_sensor; void* error_temp_time; void* warning_temp_time; scalar_t__ num_error_info_log_entries; scalar_t__ media_errors; scalar_t__ unsafe_shutdowns; scalar_t__ power_on_hours; scalar_t__ power_cycles; scalar_t__ controller_busy_time; scalar_t__ host_write_commands; scalar_t__ host_read_commands; scalar_t__ data_units_written; scalar_t__ data_units_read; void* temperature; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline
void FUNC_3(struct nvme_health_information_page *VAR_0)
{
 int VAR_1;

 VAR_0->temperature = FUNC_0(VAR_0->temperature);
 FUNC_2((void *)VAR_0->data_units_read);
 FUNC_2((void *)VAR_0->data_units_written);
 FUNC_2((void *)VAR_0->host_read_commands);
 FUNC_2((void *)VAR_0->host_write_commands);
 FUNC_2((void *)VAR_0->controller_busy_time);
 FUNC_2((void *)VAR_0->power_cycles);
 FUNC_2((void *)VAR_0->power_on_hours);
 FUNC_2((void *)VAR_0->unsafe_shutdowns);
 FUNC_2((void *)VAR_0->media_errors);
 FUNC_2((void *)VAR_0->num_error_info_log_entries);
 VAR_0->warning_temp_time = FUNC_1(VAR_0->warning_temp_time);
 VAR_0->error_temp_time = FUNC_1(VAR_0->error_temp_time);
 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  VAR_0->temp_sensor[VAR_1] = FUNC_0(VAR_0->temp_sensor[VAR_1]);
 VAR_0->tmt1tc = FUNC_1(VAR_0->tmt1tc);
 VAR_0->tmt2tc = FUNC_1(VAR_0->tmt2tc);
 VAR_0->ttftmt1 = FUNC_1(VAR_0->ttftmt1);
 VAR_0->ttftmt2 = FUNC_1(VAR_0->ttftmt2);
}
