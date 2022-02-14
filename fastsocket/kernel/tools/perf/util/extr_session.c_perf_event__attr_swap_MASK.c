
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct perf_event_attr {void* read_format; void* bp_len; void* bp_addr; void* bp_type; void* wakeup_events; void* sample_type; void* sample_period; void* config; void* size; void* type; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct perf_event_attr *VAR_0)
{
 VAR_0->type = FUNC_0(VAR_0->type);
 VAR_0->size = FUNC_0(VAR_0->size);
 VAR_0->config = FUNC_1(VAR_0->config);
 VAR_0->sample_period = FUNC_1(VAR_0->sample_period);
 VAR_0->sample_type = FUNC_1(VAR_0->sample_type);
 VAR_0->read_format = FUNC_1(VAR_0->read_format);
 VAR_0->wakeup_events = FUNC_0(VAR_0->wakeup_events);
 VAR_0->bp_type = FUNC_0(VAR_0->bp_type);
 VAR_0->bp_addr = FUNC_1(VAR_0->bp_addr);
 VAR_0->bp_len = FUNC_1(VAR_0->bp_len);

 FUNC_2((u8 *) (&VAR_0->read_format + 1), sizeof(u64));
}
