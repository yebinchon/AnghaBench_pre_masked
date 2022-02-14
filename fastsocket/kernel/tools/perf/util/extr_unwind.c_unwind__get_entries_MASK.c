
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unwind_entry_cb_t ;
typedef int unw_word_t ;
typedef int u64 ;
struct unwind_info {struct machine* machine; struct thread* thread; int sample_uregs; struct perf_sample* sample; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int regs; } ;
struct perf_sample {TYPE_1__ user_regs; } ;
struct machine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct thread*,struct machine*,int ,void*) ;
 int FUNC_1 (struct unwind_info*,int ,void*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;

int FUNC_3(unwind_entry_cb_t VAR_3, void *VAR_4,
   struct machine *VAR_5, struct thread *VAR_6,
   u64 VAR_7, struct perf_sample *VAR_8)
{
 unw_word_t VAR_9;
 struct unwind_info VAR_10 = {
  .sample = VAR_8,
  .sample_uregs = VAR_7,
  .thread = VAR_6,
  .machine = VAR_5,
 };
 int VAR_11;

 if (!VAR_8->user_regs.regs)
  return -VAR_0;

 VAR_11 = FUNC_2(&VAR_9, &VAR_8->user_regs, VAR_2, VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_6, VAR_5, VAR_3, VAR_4);
 if (VAR_11)
  return -VAR_1;

 return FUNC_1(&VAR_10, VAR_3, VAR_4);
}
