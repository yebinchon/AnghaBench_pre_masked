
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct fgraph_data* private; } ;
struct ftrace_graph_ret {unsigned long long rettime; unsigned long long calltime; } ;
struct ftrace_graph_ret_entry {struct ftrace_graph_ret ret; } ;
struct ftrace_graph_ent {int depth; scalar_t__ func; } ;
struct ftrace_graph_ent_entry {struct ftrace_graph_ent graph_ent; } ;
struct fgraph_data {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct fgraph_data*,int) ;
 int FUNC_1 (unsigned long long,struct trace_seq*) ;
 int FUNC_2 (unsigned long long,struct trace_seq*,int) ;
 int FUNC_3 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t
FUNC_4(struct trace_iterator *VAR_4,
  struct ftrace_graph_ent_entry *VAR_5,
  struct ftrace_graph_ret_entry *VAR_6,
  struct trace_seq *VAR_7, u32 VAR_8)
{
 struct fgraph_data *VAR_9 = VAR_4->private;
 struct ftrace_graph_ret *VAR_10;
 struct ftrace_graph_ent *VAR_11;
 unsigned long long VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_10 = &VAR_6->ret;
 VAR_11 = &VAR_5->graph_ent;
 VAR_12 = VAR_10->rettime - VAR_10->calltime;

 if (VAR_9) {
  int VAR_15 = VAR_4->cpu;
  int *VAR_16 = &(FUNC_0(VAR_9, VAR_15)->depth);






  *VAR_16 = VAR_11->depth - 1;
 }


 VAR_13 = FUNC_2(VAR_12, VAR_7, VAR_8);
 if (!VAR_13)
  return VAR_3;


 if (VAR_8 & VAR_1) {
  VAR_13 = FUNC_1(VAR_12, VAR_7);
  if (VAR_13 == VAR_3)
   return VAR_3;
 }


 for (VAR_14 = 0; VAR_14 < VAR_11->depth * VAR_0; VAR_14++) {
  VAR_13 = FUNC_3(VAR_7, " ");
  if (!VAR_13)
   return VAR_3;
 }

 VAR_13 = FUNC_3(VAR_7, "%ps();\n", (void *)VAR_11->func);
 if (!VAR_13)
  return VAR_3;

 return VAR_2;
}
