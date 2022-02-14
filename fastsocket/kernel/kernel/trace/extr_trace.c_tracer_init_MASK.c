
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer {int (* init ) (struct trace_array*) ;} ;
struct trace_array {int dummy; } ;


 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (struct trace_array*) ;

int FUNC_2(struct tracer *VAR_0, struct trace_array *VAR_1)
{
 FUNC_1(VAR_1);
 return VAR_0->init(VAR_1);
}
