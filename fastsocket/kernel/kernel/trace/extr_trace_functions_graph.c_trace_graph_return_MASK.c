
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int disabled; } ;
struct trace_array {struct trace_array_cpu** data; } ;
struct ftrace_graph_ret {int depth; } ;


 int FUNC_0 (struct trace_array*,struct ftrace_graph_ret*,unsigned long,int) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 struct trace_array* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(struct ftrace_graph_ret *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1;
 struct trace_array_cpu *VAR_4;
 unsigned long VAR_5;
 long VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_6(VAR_5);
 VAR_7 = FUNC_8();
 VAR_4 = VAR_3->data[VAR_7];
 VAR_6 = FUNC_2(&VAR_4->disabled);
 if (FUNC_4(VAR_6 == 1)) {
  VAR_8 = FUNC_7();
  FUNC_0(VAR_3, VAR_2, VAR_5, VAR_8);
 }
 if (!VAR_2->depth)
  FUNC_3(VAR_0);
 FUNC_1(&VAR_4->disabled);
 FUNC_5(VAR_5);
}
