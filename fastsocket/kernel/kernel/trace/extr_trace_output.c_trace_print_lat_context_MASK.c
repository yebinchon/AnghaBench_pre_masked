
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; int idx; int ts; struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_entry {int preempt_count; int flags; int pid; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct trace_seq*,struct trace_entry*,int ) ;
 int FUNC_1 (struct trace_iterator*,int ) ;
 int FUNC_2 (int ,char*) ;
 struct trace_entry* FUNC_3 (struct trace_iterator*,int *,int *) ;
 unsigned long VAR_2 ;
 int FUNC_4 (struct trace_seq*,char*,char*,int ,int ,int ,int ,int ) ;

int FUNC_5(struct trace_iterator *VAR_3)
{
 u64 VAR_4;
 int VAR_5;
 struct trace_seq *VAR_6 = &VAR_3->seq;
 struct trace_entry *VAR_7 = VAR_3->ent,
      *VAR_8 = FUNC_3(VAR_3, ((void*)0),
              &VAR_4);
 unsigned long VAR_9 = (VAR_2 & VAR_1);

 if (!VAR_8)
  VAR_4 = VAR_3->ts;

 if (VAR_9) {
  char VAR_10[VAR_0];

  FUNC_2(VAR_7->pid, VAR_10);

  VAR_5 = FUNC_4(
    VAR_6, "%16s %5d %3d %d %08x %08lx ",
    VAR_10, VAR_7->pid, VAR_3->cpu, VAR_7->flags,
    VAR_7->preempt_count, VAR_3->idx);
 } else {
  VAR_5 = FUNC_0(VAR_6, VAR_7, VAR_3->cpu);
 }

 if (VAR_5)
  VAR_5 = FUNC_1(VAR_3, VAR_4);

 return VAR_5;
}
