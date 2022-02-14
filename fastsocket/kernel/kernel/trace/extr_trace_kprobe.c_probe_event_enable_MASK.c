
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kp; } ;
struct trace_probe {TYPE_1__ rp; int flags; } ;
struct ftrace_event_call {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct trace_probe*) ;

__attribute__((used)) static int FUNC_3(struct ftrace_event_call *VAR_1)
{
 struct trace_probe *VAR_2 = (struct trace_probe *)VAR_1->data;

 VAR_2->flags |= VAR_0;
 if (FUNC_2(VAR_2))
  return FUNC_1(&VAR_2->rp);
 else
  return FUNC_0(&VAR_2->rp.kp);
}
