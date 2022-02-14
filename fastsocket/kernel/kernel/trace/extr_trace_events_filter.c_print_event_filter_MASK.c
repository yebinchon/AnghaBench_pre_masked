
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct ftrace_event_call {struct event_filter* filter; } ;
struct event_filter {scalar_t__ filter_string; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;

void FUNC_3(struct ftrace_event_call *VAR_1, struct trace_seq *VAR_2)
{
 struct event_filter *VAR_3 = VAR_1->filter;

 FUNC_0(&VAR_0);
 if (VAR_3 && VAR_3->filter_string)
  FUNC_2(VAR_2, "%s\n", VAR_3->filter_string);
 else
  FUNC_2(VAR_2, "none\n");
 FUNC_1(&VAR_0);
}
