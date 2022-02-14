
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union u64_swap {int val64; void** val32; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_3__ {int* array; } ;
union perf_event {TYPE_2__ ip; TYPE_1__ sample; } ;
typedef int u64 ;
struct perf_sample {int time; int addr; int id; int stream_id; int period; void* cpu; void* tid; void* pid; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

int FUNC_2(union perf_event *VAR_8, u64 VAR_9,
      const struct perf_sample *VAR_10,
      bool VAR_11)
{
 u64 *VAR_12;





 union u64_swap VAR_13;

 VAR_12 = VAR_8->sample.array;

 if (VAR_9 & VAR_3) {
  VAR_8->ip.ip = VAR_10->ip;
  VAR_12++;
 }

 if (VAR_9 & VAR_6) {
  VAR_13.val32[0] = VAR_10->pid;
  VAR_13.val32[1] = VAR_10->tid;
  if (VAR_11) {



   VAR_13.val32[0] = FUNC_0(VAR_13.val32[0]);
   VAR_13.val32[1] = FUNC_0(VAR_13.val32[1]);
   VAR_13.val64 = FUNC_1(VAR_13.val64);
  }

  *VAR_12 = VAR_13.val64;
  VAR_12++;
 }

 if (VAR_9 & VAR_7) {
  *VAR_12 = VAR_10->time;
  VAR_12++;
 }

 if (VAR_9 & VAR_0) {
  *VAR_12 = VAR_10->addr;
  VAR_12++;
 }

 if (VAR_9 & VAR_2) {
  *VAR_12 = VAR_10->id;
  VAR_12++;
 }

 if (VAR_9 & VAR_5) {
  *VAR_12 = VAR_10->stream_id;
  VAR_12++;
 }

 if (VAR_9 & VAR_1) {
  VAR_13.val32[0] = VAR_10->cpu;
  if (VAR_11) {



   VAR_13.val32[0] = FUNC_0(VAR_13.val32[0]);
   VAR_13.val64 = FUNC_1(VAR_13.val64);
  }
  *VAR_12 = VAR_13.val64;
  VAR_12++;
 }

 if (VAR_9 & VAR_4) {
  *VAR_12 = VAR_10->period;
  VAR_12++;
 }

 return 0;
}
