
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct fgraph_data* private; } ;
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
 int FUNC_1 (int,struct trace_seq*,int) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t
FUNC_3(struct trace_iterator *VAR_4,
    struct ftrace_graph_ent_entry *VAR_5,
    struct trace_seq *VAR_6, int VAR_7, u32 VAR_8)
{
 struct ftrace_graph_ent *VAR_9 = &VAR_5->graph_ent;
 struct fgraph_data *VAR_10 = VAR_4->private;
 int VAR_11;
 int VAR_12;

 if (VAR_10) {
  int VAR_13 = VAR_4->cpu;
  int *VAR_14 = &(FUNC_0(VAR_10, VAR_13)->depth);

  *VAR_14 = VAR_9->depth;
 }


 VAR_11 = FUNC_1(-1, VAR_6, VAR_8);
 if (!VAR_11)
  return VAR_3;


 if (VAR_8 & VAR_1) {
  VAR_11 = FUNC_2(VAR_6, "            |  ");
  if (!VAR_11)
   return VAR_3;
 }


 for (VAR_12 = 0; VAR_12 < VAR_9->depth * VAR_0; VAR_12++) {
  VAR_11 = FUNC_2(VAR_6, " ");
  if (!VAR_11)
   return VAR_3;
 }

 VAR_11 = FUNC_2(VAR_6, "%ps() {\n", (void *)VAR_9->func);
 if (!VAR_11)
  return VAR_3;





 return VAR_2;
}
