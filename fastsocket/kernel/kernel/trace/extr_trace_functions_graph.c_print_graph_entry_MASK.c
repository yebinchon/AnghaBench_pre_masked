
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; } ;
struct ftrace_graph_ret_entry {int dummy; } ;
struct ftrace_graph_ent {int func; } ;
struct ftrace_graph_ent_entry {struct ftrace_graph_ent graph_ent; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ftrace_graph_ret_entry* FUNC_0 (struct trace_iterator*,struct ftrace_graph_ent_entry*) ;
 int FUNC_1 (struct trace_iterator*,struct ftrace_graph_ent_entry*,struct ftrace_graph_ret_entry*,struct trace_seq*,int ) ;
 int FUNC_2 (struct trace_iterator*,struct ftrace_graph_ent_entry*,struct trace_seq*,int,int ) ;
 scalar_t__ FUNC_3 (struct trace_iterator*,struct trace_seq*,int ,int ,int ) ;

__attribute__((used)) static enum print_line_t
FUNC_4(struct ftrace_graph_ent_entry *VAR_2, struct trace_seq *VAR_3,
   struct trace_iterator *VAR_4, u32 VAR_5)
{
 int VAR_6 = VAR_4->cpu;
 struct ftrace_graph_ent *VAR_7 = &VAR_2->graph_ent;
 struct ftrace_graph_ret_entry *VAR_8;

 if (FUNC_3(VAR_4, VAR_3, VAR_0, VAR_7->func, VAR_5))
  return VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_2);
 if (VAR_8)
  return FUNC_1(VAR_4, VAR_2, VAR_8, VAR_3, VAR_5);
 else
  return FUNC_2(VAR_4, VAR_2, VAR_3, VAR_6, VAR_5);

}
