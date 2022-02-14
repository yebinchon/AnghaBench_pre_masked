
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {TYPE_3__* br_stack; TYPE_2__* raw; TYPE_4__* callchain; int ip; } ;
struct perf_event_header {scalar_t__ size; int misc; int type; } ;
struct TYPE_5__ {int sample_type; } ;
struct perf_event {scalar_t__ header_size; TYPE_1__ attr; } ;
struct perf_branch_entry {int dummy; } ;
struct TYPE_8__ {scalar_t__ nr; } ;
struct TYPE_7__ {int nr; } ;
struct TYPE_6__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;
 TYPE_4__* FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct perf_event_header *VAR_5,
    struct perf_sample_data *VAR_6,
    struct perf_event *VAR_7,
    struct pt_regs *VAR_8)
{
 u64 VAR_9 = VAR_7->attr.sample_type;

 VAR_5->type = VAR_0;
 VAR_5->size = sizeof(*VAR_5) + VAR_7->header_size;

 VAR_5->misc = 0;
 VAR_5->misc |= FUNC_4(VAR_8);

 FUNC_1(VAR_5, VAR_6, VAR_7);

 if (VAR_9 & VAR_3)
  VAR_6->ip = FUNC_3(VAR_8);

 if (VAR_9 & VAR_2) {
  int VAR_10 = 1;

  VAR_6->callchain = FUNC_2(VAR_8);

  if (VAR_6->callchain)
   VAR_10 += VAR_6->callchain->nr;

  VAR_5->size += VAR_10 * sizeof(u64);
 }

 if (VAR_9 & VAR_4) {
  int VAR_11 = sizeof(u32);

  if (VAR_6->raw)
   VAR_11 += VAR_6->raw->size;
  else
   VAR_11 += sizeof(u32);

  FUNC_0(VAR_11 & (sizeof(u64)-1));
  VAR_5->size += VAR_11;
 }

 if (VAR_9 & VAR_1) {
  int VAR_12 = sizeof(u64);
  if (VAR_6->br_stack) {
   VAR_12 += VAR_6->br_stack->nr
         * sizeof(struct perf_branch_entry);
  }
  VAR_5->size += VAR_12;
 }
}
