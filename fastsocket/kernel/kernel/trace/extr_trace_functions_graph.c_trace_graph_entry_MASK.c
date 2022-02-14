
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int disabled; } ;
struct trace_array {struct trace_array_cpu** data; } ;
struct ftrace_graph_ent {int func; } ;


 int FUNC_0 (struct trace_array*,struct ftrace_graph_ent*,unsigned long,int) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct trace_array* VAR_1 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ftrace_graph_ent *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1;
 struct trace_array_cpu *VAR_4;
 unsigned long VAR_5;
 long VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (FUNC_12(!VAR_3))
  return 0;

 if (!FUNC_4(VAR_0))
  return 0;

 if (!FUNC_3(VAR_2->func))
  return 0;

 FUNC_7(VAR_5);
 VAR_8 = FUNC_9();
 VAR_4 = VAR_3->data[VAR_8];
 VAR_6 = FUNC_2(&VAR_4->disabled);
 if (FUNC_5(VAR_6 == 1)) {
  VAR_9 = FUNC_8();
  VAR_7 = FUNC_0(VAR_3, VAR_2, VAR_5, VAR_9);
 } else {
  VAR_7 = 0;
 }

 if (!FUNC_11(VAR_0))
  FUNC_10(VAR_0);

 FUNC_1(&VAR_4->disabled);
 FUNC_6(VAR_5);

 return VAR_7;
}
