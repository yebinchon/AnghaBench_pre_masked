
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int dummy; } ;
struct trace_array {struct trace_array_cpu** data; } ;
struct mmiotrace_rw {int dummy; } ;


 int FUNC_0 (struct trace_array*,struct trace_array_cpu*,struct mmiotrace_rw*) ;
 struct trace_array* VAR_0 ;
 size_t FUNC_1 () ;

void FUNC_2(struct mmiotrace_rw *VAR_1)
{
 struct trace_array *VAR_2 = VAR_0;
 struct trace_array_cpu *VAR_3 = VAR_2->data[FUNC_1()];
 FUNC_0(VAR_2, VAR_3, VAR_1);
}
