
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union u64_swap {int val64; void** val32; } ;
struct TYPE_6__ {int size; } ;
struct TYPE_5__ {int* array; } ;
union perf_event {TYPE_3__ header; TYPE_2__ sample; } ;
typedef int u64 ;
struct perf_sample {int stream_id; int id; int time; void* tid; void* pid; void* cpu; } ;
struct TYPE_4__ {int sample_type; } ;
struct perf_evsel {int needs_swap; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct perf_evsel *VAR_5,
           const union perf_event *VAR_6,
           struct perf_sample *VAR_7)
{
 u64 VAR_8 = VAR_5->attr.sample_type;
 const u64 *VAR_9 = VAR_6->sample.array;
 bool VAR_10 = VAR_5->needs_swap;
 union u64_swap VAR_11;

 VAR_9 += ((VAR_6->header.size -
     sizeof(VAR_6->header)) / sizeof(u64)) - 1;

 if (VAR_8 & VAR_0) {
  VAR_11.val64 = *VAR_9;
  if (VAR_10) {

   VAR_11.val64 = FUNC_1(VAR_11.val64);
   VAR_11.val32[0] = FUNC_0(VAR_11.val32[0]);
  }

  VAR_7->cpu = VAR_11.val32[0];
  VAR_9--;
 }

 if (VAR_8 & VAR_2) {
  VAR_7->stream_id = *VAR_9;
  VAR_9--;
 }

 if (VAR_8 & VAR_1) {
  VAR_7->id = *VAR_9;
  VAR_9--;
 }

 if (VAR_8 & VAR_4) {
  VAR_7->time = *VAR_9;
  VAR_9--;
 }

 if (VAR_8 & VAR_3) {
  VAR_11.val64 = *VAR_9;
  if (VAR_10) {

   VAR_11.val64 = FUNC_1(VAR_11.val64);
   VAR_11.val32[0] = FUNC_0(VAR_11.val32[0]);
   VAR_11.val32[1] = FUNC_0(VAR_11.val32[1]);
  }

  VAR_7->pid = VAR_11.val32[0];
  VAR_7->tid = VAR_11.val32[1];
 }

 return 0;
}
