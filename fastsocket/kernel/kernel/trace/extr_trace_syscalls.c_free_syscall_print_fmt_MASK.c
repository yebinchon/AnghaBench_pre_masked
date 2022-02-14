
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall_metadata {struct ftrace_event_call* enter_event; } ;
struct TYPE_2__ {int print_fmt; } ;
struct ftrace_event_call {TYPE_1__ fmt; struct syscall_metadata* data; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ftrace_event_call *VAR_0)
{
 struct syscall_metadata *VAR_1 = VAR_0->data;

 if (VAR_1->enter_event == VAR_0)
  FUNC_0(VAR_0->fmt.print_fmt);
}
