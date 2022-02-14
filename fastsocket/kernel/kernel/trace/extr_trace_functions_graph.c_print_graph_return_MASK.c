
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct fgraph_data* private; } ;
struct trace_entry {int pid; } ;
struct ftrace_graph_ret {unsigned long long rettime; unsigned long long calltime; int depth; int func; int overrun; } ;
struct fgraph_data {int dummy; } ;
typedef int pid_t ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct fgraph_data*,int) ;
 int FUNC_1 (unsigned long long,struct trace_seq*) ;
 int FUNC_2 (struct trace_iterator*,int ,int ,int,int ,int) ;
 int FUNC_3 (unsigned long long,struct trace_seq*,int) ;
 scalar_t__ FUNC_4 (struct trace_iterator*,struct trace_seq*,int ,int ,int) ;
 int FUNC_5 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t
FUNC_6(struct ftrace_graph_ret *VAR_6, struct trace_seq *VAR_7,
     struct trace_entry *VAR_8, struct trace_iterator *VAR_9,
     u32 VAR_10)
{
 unsigned long long VAR_11 = VAR_6->rettime - VAR_6->calltime;
 struct fgraph_data *VAR_12 = VAR_9->private;
 pid_t VAR_13 = VAR_8->pid;
 int VAR_14 = VAR_9->cpu;
 int VAR_15;
 int VAR_16;

 if (VAR_12) {
  int VAR_17 = VAR_9->cpu;
  int *VAR_18 = &(FUNC_0(VAR_12, VAR_17)->depth);






  *VAR_18 = VAR_6->depth - 1;
 }

 if (FUNC_4(VAR_9, VAR_7, 0, 0, VAR_10))
  return VAR_5;


 VAR_15 = FUNC_3(VAR_11, VAR_7, VAR_10);
 if (!VAR_15)
  return VAR_5;


 if (VAR_10 & VAR_1) {
  VAR_15 = FUNC_1(VAR_11, VAR_7);
  if (VAR_15 == VAR_5)
   return VAR_5;
 }


 for (VAR_16 = 0; VAR_16 < VAR_6->depth * VAR_0; VAR_16++) {
  VAR_15 = FUNC_5(VAR_7, " ");
  if (!VAR_15)
   return VAR_5;
 }

 VAR_15 = FUNC_5(VAR_7, "}\n");
 if (!VAR_15)
  return VAR_5;


 if (VAR_10 & VAR_2) {
  VAR_15 = FUNC_5(VAR_7, " (Overruns: %lu)\n",
     VAR_6->overrun);
  if (!VAR_15)
   return VAR_5;
 }

 VAR_15 = FUNC_2(VAR_9, VAR_6->func, VAR_3,
         VAR_14, VAR_13, VAR_10);
 if (VAR_15 == VAR_5)
  return VAR_5;

 return VAR_4;
}
