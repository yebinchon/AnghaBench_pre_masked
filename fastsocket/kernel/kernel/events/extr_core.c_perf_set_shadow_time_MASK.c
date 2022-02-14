
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_event_context {scalar_t__ timestamp; } ;
struct perf_event {scalar_t__ shadow_ctx_time; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0,
     struct perf_event_context *VAR_1,
     u64 VAR_2)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, VAR_2);
 else
  VAR_0->shadow_ctx_time = VAR_2 - VAR_1->timestamp;
}
