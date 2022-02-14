
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_array {int dummy; } ;
struct ftrace_graph_ret {unsigned long func; int rettime; int calltime; int depth; } ;
struct ftrace_graph_ent {unsigned long func; int depth; } ;


 int FUNC_0 (struct trace_array*,struct ftrace_graph_ent*,unsigned long,int) ;
 int FUNC_1 (struct trace_array*,struct ftrace_graph_ret*,unsigned long,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct trace_array *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2, int VAR_3)
{
 u64 VAR_4 = FUNC_2();
 struct ftrace_graph_ent VAR_5 = {
  .func = VAR_1,
  .depth = 0,
 };
 struct ftrace_graph_ret VAR_6 = {
  .func = VAR_1,
  .depth = 0,
  .calltime = VAR_4,
  .rettime = VAR_4,
 };

 FUNC_0(VAR_0, &VAR_5, VAR_2, VAR_3);
 FUNC_1(VAR_0, &VAR_6, VAR_2, VAR_3);
}
