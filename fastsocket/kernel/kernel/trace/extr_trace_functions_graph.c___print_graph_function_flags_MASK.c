
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int type; } ;
struct ftrace_graph_ret_entry {int ret; } ;
struct ftrace_graph_ent_entry {int ret; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_seq*,struct trace_entry*,struct trace_iterator*,int ) ;
 int FUNC_1 (struct ftrace_graph_ret_entry*,struct trace_seq*,struct trace_iterator*,int ) ;
 int FUNC_2 (int *,struct trace_seq*,struct trace_entry*,struct trace_iterator*,int ) ;
 int FUNC_3 (struct ftrace_graph_ret_entry*,struct trace_entry*) ;

enum print_line_t
FUNC_4(struct trace_iterator *VAR_2, u32 VAR_3)
{
 struct trace_entry *VAR_4 = VAR_2->ent;
 struct trace_seq *VAR_5 = &VAR_2->seq;

 switch (VAR_4->type) {
 case 130: {






  struct ftrace_graph_ent_entry *VAR_6, VAR_7;
  FUNC_3(VAR_6, VAR_4);
  VAR_7 = *VAR_6;
  return FUNC_1(&VAR_7, VAR_5, VAR_2, VAR_3);
 }
 case 129: {
  struct ftrace_graph_ret_entry *VAR_8;
  FUNC_3(VAR_8, VAR_4);
  return FUNC_2(&VAR_8->ret, VAR_5, VAR_4, VAR_2, VAR_3);
 }
 case 128:
 case 131:

  return VAR_1;

 default:
  return FUNC_0(VAR_5, VAR_4, VAR_2, VAR_3);
 }

 return VAR_0;
}
